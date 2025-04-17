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

<<<<<<< HEAD
        void MD3(){
            std::cout << "Método MD3";
        }
};
=======
        void MD4(){
            std::cout << "Método MD4";
        }
};
>>>>>>> 56f76313009d4b5c435d58536dc5fbf9e845c700
