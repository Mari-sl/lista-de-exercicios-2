#include <iostream>
using namespace std;

int main() {
   double a, b, c;
    cout << "Digite os tres lados do triangulo: ";
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c)
            cout << "Triangulo equilatero" << endl;
        else if (a == b || a == c || b == c)
            cout << "Triangulo isosceles" << endl;
        else
            cout << "Triangulo escaleno" << endl;
    } else {
        cout << "Não forma um triangulo" << endl;
    }

    return 0;
}