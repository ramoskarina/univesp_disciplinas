#include <iostream>
using namespace std;

main () {
    int count = 0;
    int number = 0;
    int sum = 0;

    do {
        cout << "Insira um novo numero: " << endl;
        cin >> number;

        sum += number;
        count++;
    } while (number != 0);

    float average = (float) sum / (float)(count - 1);
    cout << "A media da serie eh: " << average << endl;
}