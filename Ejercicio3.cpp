#include <iostream>
using namespace std;  
int main()
{
    //Se asignan variables sin arreglos
    int cant, contador;
    
    //Se inicia un bucle debido que no puede ingresar una cantidad negativa para los numeros que el usuario quiere ingresar.
    do {
        //Se le da la bienvenida e indicaciones.
        cout << "-----------BIENVENIDO A LA TRANSFORMACION DE NUMEROS.----------- \n";
        cout << "Un numero par se devidie entre 2 y los impares se multiplican por 10.\n";
        //Se solicita la cantidad de numeros que quiere ingresar y se guarda en la variable 'cant'.
        cout << "¿Cuantos numeros desea ingresar?: ";
        cin >> cant;
        //Se hace una condicion en donde se dice que si el numero que ingreso es menor a 10
        //entonces no podra realizarse la transfromacion
        if (cant <= 0) {
            cout << "La cantidad de numeros debe ser un numero entero positivo. Inténtelo de nuevo." << endl;
        }
    } while (cant <= 0);//El bucle termina hasta que la variable 'cant'
    
    //Se declara la variable con el arreglo.
    int num[cant];
    //Se solicita al usuario que ingrese un numero, este se va a repetir hasta que 
    //la variable 'i' sea menor al tamaño del arreglo. 
        for(int i = 0; i < cant; i++){
            cout << "Ingrese un numero: ";
            cin >> num[i];
        }

    //Se procede a transformar los numeros ingresados, esto terminará hasta que se haya 
    //hecho con todos los espacios del arreglo.
    for (int j = 0; j < cant; ++j) {
        //Se usa una condicional, porque sí el numero es un par (sacando modulo) se divide entre 2
        //Sino (Si es impar) entonces se va a multiplicar por 10
        if (num[j] % 2 == 0) {
            num[j] = num[j] / 2;
        } else {
            num[j] = num[j] * 10;
        }
        //Luego se le devuelve el numero transformado.
        cout << "El " << j + 1 << " numero transformado es: " << num[j] <<". \n";
    }
    
    cout << "Muchas gracias por transformar:)...";

    return 0;
}