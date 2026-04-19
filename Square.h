#pragma once

namespace shapes {
   class Square{
        private:
            float sideLength;
        public:
            Square(){
                sideLength = 0.0;
            }

            void setLength(float side){
                sideLength = side;
            }

            float getLength(){
                return sideLength;
            }

            ~Square() {
                // Destructor code (if needed)
            }
    };
}