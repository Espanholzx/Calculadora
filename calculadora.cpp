```cpp
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{ 
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, resultado; 
    char op; 
    cout << "Digite o primeiro número: ";
    cin >> num1; 
    cout << endl << "Digite a operação(+, -, *, /): ";
    cin >> op;
    cout << endl << "Digite o segundo número: ";
    cin >> num2;

    
    switch(op) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '/':
            if(num2 != 0) {
            resultado = (float)num1 / num2;
            cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Nao é necessário dividir zero." << endl;
            }
            break;
        default:
            cout << "Inválido." << endl;
            break;
    }
    return 0;
}```
