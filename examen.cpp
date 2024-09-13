#include <iostream>

using namespace std;

void anioBisiesto(){
    int anio;
    cout << "Ingrese un anio: ";
    cin >> anio;

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
        cout << anio << " es un anio bisiesto." << endl;
    }else{
        cout << anio << " NO es un anio bisiesto." << endl;
    }
}

void tablaMultiplicar(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 10; i >= 1; i--) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

void fizzBuzz(){
    int limite;
    cout << "Ingrese un limite (mayor a 15)" << endl;
    cin >> limite;

    for (int i = 1; i <= limite; i++){
        if(i % 3 == 0 && i % 5 == 0){
        cout << "FizzBuzz" << endl;
    }else if(i % 3 == 0){
        cout << "Fizz" << endl;
    }else if(i % 5 == 0){
        cout << "Buzz" << endl;
    }else{
        cout << i << endl;
        }
}

}

 int main(){

    int opcion;

    do{

        cout << "\n Menu de ejercicios:\n";
        cout << "1. Determinar si un anio es bisiesto:\n";
        cout << "2. Tabla de multiplicar inversa:\n";
        cout << "3. FizzBuzz:\n";
        cout << "4. Salir:\n";
        cout << "Elegir una opcion: ";
        cin >> opcion;



            switch(opcion){
            case 1:
                anioBisiesto();
                cout << endl;
                break;

            case 2:
                tablaMultiplicar();
                cout << endl;
                break;

            case 3:
                fizzBuzz();
                cout << endl;
                break;

            case 4:
                cout << "Saliendo" << endl;
                cout << endl;
                break;
        }

    } while(opcion != 4);


return 0;
}

