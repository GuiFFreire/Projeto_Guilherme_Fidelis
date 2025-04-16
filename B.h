#include <iostream>

class B{
    private:
        int B1;
        float B2;
    
    public:

        B(){
            B1 = 0;
            B2 = 0;
        }

        int getB1(){
            return B1;
        }

        float getB2(){
            return B2;
        }

        void setB1(int B1){
            this->B1 = B1;
        }

        void setB2(float B2){
            this->B2 = B2;
        }

        void MB1(){
            std::cout << "Método MB1";
        }

        void MB2(){
            std::cout << "Método MB2";
        }
};