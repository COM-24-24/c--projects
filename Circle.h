#pragma once

namespace shapes {
    class Circle {
        private:
            float Radius;
        public:
            Circle(){
                Radius = 0.0;
            }

            Circle(float radius){
                Radius = radius;
            }

            void setRadius(float r){
                Radius = r;
            }

            float getRadius(){
                return Radius;
            }

            ~Circle() {
                // Destructor code (if needed)
            }
    };
};