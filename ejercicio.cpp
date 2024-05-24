
#include <iostream> 

using namespace std;

int main() {
    int valor, acumulador = 0;
    cout << "Ingrese un valor: ";
    cin >> valor;
    while (valor != 9999) {
        acumulador += valor;
        cout << "Ingrese un valor: ";
        cin >> valor;
    }
    cout << "El valor acumulado es: " << acumulador << endl;
    if (acumulador == 0) {
        cout << "El valor acumulado es cero" << endl;
    } else if (acumulador > 0) {
        cout << "El valor acumulado es mayor a cero" << endl;
    } else {
        cout << "El valor acumulado es menor a cero" << endl;
    }
    return 0;
}