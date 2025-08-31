#include <iostream>
using namespace std;

int main(){
      const int PIN_CORRECTO = 1234;
    int pin, intentos = 0;
    double saldo = 1000.0;
    int opcion;

    cout << "=== CAJERO AUTOMATICO ===\n";

    
    while (intentos < 3) {
        cout << "Ingrese su PIN de 4 digitos: ";
        cin >> pin;
        if (pin == PIN_CORRECTO) {
            cout << "PIN correcto. Accediendo al menu...\n\n";
            break;
        } else {
            intentos++;
            cout << "PIN incorrecto. Intentos restantes: " << (3 - intentos) << endl;
            if (intentos == 3) {
                cout << "Acceso bloqueado por exceso de intentos.\n";
                return 0;
            }
        }
    }

    
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;

            case 2: {
                double monto;
                cout << "Ingrese el monto a retirar: ";
                cin >> monto;
                if (monto <= saldo && monto > 0) {
                    saldo -= monto;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Error: Fondos insuficientes o monto invalido.\n";
                }
                break;
            }

            case 3:
                cout << "Gracias por usar el cajero. Hasta luego!\n";
                break;

            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }

    } while (opcion != 3);

    return 0;
}