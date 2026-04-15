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

        ~Rectangle() {
            // Destructor code (if needed)
        }
    
   /*void setValue(float x, float y){
        length = x;
        width = y;
    }
    */
   
    float getArea(){
        return length * width; 
   }
};