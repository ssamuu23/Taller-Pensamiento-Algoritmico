#include <iostream>
using namespace std;
int main(){
    double num1, num2, resultado;
    char op;

    cout<< "==CALCULADORA=="<< endl;
    cout<< "Ingrese el primer numero:";
    cin>> num1;
    cout<< "Ingrese el segundo numero:";
    cin>> num2;
    cout<< "Ingrese la operacion (+, -, *, /):";
    cin>> op;

    if (op == '+'){
        resultado = num1 + num2;
        cout<< "Resultado: " << resultado << endl;
    }

    else if (op == '-') {
        resultado = num1 - num2;
        cout<< "Resultado: " << resultado << endl;

    }
    else if (op == '*'){
        resultado = num1 * num2;
        cout<< "Resultado: " << resultado << endl;
    }
    else if (op == '/'){
        if (num2 == 0){
            cout<< "Error: No se puede dividir entre 0" << endl;
        } else {
            resultado = num1 / num2;
            cout<< "Resultado: " << resultado << endl;
    
        }
        
    }
    else {
        cout<< "Error: Operador invalido. Por favor use (+, -, *, /)"<< endl;

    }
    return 0;
}