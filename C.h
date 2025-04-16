#include <iostream>

class C{
    private:
        std::string C1;
        int C2;
    
    public:

        C(){
            C1 = "";
            C2 = 0;
        }

        void MC1(){
            std::cout << "Método MC1";
        }

        void MC2(){
            std::cout << "Método MC2";
        }

        void MC3(){
            std::cout << "Método MC3";
        }
};