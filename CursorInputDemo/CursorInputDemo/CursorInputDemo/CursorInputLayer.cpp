//
//  CursorInputLayer.cpp
//  CursorInputDemo
//
//  Created by Tom on 12-5-15.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include "CursorInputLayer.h"

#include "CursorTextField.h"


CursorInputLayer::CursorInputLayer()
{
    m_pCursorTextField = NULL;
}

CursorInputLayer::~CursorInputLayer()
{
}


bool CursorInputLayer::init()
{
    bool bRet = false;
    
    do {
        CC_BREAK_IF(!CCLayer::init());
        
        CCSize winSize = CCDirector::sharedDirector()->getWinSize();
        
        m_pCursorTextField = CursorTextField::textFieldWithPlaceHolder("Input Text", "Thonburi", 64);
        m_pCursorTextField->setPosition(ccp(winSize.width / 2, winSize.height / 2 + 100));
        this->addChild(m_pCursorTextField);
        
        bRet = true;
    } while (0);
    
    return bRet;
}