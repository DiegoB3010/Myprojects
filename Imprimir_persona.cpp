/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;

class Persona { //inicio de la clase persona
//declaracion de los atributos
public:
    string nombre;
    int edad;
    string sexo;
    int id;
//declaracion del metodo
    void imprimir();
}; //fin de la clase persona


void Persona::imprimir() { //inicio del metodo para imprimir los atributos
    cout << "ID :" << id << endl;
    cout << "Nombre :" << nombre << endl;
    cout << "Edad :" << edad << endl;
    cout << "Sexo :" << sexo << endl;
}; //fin del metodo imprimir

int main() //inicio de la funcion principal
{
    int id, edad, id_;
    string nombre, sexo;
//se crea el objeto
    Persona p1;
    cout << "Ingrese el ID :"; cin >> p1.id;
    cout << "Ingrese el nombre :"; cin >> p1.nombre;
    cout << "Ingrese la edad :"; cin >> p1.edad;
    cout << "Ingrese el sexo :"; cin >> p1.sexo;

//se pide el id del objeto
    cout << "Ingrese el ID de la persona que desea buscar:";
    cin >> id_;
//en caso de existir, imprime los datos de la persona
    if (p1.id == id_) {
        cout << "Datos de la persona" << endl;
        p1.imprimir();

    }
//en caso contrario indica que no se encontró
    else {
        cout << "No se encontro a la persona";
    }
    return 0;
};










