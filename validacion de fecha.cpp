#include <iostream>
#include <ctime>

using namespace std;

bool esBisiesto(int anio) {
    return ( (anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0) );
}

int diasEnMes(int mes, int anio) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return esBisiesto(anio) ? 29 : 28;
        default:
            return -1; // mes inválido
    }
}

int main() {
    int dia, mes, anio;
    cout << "=== PROMOCION CUMPLEANERO ===\n";
    cout << "Ingrese dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese mes de nacimiento (1-12): ";
    cin >> mes;
    cout << "Ingrese anio de nacimiento: ";
    cin >> anio;

    // Validaciones básicas
    if (anio < 1900 || anio > 2100) {
        cout << "Fecha invalida: anio fuera de rango (1900-2100).\n";
        return 0;
    }
    if (mes < 1 || mes > 12) {
        cout << "Fecha invalida: mes fuera de rango (1-12).\n";
        return 0;
    }
    int maxDia = diasEnMes(mes, anio);
    if (maxDia == -1) {
        cout << "Fecha invalida: mes no reconocido.\n";
        return 0;
    }
    if (dia < 1 || dia > maxDia) {
        cout << "Fecha invalida: el mes " << mes
             << " del anio " << anio << " tiene hasta " << maxDia << " dias.\n";
        return 0;
    }

    // Fecha válida. Consultar mes actual del sistema.
    time_t t = time(nullptr);
    tm* ahora = localtime(&t);
    int mesActual = ahora->tm_mon + 1; // tm_mon: 0=Ene ... 11=Dic

    cout << "Fecha valida: " << dia << "/" << mes << "/" << anio << ".\n";

    if (mes == mesActual) {
        cout << "Aplica descuento por cumpleanero (nacio en este mes).\n";
    } else {
        cout << "No aplica descuento (el cumple no es este mes).\n";
    }

    return 0;
}
