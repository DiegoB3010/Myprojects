/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

class Persona{ //inicio superclase persona
    private:
    string nombre, apellido;
    string sexo;
    int edad;
    
    public:
    int id;
    void mostrarDatos();
    void cargardatos();
}; //fin superclase persona

class Alumno : public Persona { //inicio subclase alumno
private:
	int NoControl;
	string Semestre;
	int Materias;

public:
	void cargarNoControlSemestreMaterias();
    void imprimirNoControlSemestreMaterias();
};// fin subclase Alumno

class Profesor : public Persona { //inicio subclase Profesor
private:
	int Cedula;
	string Titulo;

public:
	void cargarCedulaTitulo();
	void imprimirCedulaTitulo();

}; //fin subclase Profesor

class Materia { //inicio clase materia
private:
	string Nombres;
	int Creditos;
	string ProfesorImp;

public:
    int idmat;
	void cargarmateria();
	void imprimirmateria();

}; //fin clase materia

void Persona::cargardatos(){ //captura de datos de la superclase
    cout << "Ingrese #de identifacion :"; cin >> id;
    cout << "Ingrese el nombre :"; cin >> nombre;
    cout << "Ingrese el apellido :"; cin>>apellido;
    cout << "Ingrese la edad :"; cin >> edad;
    cout << "Ingrese el sexo :"; cin >> sexo;
} //fin captura de datos de la superclase

void Persona::mostrarDatos(){ //metodo imprimir datos de la superclase
    cout << "El #ID :" << id << endl;
    cout << "Nombre :" << nombre << endl;
    cout << "Apellido :" << apellido << endl;
    cout << "Edad :" << edad << endl;
    cout << "Sexo :" << sexo << endl;
} //fin metodo imprimir datos de la superclase

void Alumno::cargarNoControlSemestreMaterias(){ //metodo cargar datos alumno
    cout << "Ingrese el Numero de Control del alumno :";
    cin >> NoControl;
    cout << "Ingrese el semestre que cursará :";
    cin >> Semestre;
    cout << "Ingrese cuantas materias tomará :";
    cin >> Materias;
} // fin metodo cargar datos alumno

void Alumno::imprimirNoControlSemestreMaterias(){ //metodo imprimir datos alumno
    cout << "El Numero de control es :" << NoControl << endl;
    cout << "El semestre que cursará es :" << Semestre << endl;
    cout << "Las materias que tomará son :" << Materias << endl;
} // fin metodo imprimir datos alumno

void Profesor::cargarCedulaTitulo(){ //metodo cargar datos Profesor
    cout << "Ingrese la Cedula del profesor :";
    cin >> Cedula;
    cout << "Ingrese el titulo :";
    cin >> Titulo;
} //fin metodo cargar datos profesor

void Profesor::imprimirCedulaTitulo(){ //metodo imprimir datos profesor
    cout << "Cedula :" << Cedula << endl;
    cout << "Titulo :" << Titulo << endl;
} //fin metodo imprimir datos profesor

void Materia::cargarmateria(){ //metodo cargar datos materia
    cout << "Ingrese el ID de la materia : ";
    cin>>idmat;
    cout << "Ingrese el nombre de la materia :";
    cin >> Nombres;
    cout << "Ingrese el numero de creditos :";
    cin >> Creditos;
    cout << "Ingrese el profesor que la impartirá :";
    cin >> ProfesorImp;
}// fin metodo cargar datos materia

void Materia::imprimirmateria(){ //metodo imprimir datos materia
    cout << "ID de la materia :" << idmat << endl;
    cout << "Nombre de la materia :" << Nombres << endl;
    cout << "Numero de creditos :" << Creditos << endl;
    cout << "Profesor que la imparte :" << ProfesorImp << endl;
}// fin metodo imprimir datos materia

int menu() //menu principal
{
    int x;
    system("cls");
    cout << "<----Desea visualizar---->" << endl << endl;
    cout << "1. Profesor:" << endl;
    cout << "2. Materia" << endl;
    cout << "3. Alumno" << endl;
    cout << "4. Salir" << endl;
    cout << "Opcion-->:";
    cin >> x;
    return x;
}

//programa principal
int main(){
    Persona profesor1;
    Profesor datosprofesor1;
    cout << "Ingresando datos del Profesor 1" << endl;
    profesor1.cargardatos();
    datosprofesor1.cargarCedulaTitulo();
    cout << "\n";
    cout << "Ingresando datos del Profesor 2" << endl;
    Persona profesor2;
    Profesor datosprofesor2;
    profesor2.cargardatos();
    datosprofesor2.cargarCedulaTitulo();
    cout << "\n";

    cout << "Ingresando datos de la Materia 1" << endl;
    Materia materia1;
    materia1.cargarmateria();
    cout << "\n";
    cout << "Ingresando datos de la Materia 2" << endl;
    Materia materia2;
    materia2.cargarmateria();
    cout << "\n";
    cout << "Ingresando datos de la Materia 3" << endl;
    Materia materia3;
    materia3.cargarmateria();
    cout << "\n";
    
    cout << "Ingresando datos del Alumno 1"<< endl;
    Persona alumno1;
    Alumno datosalumno1;
    alumno1.cargardatos();
    datosalumno1.cargarNoControlSemestreMaterias();
    cout << "\n";
    cout << "Ingresando datos del Alumno 2"<< endl;
    Persona alumno2;
    Alumno datosalumno2;
    alumno2.cargardatos();
    datosalumno2.cargarNoControlSemestreMaterias();
    cout << "\n";
    
    int id_;
    int op;
    do {
    op = menu();
    switch (op) {
    case 1:
    cout << "ID que deseas consultar: ";
    cin >> id_;
    if(profesor1.id==id_){
        cout << "Datos del profesor" << endl;
        cout << "\n";
        profesor1.mostrarDatos();
        datosprofesor1.imprimirCedulaTitulo();
        system("pause");
    }
    else if(profesor2.id==id_){
        cout << "Datos del profesor" << endl;
        cout << "\n";
        profesor2.mostrarDatos();
        datosprofesor2.imprimirCedulaTitulo();
        system("pause");
    }
    else {
    cout << "La opcion es incorrecta, intente nuevamente.";
    system("pause");
    }
    break;
    case 2:
    cout << "ID que deseas consultar: ";
    cin >> id_;
    if (materia1.idmat==id_){
        cout << "Datos de la materia" << endl;
        cout << "\n";
        materia1.imprimirmateria();
        system("pause");
    }
    else if(materia2.idmat==id_){
        cout << "Datos de la materia" << endl;
        cout << "\n";
        materia2.imprimirmateria();
        system("pause");
    }
    else if(materia3.idmat==id_){
        cout << "Datos de la materia" << endl;
        cout << "\n";
        materia3.imprimirmateria();
        system("pause");
    }
    else {
    cout << "La opcion es incorrecta, intente nuevamente.";
    system("pause");
    }
    break;
    case 3:
    cout << "ID que deseas consultar: ";
    cin >> id_;
    if (alumno1.id==id_){
        cout << "Datos del alumno" << endl;
        cout << "\n";
        alumno1.mostrarDatos();
        datosalumno1.imprimirNoControlSemestreMaterias();
        system("pause");
    }
    else if (alumno2.id==id_){
        cout << "Datos del alumno" << endl;
        cout << "\n";
        alumno2.mostrarDatos();
        datosalumno2.imprimirNoControlSemestreMaterias();
        system("pause");
    }
    else {
    cout << "La opcion es incorrecta, intente nuevamente.";
    system("pause");
    }
    break;
    case 4:
    break;
    }
    } while (op != 4);
return 0;
}
    
