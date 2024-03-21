//Omar Ramos Soto Ejercicio 2.7 (PAGINA 126) de autoevaluacion de:
// "COMO PROGRAMAR C++" SEGUNDA EDICION Deitel 1999.

// 21 DE MARZO DEL 2024.

#include <iostream>
using namespace std;



int main() {

    cout << "Hello, World!"<<endl;

    int x = 0;
    int y = 0;
    int i=1;
    int power=1;

    cout<<"Ingrese un numero para asingar a la variable X: "<<endl;
    cin>> x;

    cout<<"Ingrese un numero para asingar a la variable Y: "<<endl;
    cin>> y;

    power *= x;
    ++y;
    if (y<=x){
        cout<<"la variable Y es menor o igual a la variable X"<<endl;
    }
    cout<<"El valor de la variable power es: "<<power<<endl;



    return 0;

}
