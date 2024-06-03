#include <iostream>
using namespace std;
int main()
{
    //se declaran variables.
    float rango;
    int decision;
    cout << "-----------ESCALA TERMICA PARA PACIENTES CON FIEBRE.----------- \n";
    
    //Se utiliza un do-while para preguntarle al usuario si ingresará otro paciente para saber su escala.
    do{
        //se le solicita al usuario que ingrese el rango de temperatura en que se encuentra el paciente.
        cout << "Ingrese el rango de temperatura en que se encuentra el paciente: ";
        cin >> rango;
        
        //se utiliza la condicion 'Else-if' debido que es el más adecuado para manejar rango de valores.
        //en cada if o else-if se hace una comparacián de valores para determinar en qué escala se encuentra el paciente
        if(rango >= 37.4 , rango <=37.9 ){
            //Por ejemplo, si los datos ingresados guardados en la variable 'rango' estan en la comparación del if, mostrará lo siguiente.
            cout << "Su paciente se encuentra en la escala: Febricula. \n";
        } else if(rango >= 38.0, rango <= 38.9){
            cout << "Su paciente se encuentra en la escala: Fiebre moderada. \n";
        } else if(rango >= 39.0, rango <= 39.9){
            cout << "Su paciente se encuentra en la escala: Fiebre alta. \n";
        } else if(rango >= 40.0, rango <= 41.5){
            cout << "Su paciente se encuentra en la escala: Fiebre muy alta. \n";
        } else if(rango > 41.5){
            cout << "Su paciente se encuentra en la escala: Hiperporexia. \n";
        } else if(rango < 37.4){
            cout << "Su paciente se encuentra en la escala: Hipotermia. \n";
        } else {
            cout << "Sus valores son incorrectos *_*";
        }
        
        //Se pregunta al usuario si ingresará más datos, si elige 1, volverá a ingresar, si elije 2, entonces saldrá del bucle.
        cout << "Desea ingresar a otro paciente?(escoja un numero) \n1.Si \n2.no \n";
        cin >> decision;
        
    }while(decision == 1);
    
    return 0;
}
