#include <iostream>

int Xor(int Entrada1, int Entrada2)
{
    return Entrada1 * (!Entrada2) + (!Entrada1) * Entrada2;

}

int Xnor(int Entrada1, int Entrada2)
{
    return (Entrada1 * Entrada2) + ((!Entrada1) * (!Entrada2));
}


int main()
{
    int A[4] = {0, 1, 0, 1};
    int B[4] = {0, 0, 1, 1};

    for (int i=0; i < 4; i++){
        std::cout<<Xor(A[i], B[i])<<std::endl;
    }

    return 0;
}
