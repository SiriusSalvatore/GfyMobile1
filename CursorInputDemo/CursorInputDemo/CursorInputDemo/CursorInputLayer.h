//
//  CursorInputLayer.h
//  CursorInputDemo
//
//  Created by Tom on 12-5-15.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef CursorInputDemo_CursorInputLayer_h
#define CursorInputDemo_CursorInputLayer_h

#include "cocos2d.h"

class CursorTextField;

USING_NS_CC;

class CursorInputLayer: public CCLayer 
{
private:
    CursorTextField *m_pCursorTextField;
    
public:
    CursorInputLayer();
    ~CursorInputLayer();
    
    virtual bool init();
    
    LAYER_NODE_FUNC(CursorInputLayer);
};

#endif
