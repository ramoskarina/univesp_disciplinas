#include <iostream>
using namespace std;

main () {
    int number1;
    int number2;

    cout << "Insira o primeiro numero: " << endl;
    cin >> number1;

    cout << "Insira o segundo numero: " << endl;
    cin >> number2;

    int sum (int number1, int number2); {
        return number1 + number2;
    }

    int sub (int number1, int number2); {
        return number1 - number2;
    }

    int mul (int number1, int number2); {
        return number1 * number2;
    }

    int idiv (int number1, int number2); {
        return number1 / number2;
    }
}