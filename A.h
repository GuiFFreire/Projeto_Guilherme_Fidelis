#include <iostream>

class A{
    private:
        int A1;
        float A2;
    
    public:

        A(){
            A1 = 0;
            A2 = 0;
        }

        int getA1(){
            return A1;
        }

        float getA2(){
            return A2;
        }

        void setA1(int A1){
            this->A1 = A1;
        }

        void setA2(float A2){
            this->A2 = A2;
        }

        void MA1(){
            std::cout << "Método MA1";
        }

        void MA2(){
            std::cout << "Método MA2";
        }
};