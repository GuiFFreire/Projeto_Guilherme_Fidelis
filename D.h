#include <iostream>

class D{
    private:
        int D1;
        int D2;

    public:
        D(int D1, int D2){
            this->D1 = D1;
            this->D2 = D2;
        }
        
        bool MD1(int D1){
            return this->D1 == D1;
        }

        bool MD2(int D2){
            return this->D2 == D2;
        }

        void MD3(){
            std::cout << "Método MD3";
        }
};