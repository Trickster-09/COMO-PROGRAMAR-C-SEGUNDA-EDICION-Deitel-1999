//Omar Ramos Soto Ejercicio 2.8 (PAGINA 126) de autoevaluacion de:
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
    int potencia;
    int auxY;

    do {
        cout<<"Ingrese un numero apartir de 0 para asingar a la variable X: "<<endl;
        cin>> x;
    } while (x<0);

    do{
        cout<<"Ingrese un numero apartir de 0 para asingar a la variable Y: "<<endl;
        cin>> y;
    }while(y<0);

    power *= x;
    ++y;

    if (y<=x){
        cout<<"La variable Y es menor o igual a la variable X"<<endl;
    }
    cout<<"El valor de la variable power es: "<<power<<endl;



    //Aqui empieza el 2.8
    potencia = x;

    //cout<<"El valor de Y es: "<<y<<endl;
    auxY=y;
    if (y!=0){
        while (y!=1){
            potencia *= x;
            y--;
        }
    } else potencia = 1;

    /*Realmete nunca "y" va a tomar valores de 0 o 1 ya que al limitar a los positivos y
    sumarle siempre uno al codigo, estos valores nunca se tocaran en el programa
    */

    cout<<"El valor de "<<x<<" elevado a la "<<auxY<<" es: "<<potencia<<endl;


    return 0;

}
