// 円の座標
float x;
float y;

// 目的地の座標
float targetX;
float targetY;

float easing;

boolean isAnime;

void setup(){
  size(500, 500);
  background(0);
  noStroke();
  isAnime = false;
  // グローバル変数に初期値を代入
  x = width/2;
  y = height/2;
  targetX = width/2;
  targetY = height/2;
  easing = 0.05;
}

void draw(){
  background(0);
  
  // 現在の位置と目的地の差分（距離）
  float distanceX = targetX - x;
  float distanceY = targetY - y;
  
  //現在のX座標に距離を足していく、イージングでスピードに変化を加える
  x = x + distanceX * easing;
  y = y + distanceY * easing;

  // 絶対座標が1以上ならアニメーションする
  if(abs(distanceX) < 1.0 && abs(distanceY) < 1.0){
    isAnime = false;
    println(isAnime);
  }
  println(distanceX);
  
  fill(255,0,0);
  ellipse(x,y,40,40);
}

void mousePressed(){
  
  if(!isAnime){
    targetX = mouseX;
    targetY = mouseY;
    isAnime = true;
    println(isAnime);
  }
  
}
