#include <iostream>
#include <iomanip> // para setw y setfill
using namespace std;

int main() {
    int hora, minuto;

    cout << "=== CONTROL DE HORARIOS ===\n";
    cout << "Ingrese la hora (0-23): ";
    cin >> hora;
    cout << "Ingrese los minutos (0-59): ";
    cin >> minuto;

    if (hora < 0 || hora > 23) {
        cout << "Error: hora invalida. Debe estar entre 0 y 23.\n";
        return 0;
    }
    if (minuto < 0 || minuto > 59) {
        cout << "Error: minutos invalidos. Deben estar entre 0 y 59.\n";
        return 0;
    }

    cout << "Hora valida registrada: "
         << setw(2) << setfill('0') << hora << ":"
         << setw(2) << setfill('0') << minuto << endl;

    return 0;
}
