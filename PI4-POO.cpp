

#include<iostream>
using namespace std;

class alumno {
private:
	string Nombre;
	string Apellido;
	int NoControl;
	string Sexo;
	string Semestre;
	int Edad;
	int Materias;

public:
	Alumno();
	~Alumno();


};


class Materia {
private:
	string Nombres;
	int Creditos;
	string ProfesorImp;

public:
	Materia();
	~Materia();

};

class Profesor {
private:
	string Nombre;
	string Apellido;
	int Cedula;
	string Sexo;
	string Titulo;
	int Edad;

public:
	Profesor();
	~Profesor();

};

alumno::alumno()
{
	cout << "Ingresar Nombre?\n";
	cin >> Nombre;
	cout << "Ingresar Apellido\n";
	cin >> Apellido;
	cout << "Ingresar cuenta?\n";
	cin >> NoControl;
	cout << "Ingresar Edad\n";
	cin >> Edad;
	cout << "Ingresar Sexo\n";
	cin >> Sexo;
	cout << "Ingresar Semestre\n";
	cin >> Semestre;
	cout << "Ingresar Materias\n";
	cin >> Materias;
	system("cls")
}

alumno::~alumno()
{
	count << "Registro Exitoso!!!.\n\n" << Nombre << Apellido;
}

Materia::Materia()

{
	cout << "Ingresar Nombres\n";
	cin >> Nombres;
	cout << "Ingresar los creditos de la mareia\n";
	cin >> Creditos;
	cout << "Ingresar el profesor asignado\n";
	cin >> ProfesorImp;

	system("cls")
}

Materia::~Materia()
{
	cout << "Registro Exitoso!!!.\n\n";

}

Profesor::~Profesor()
{
	cout << "Ingresar Nombre?\n";
	cin >> Nombre;
	cout << "Ingresar Apellido\n";
	cin >> Apellido;
	cout << "Ingresar Cedula?\n";
	cin >> Cedula;
	cout << "Ingresar Edad\n";
	cin >> Edad;
	cout << "Ingresar Sexo\n";
	cin >> Sexo;
	cout << "Ingresar Titulo\n";
	cin >> Titulo;

	system("cls")
}

Profesor::~Profesor()
{
	cout << "Registro Exitoso!!!!.\n\n" << Nombre << Apellido;
}

int main()
{
	alumno alumno1;
	Materia Materia1;
	Profesor Profesor1;

	return 0;
}
