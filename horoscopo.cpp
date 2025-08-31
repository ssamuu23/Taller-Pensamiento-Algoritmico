#include <iostream>
using namespace std;

bool fechaValida(int dia, int mes) {
    int diasMes;
    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            diasMes = 31; break;
        case 4: case 6: case 9: case 11:
            diasMes = 30; break;
        case 2:
            diasMes = 29; 
            break;
        default:
            return false;
    }
    return (dia >= 1 && dia <= diasMes);
}

string signoZodiacal(int dia, int mes) {
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) return "Aries";
    if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) return "Tauro";
    if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) return "Geminis";
    if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) return "Cancer";
    if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) return "Leo";
    if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) return "Virgo";
    if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) return "Libra";
    if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) return "Escorpio";
    if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) return "Sagitario";
    if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) return "Capricornio";
    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) return "Acuario";
    if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) return "Piscis";
    return "Desconocido";
}

int main() {
    int dia, mes;
    cout << "=== HOROSCOPO ===\n";
    cout << "Ingrese dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese mes de nacimiento: ";
    cin >> mes;

    if (!fechaValida(dia, mes)) {
        cout << "Fecha invalida.\n";
        return 0;
    }

    cout << "Su signo zodiacal es: " << signoZodiacal(dia, mes) << endl;

    return 0;
}