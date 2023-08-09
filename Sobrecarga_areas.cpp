/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;

class Operaciones{ //incio de la clase de operaciones
//se declaran los atributos
    public:
    float areatri,areacir,areatrap;
    int areacua;
//sobrecarga de metodos
    float area(float base, float altura);
    int area(int lado);
    float area(float radio);
    float area(float base_mayor, float base_menor, float altura2);
};//fin de la clase operaciones

    float Operaciones::area(float base, float altura){//inicio del metodo para el area del triangulo
        areatri=(base*altura)/2;
        return areatri;
    };//fin del metodo
    
    int Operaciones::area(int lado){//inicio del metodo para el area del cuadrado
        areacua=lado*lado;
        return areacua;
    };//fin del metodo
    
    float Operaciones::area(float radio){//inicio del metod para el area del circulo
        areacir=3.1416*(radio*radio);
        return areacir;
    };//fin del metodo
    
    float Operaciones::area(float base_mayor, float base_menor, float altura2){//inicio del metodo para le area del trapecio
        areatrap=(((base_mayor+base_menor)/2)*altura2);
        return areatrap;
    };//fin del metodo
    
//Inicio del menu
int menu()
{
    int x;
    cout<<"De que figura desea calcular su área:"<<endl;
    cout<<"1.Triangulo"<<endl;
    cout<<"2.Cuadrado"<<endl;
    cout<<"3.Círculo"<<endl;
    cout<<"4.Trapecio"<<endl;
    cout<<"5.Salir"<<endl;
    cin >> x;
    return x;
};//Fin del menu

//inicio del main principal
int main()
 {
     int op;
     do {
     op = menu();
     switch (op) {
     case 1:
     //se crea el objeto
     Operaciones m1;
     float base;
     float altura;
        cout<<"Ha elegido triangulo"<<endl;
        cout<<"Ingrese el tamaño de la base:"<<endl;
        cin>>base;
        cout<<"Ingrese la altura"<<endl;
        cin>>altura;
        cout<<"El área es:"<<m1.area(base, altura);
        cout<<endl;
     break;
     case 2:
        int lado;
        cout<<"Ha elegido cuadrado"<<endl;
        cout<<"Ingrese el tamaño de uno de los lados:"<<endl;
        cin>>lado;
        cout<<"El área es:"<<m1.area(lado);
        cout<<endl;
     break;
     case 3:
     float radio;
        cout<<"Ha elegido círculo"<<endl;
        cout<<"Ingrese el radio:"<<endl;
        cin>>radio;
        cout<<"El área es:"<<m1.area(radio);
        cout<<endl;
     break;
     case 4:
     float base_mayor, base_menor, altura2;
        cout<<"Ha elegido trapecio"<<endl;
        cout<<"Ingrese el tamaño de la base mayor"<<endl;
        cin>>base_mayor;
        cout<<"Ingrese el tamaño de la base menor"<<endl;
        cin>>base_menor;
        cout<<"Ingrese la altura"<<endl;
        cin>>altura2;
        cout<<"El área es:"<<m1.area(base_mayor,base_menor, altura2);
        cout<<endl;
     break;
     case 5:
     cout << "Salir del sistema";
     break;
     }
     } while (op != 5);
     return 0;
 }