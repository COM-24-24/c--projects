#pragma once

namespace shapes {
    class Triangle {
        private:
            float Base;
            float Height;
        public:
            Triangle(){
                Base = 0.0;
                Height = 0.0;
            }

            Triangle(float b, float h){
                Base = b;
                Height = h;
            }

            void setBase(float b){
                Base = b;
            }

            void setHeight(float h){
                Height = h;
            }

            float getBase(){
                return Base;
            }

            float getHeight(){
                return Height;
            }

            ~Triangle() {
                // Destructor code (if needed)
            }
    };
}