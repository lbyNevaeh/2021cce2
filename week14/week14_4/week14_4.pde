//week14
PImage img;
void setup(){
  size(700,500);
  img = loadImage("image.png");
 }
void draw(){
  image(img,mouseX,mouseY);
}
