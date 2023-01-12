#include <iostream>
using namespace std;

void troca_por_referencia(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 2, b = 3;
    cout << "Antes: a = " << a << " b = " << b << endl;
    troca_por_referencia(a, b);
    cout << "Depois: a = " << a << " b = " << b << endl;
    return 0;
}

// a função recebe uma referência às variáveis, portanto as alterações
// realizadas dentro da função alterarão os valores originais