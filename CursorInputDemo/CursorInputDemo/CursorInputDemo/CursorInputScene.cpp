//
//  CursorInputScene.cpp
//  CursorInputDemo
//
//  Created by Tom on 12-5-15.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include "CursorInputScene.h"

#include "CursorInputLayer.h"

CursorInputScene::CursorInputScene()
{
}

CursorInputScene::~CursorInputScene()
{
}

bool CursorInputScene::init()
{
    bool bRet = false;
    
    do {
        CC_BREAK_IF(!CCScene::init());
        
        CursorInputLayer *cursorInputLayer = CursorInputLayer::node();
        this->addChild(cursorInputLayer);
        
        bRet = true;
    } while (0);
    
    return bRet;
}