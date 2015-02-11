//
//  WebTopView.cpp
//  WebView
//
//  Created by MAEDAHAJIME on 2015/02/11.
//
//

#include "WebTopView.h"
#include "ui/CocosGUI.h"

USING_NS_CC;

// _/_/_/ コンストラクタ プロパティー _/_/_/
WebTopView::WebTopView()
{
    
}

// WebTopView デストラクタで解放 メモリーリークを防ぐ
WebTopView::~WebTopView()
{

}

Scene* WebTopView::createScene()
{
    auto scene = Scene::create();
    auto layer = WebTopView::create();
    scene->addChild(layer);
    return scene;
}

bool WebTopView::init()
{
    if (!Layer::init()) {
        return false;
    }
    
    // 画面サイズを取得
    Size visibleSize = Director::getInstance()->getVisibleSize();
    // 原点を取得
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto webView = cocos2d::experimental::ui::WebView::create();
    // アーカーポンイント
    webView->setAnchorPoint(Point(0.5f, 0.5f));
    
    webView->setContentSize(Size(visibleSize.width * 1.0f, visibleSize.height * 1.0f));
    webView->setPosition(Vec2(origin.x + visibleSize.width * 0.5f, origin.y + visibleSize.height * 0.5f));
    webView->loadURL("http://www.yahoo.co.jp/");

    this->addChild(webView, 1);
    
    return true;
}