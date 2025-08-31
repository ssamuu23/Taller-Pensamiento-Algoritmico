#include <iostream>
#include <string>
using namespace std;
int main () {
    string tipoCliente;
    int cantidad;
    double precio, subtotal, descuento, total;

    cout << "=== SISTEMA DE DESCUENTOS ===\n";
    cout << "Ingrese tipo de cliente (VIP o Regular): ";
    cin >> tipoCliente;
    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;
    cout << "Ingrese el precio unitario: ";
    cin >> precio;

    subtotal = cantidad * precio;

    for (auto &c : tipoCliente) c = toupper(c);

    if (tipoCliente == "VIP") {
        descuento = 0.20;
    } else if (tipoCliente == "REGULAR") {
        if (cantidad >= 4) {
            descuento = 0.10;
        } else {
            descuento = 0.0;
        }
    } else {
        cout << "Tipo de cliente no valido. Debe ser 'VIP' o 'Regular'.\n";
        return 0;
    }

    total = subtotal - (subtotal * descuento);

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento aplicado: " << (descuento * 100) << "%" << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}