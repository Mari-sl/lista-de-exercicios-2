#include <iostream>
using namespace std;

int main() {
    float base, altura;
    cout << "Digite a base e altura do terreno: ";
    cin >> base >> altura;

    float area = base * altura;
    if (area > 100)
        cout << "Terreno grande" << endl;
    else
        cout << "Terreno pequeno" << endl;

    return 0;
}