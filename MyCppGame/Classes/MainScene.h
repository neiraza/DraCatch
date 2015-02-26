//
//  MainScene.h
//  MyCppGame
//
//  Created by A13694 on 2015/02/26.
//
//

#ifndef __MyCppGame__MainScene__
#define __MyCppGame__MainScene__

#include "cocos2d.h"

class MainScene :public cocos2d::Layer
{
//protected:
public:
  MainScene();
  virtual ~MainScene();
  bool init() override;

//public:
  static cocos2d::Scene* createScene();
  CREATE_FUNC(MainScene);
};

#endif /* defined(__MyCppGame__MainScene__) */
