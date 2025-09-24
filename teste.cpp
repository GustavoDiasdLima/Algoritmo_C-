#include <iostream>

int retangulo(int l1, int l2){ //definir parametros 
    int perimetro = (l1 * 2) + (l2 * 2); //definir variavel
    return perimetro;
}

int main (){ //chamar a função
    int l1, l2; 
    std::cin >> l1 >> l2; 
    int p = retangulo(l1, l2);
    std::cout << p << std::endl; //fim 
    return 0; 
}
