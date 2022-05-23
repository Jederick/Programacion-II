#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "cuentaPalabras.h"
using namespace std;

int main(){


    //STREAM DE CONSOLA (INPUT OUTPUT, iostream) 
    /*
    string nombre{};
    string apellido1{};
    string apellido2{};

    cout << "Ingrese su nombre: ";
    cin >> nombre >> apellido1 >> apellido2;
    cout << "Su nombre es " << nombre << apellido1 << apellido2 << endl;
    */

    /*****************************************************************************************/

    //STREAM LINEA POR LINEA (fstream)
    /**
    // ofstream ofs("ejemploOf.txt", ofstream::out); Para escribir en archivos

    ifstream ifs("ejemploIn.txt", ifstream::in);   //Para leer archivos

    if(!ifs.is_open() ){
        cerr << "Error leyendo el archivo ejemploIn.txt" << endl;
        return -1;
    }

    string linea{};

    //mientras el getline obtenga alguna linea:
    while(getline(ifs, linea) ){
        cout << "Linea: " << linea << endl;
    }
    ifs.close();
    */  

    /*********************************************************************************************/

    //Stream de string (sstream)

    /*
    string nombre = "";
    string apellido1{};
    string apellido2{};

    string hileraEntrada = "Jederick Cajina Paniagua";
    istringstream stream(hileraEntrada);
    stream >> nombre >> apellido1 >> apellido2;

    cout << "Su nombre es: " << nombre << apellido1 << apellido2 << endl;
    */

    /***********************************************************************************************/

    /*ifstream archivo("ejemploIn.txt", ifstream::in);
    if(!archivo.is_open() ){
        cout << "Error al abrir el archivo" << endl;
        return -1;
    }

    istringstream stream("Hola, wasane, no cap in mai capchon");

    CuentaPalabras cuentaPalabras(&archivo);
    CuentaPalabras aistrim(&stream);

    cout << "Su texto tiene la cantidad de " << cuentaPalabras.contarPalabras() << " palabras" << endl;
    cout << "Su texto tiene la cantidad de " << aistrim.contarPalabras() << " palabras" << endl;
    archivo.close(); */

    string caca = "ascascasc";
    string caca2 = "holi";
    string caca3 = caca + caca2;
    cout << caca3;
    return 0;
}