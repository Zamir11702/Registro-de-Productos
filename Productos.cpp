#include <iostream>
using namespace std;

int main() {

    string producto;
    float precio;
    int cantidad;

    cout << "====================================" << endl;
    cout << "       REGISTRO DE PRODUCTO" << endl;
    cout << "====================================" << endl;

    cout << "Ingrese el nombre del producto: ";
    cin >> producto;

    cout << "Ingrese el precio: ";
    cin >> precio;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    float total = precio * cantidad;

    cout << "\n====================================" << endl;
    cout << "          INFORMACION" << endl;
    cout << "====================================" << endl;

    cout << "Producto: " << producto << endl;
    cout << "Precio: $" << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Total: $" << total << endl;

    return 0;
}