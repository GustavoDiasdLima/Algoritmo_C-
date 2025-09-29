#include <iostream>

using namespace std;

int main(){
    //tipo nome;
    //tipo nome = valor;

    int vidas = 0; //10, 25
    char letra = 'b'; //'b'
    double decimal = 5.2; //2.4999
    float decimal2 = 5.2; // 2.5
    bool vivo = true; //verdadeiro , falso
    string nome = "bruno"; // "bruno"

    cout << "digite o numero de vidas: "; //saida
    cin >> vidas; //armazenar na variavel vidas
    cout << "digite uma letra: ";
    cin >> letra;
    cout << "digite um dinheiro: ";
    cin >> decimal;
    cout << "digite seu nome: ";
    cin >> nome;

    cout << vidas << "\n" << letra << "\n" << decimal << "\n" << nome << "\n";//para imprimir
    

    return 0;
}
    