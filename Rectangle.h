#pragma once

class Rectangle {
    private:
        float length;
        float width;

    public:
         Rectangle(){
            length = 0.0;
            width = 0.0;
        }

        Rectangle(float l, float w){
            length = l;
            width = w;
        }
    
   /*void setValue(float x, float y){
        length = x;
        width = y;
    }
    */
   
    float getArea(){
        return length * width; 
   }

   
    // ~Rectangle();
};