#include <iostream>
using namespace std;

int main() {
    double p1, p2_necessaria;

    cout << "Digite a nota da P1: ";
    cin >> p1;

    p2_necessaria = (5 * 3 - p1) / 2;

    cout << "Para ser aprovado, precisa tirar " << p2_necessaria << " na P2." << endl;

    if (p2_necessaria > 10)
        cout << "Imposs�vel ser aprovado, nota necess�ria maior que 10." << endl;
    else if (p2_necessaria < 0)
        cout << "J� est� aprovado independentemente da nota da P2." << endl;

    return 0;
}