#include <iostream>
using namespace std;

main () {
    int total;

    for (int number = 2; number <= 20; number += 2)
        total += number;
    cout << "A soma da serie eh " << total << endl;

    return 0;
}