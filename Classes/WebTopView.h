//
//  WebTopView.h
//  WebView
//
//  Created by MAEDAHAJIME on 2015/02/11.
//
//

#ifndef __WebView__WebTopView__
#define __WebView__WebTopView__

#include "cocos2d.h"

class WebTopView :public cocos2d::Layer
{
protected:
    // コンストラクタ
    WebTopView();
    // デストラクタ
    virtual ~WebTopView();
    // メソッド CREATE_FUNCとの連携
    bool init() override;
    
public:
    static cocos2d::Scene* createScene();
    
    CREATE_FUNC(WebTopView);
};

#endif /* defined(__WebView__WebTopView__) */
