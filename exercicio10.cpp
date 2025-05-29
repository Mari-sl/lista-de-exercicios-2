#include <iostream>
using namespace std;

int main() {
    double p1, p2, media;

    cout << "Digite a nota da P1: ";
    cin >> p1;
    cout << "Digite a nota da P2: ";
    cin >> p2;

    media = (p1 + 2 * p2) / 3;

    cout << "Media: " << media << endl;

    if (media >= 5)
        cout << "Situacao: Aprovado" << endl;
    else
        cout << "Situacao: Reprovado" << endl;

    return 0;
}