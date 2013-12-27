//
//  CursorInputScene.h
//  CursorInputDemo
//
//  Created by Tom on 12-5-15.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#ifndef CursorInputDemo_CursorInputScene_h
#define CursorInputDemo_CursorInputScene_h

#include "cocos2d.h"

USING_NS_CC;

class CursorInputScene: public CCScene {
    
public:
    CursorInputScene();
    ~CursorInputScene();
    
    virtual bool init();
    
    SCENE_NODE_FUNC(CursorInputScene);
};

#endif
