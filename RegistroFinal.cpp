#include <iostream>
#include <conio.h>
using namespace std;

const int estudiantes = 100;
const int calif = 100;

int main() {
	
	int opc, calc_fecha, prop_change, num_notas, calificacion, operacion, promedio, sex_est, x, y;
	int hombres_est=0;
	int mujeres_est=0;
	int num_est=0;
	int run=1;
	string nombre_est[100];
	string apellido_est[100];
	int sexo_est[num_est];
	int promedio_est[100];
	int cedula_est[num_est];
	int fechaD_est[num_est];
	int fechaM_est[num_est];
	int fechaA_est[num_est];
	int notas[estudiantes][calif];
    int i,j,na,nc;
    float calif,prom,suma;

	cout << "Menu" << endl;
	cout << "1.- Registrar Estudiante" << endl;
	cout << "2.- Editar Estudiantes" << endl;
	cout << "3.- Estadistica" << endl;
	cout << "4.- Salir" << endl << endl;

	cout << "Ingrese numero de estudiantes" << endl;
	cin >> num_est;
	
	do {
		cout << endl << "1.- Registrar Estudiante" << endl;
		
		// Ingresar datos 

		for (int z = 0; z < num_est; z++) {
			cout << "Ingrese el nombre [" << z << "]: ";
			cin >> nombre_est[z];
			
			cout << "Ingrese el apellido [" << z << "]: ";
			cin >> apellido_est[z];
			
			cout << "Ingrese la cedula [" << z << "]: ";
			cin >> cedula_est[z];
			
			cout << "Ingrese el sexo, 1. Es hombre (H), 2 es Mujer (M) [" << z << "]: ";
			cin >> sex_est;
			
			if (sex_est == 1) {
				hombres_est=+1;
				sexo_est[z] = hombres_est;
			}
			else if (sex_est == 2) {
				mujeres_est=+1;
				sexo_est[z] = mujeres_est;
			}
			else {
				cout << "Error, introduzca si es Hombre o Mujer" << endl;
			}
			
			cout << "Ingrese Dia de nacimiento [" << z << "]: ";
			cin >> fechaD_est[z];
			
			cout << "Ingrese Mes de nacimiento [" << z << "]: ";
			cin >> fechaM_est[z];
			
			cout << "Ingrese Ano de nacimiento [" << z << "]: ";
			cin >> fechaA_est[z];
		}
		
		cout << "\nNumero de calificaciones de los estudiantes: " << endl;
	    cin >> nc;
		
		// Insertando datos a la matriz 
		
	    for (i=0; i<num_est; i++) {
	        cout << "\nAlumno # " << i+1 << ": " << endl;
	        for (j=0; j<nc; j++) {
	            cout << "Calificacion # " << j+1 << ": ";
	            cin >> notas[i][j];
	        }
	    }
	    // Para sacar el promedio de los alumnos
	    cout << endl;
	    for (i=0; i<num_est; i++) {
	        suma = 0;
	        for (j=0; j<nc; j++) {
	        	suma = suma + notas[i][j];
			}
	        prom = suma / nc;
	        promedio_est[i] = prom;
	    }
		
		// Mostrar datos 
		
		for(int z = 0; z < num_est; z++) { 
		
			cout << z << " <-- Posicion Nombre = " << nombre_est[z] << endl;
			
			cout << z << " <-- Posicion apellido = " << apellido_est[z] << endl;
			
			cout << z << " <-- Posicion cedula = " << cedula_est[z] << endl;
			
			cout << z << " <-- Posicion sexo = " << sexo_est[z] << endl;
			
			cout << z << " <-- Posicion Fecha Dia = " << fechaD_est[z] << endl;
			
			cout << z << " <-- Posicion Fecha Mes = " << fechaM_est[z] << endl;
			
			cout << z << " <-- Posicion Fecha Ano = " << fechaA_est[z] << endl;
			
			cout << z << " <-- Posicion Promedio = " << promedio_est[z] << endl;
			
			cout << "Se han agregado: " << hombres_est << " Hombres" << endl;
			
			cout << "Se han agregado: " << mujeres_est << " Mujeres" << endl;
		}
	
		for(int g = 0; g < num_est; g++) { // Mostrar fecha del Ano
		
			cout << "\n" << g << " <-- Posicion Ano Cumpleanos = " << fechaA_est[g] << endl;

			if (fechaA_est[g]>0 && fechaA_est[g]<2021) {
				calc_fecha = 2021 - fechaA_est[g];
				cout << "Tendra una edad en el 2021 de: " << calc_fecha << endl;
			}
			else if (fechaA_est[g]>0 && fechaA_est[g]>2021) {
				cout << "Esta fecha es de una persona no nacida" << endl;
			}
			else {
				cout << "Error" << endl;
			}
		}
		
		cout << endl << "2.- Editar Estudiantes";
		cout << endl << "3.- Estadistica";
		cout << endl << "4.- Salir" << endl;
		
		cout << endl << "Ingrese la opcion" << endl;
		cin >> opc;
		
		if (opc>1 && opc<4) {
			if (opc==2) {
				cout << "2.- Editar Estudiantes" << endl;
				
				for(int i = 0; i < num_est; i++) {
					// Editar Datos
					cout << "Introduce la posicion a cambiar" << endl;
					cin >> i;

					cout << "Introduce la propiedad a cambiar" << endl;
					cin >> prop_change;

					if (prop_change==1) {
						cout << "Haz seleccionado la propiedad Nombre" << endl;
						cout << "Introduce el valor a cambiar: " << endl;
						cin >> nombre_est[i];
					}
					else if (prop_change==2) {
						cout << "Haz seleccionado la propiedad apellido" << endl;
						cout << "Introduce el valor a cambiar: " << endl;
						cin >> apellido_est[i];
					}
					else if (prop_change==3) {
						cout << "Haz seleccionado la propiedad Cedula" << endl;
						cout << "Introduce el valor a cambiar: " << endl;
						cin >> cedula_est[i];
					}
					else if (prop_change==4) {
						cout << "Haz seleccionado la propiedad Sexo" << endl;
						cout << "Introduce el valor a cambiar: " << endl;
						cin >> sexo_est[i];
					}
					else if (prop_change==5) {
						cout << "Haz seleccionado la propiedad Fecha" << endl;
						cout << "Introduce el nuevo día" << endl;
						cin >> fechaD_est[i];
						cout << "Introduce el nuevo Mes" << endl;
						cin >> fechaM_est[i];
						cout << "Introduce el nuevo ano" << endl;
						cin >> fechaA_est[i];	
					}
					else if (prop_change==6) {
						cout << "Haz seleccionado la propiedad Promedio" << endl;
						cout << "Introduce el valor a cambiar: " << endl;
						cin >> promedio_est[i];
					}
					else {
						cout << "Error, Propiedad no existente" << endl;
					}

					// Mostrar datos Despues de la edicion
					
					for(int z = 0; z < num_est; z++) { // Mostrar nombre 
		
						cout << z << " <-- Posicion Nombre = " << nombre_est[z] << endl;
						
						cout << z << " <-- Posicion apellido = " << apellido_est[z] << endl;
						
						cout << z << " <-- Posicion cedula = " << cedula_est[z] << endl;
						
						cout << z << " <-- Posicion sexo = " << sexo_est[z] << endl;
						
						cout << z << " <-- Posicion Fecha Dia = " << fechaD_est[z] << endl;
						
						cout << z << " <-- Posicion Fecha Mes = " << fechaM_est[z] << endl;
						
						cout << z << " <-- Posicion Fecha Ano = " << fechaA_est[z] << endl;
						
						cout << z << " <-- Posicion Promedio = " << promedio_est[z] << endl;
						
						cout << "Se han agregado: " << hombres_est << " Hombres" << endl;
						
						cout << "Se han agregado: " << mujeres_est << " Mujeres" << endl;
					}
				}
				run = 0;
			}
			else if (opc==3) {
				
				cout << "Estadistica" << endl;
				
				for (int z=0; z<num_est; z++) {
					cout << z << " <-- Posicion Promedio = " << promedio_est[z] << endl;
				}
				
				cout << "Valor 1 a comparar" << endl;
				cin >> x;
				
				cout << "Valor 2 a comparar" << endl;
				cin >> y;
				
				for (int z=0; z<num_est; z++) {
					cout << "\t" << z << " <-- Posicion Promedio = " << promedio_est[z] << endl;
					x = promedio_est[z];
					y = promedio_est[z];
					
					if (x>y) {
						cout << "El valor 1 es mayor que el segundo";
					}
					else if (x<y) {
						cout << "El valor 2 es mayor que el primero";
					}		
				}
				
				cout << "Se han agregado: " << hombres_est << " Hombres" << endl;
				cout << "Se han agregado: " << mujeres_est << " Mujeres" << endl;
				cout << "Se han agregado: " << num_est << " Estudiantes" << endl;
				run = 0;
			}
			else {
				cout << "Error, introduzca los valores correctamente" << endl;
				run = 0;
			}
		}
		else if (opc==4) {
			cout << "Salida del programa" << endl;
			run = 0;
		}
		else {
			cout << "Error, introduzca los valores correctamente" << endl;
			run = 0;
		}
	}
	while(run==1);
	getch();
	return 0;
	
}
