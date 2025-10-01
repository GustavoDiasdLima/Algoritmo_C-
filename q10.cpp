#include <iostream>




double raiz_rec(double n, double raiz_anterior);
        double raiz_candidata = (raiz_anterior + ( n / raiz_anterior)) / 2;) )
        if (abs(raiz_candidata - raiz_anterior < 0.001)){
            return raiz_candidata;
        } else {
            return raiz_rec(n, raiz_candidata);
     }


double raiz(double n){
    return raiz_rec(n, 1.0);
}                                                                         


int main(){
    double n;
    std::cin >> n;
    double r = raiz(n);
    std::cout << r << std::endl;
    return 0;
}