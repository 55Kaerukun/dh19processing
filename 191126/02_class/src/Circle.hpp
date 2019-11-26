#pragma once //繰り返しガード
#include "ofMain.h" //クラス内でoFの機能を使うため

//
//  Circle.hpp
//  02-02_class
//
//  Created by yonekuraakio on 2018/11/27.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>


class Circle{
public:
    //コンストラクタ -------
    Circle();
    
    //メソッド(関数) -------------
    void update();
    void draw();
    
    //プロパティ(変数) -----------
    //座標
    ofVec2f pos;
    
    //スピード
    ofVec2f speed;
    
    //半径
    float radius;

};



#endif /* Circle_hpp */
