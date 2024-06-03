#include <iostream>
using namespace std;
int main()
{
    //Se declaran variales.
    float a1, a2, base, area;
    cout << "-----------CALCULO DE AREA DEL TRAPECIO-----------\nRecuerda que el trapecio que quiere calcular tiene un lado mas pequenio que el otro. \n";
    //Se solicita al usuario que ingrese los valores del trapecio para calcular su área y se guardan en las variables específicas.
    cout << "Ingrese el valor de la primera altura: ";
    cin >> a1;
    cout << "Ingrese el valor de la segunda altura: ";
    cin >> a2;
    cout << "Ingrese el valor de la Base: ";
    cin >> base;
    
    //Se utiliza una condición if debido que el trapecio de la imagen no tiene alturas iguales. 
    //Este if ayuda a diferenciar las alturas para saber que no tienen que ser iguales.
    if(a1 != a2){
        //Se hace la operación del área, según la forma que se brinda.
        area = (a1+a2/2)*base;   
        //Se le da el valor del área al usuario.
        cout << "El valor del area del trapecio es de: "<< area<< ". \n";

    } else{
        //En dado caso que sean iguales, mostrará el siguiente mensaje. 
        cout << "Sus alturas son iguales, no es el trapecio esperado:(... ";
    }
    
    return 0;
}