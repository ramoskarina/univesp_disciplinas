#include <iostream>
using namespace std;

// isso se chama declaração de função, serve para deixar mais organizado
// serve para que a definição de função possa permanecer depois da main

int sum (int number1, int number2);
int sub (int number1, int number2);
int mul (int number1, int number2);
int idiv (int number1, int number2);

main () {
    int number1;
    int number2;
    int resultSum;
    int resultSub;
    int resultMul;
    int resultIdiv;

    cout << "Insira o primeiro numero: " << endl;
    cin >> number1;

    cout << "Insira o segundo numero: " << endl;
    cin >> number2;

    resultSum = sum(number1, number2);
    resultSub = sub(number1, number2);
    resultMul = mul(number1, number2);
    resultIdiv = idiv(number1, number2);

    cout << "Resultado da soma: " << resultSum << endl;
    cout << "Resultado da subtracao: " << resultSub << endl;
    cout << "Resultado da multiplicacao: " << resultMul << endl;
    cout << "Resultado da divisao de inteiro: " << resultIdiv << endl;
}

// essas são as minhas definições de funções
int sum (int number1, int number2) {
    return number1 + number2;
}

int sub (int number1, int number2) {
    return number1 - number2;
}

int mul (int number1, int number2) {
    return number1 * number2;
}

int idiv (int number1, int number2) {
    return number1 / number2;
}