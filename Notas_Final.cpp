#include <iostream>
using namespace std;

main() {

	int opcion, notas_ve, cant_notas, calc, x, calificacion, num_notas, go, calif_final, cant_est, start;
	int run = 1;
	int operacion = 0;
	double promedio; 
	int num_apro = 0, num_repro = 0;
	
	cout << "1. Promedio del Estudiante" << endl;
	cout << "2. Transformacion de Notas (VE-USA)" << endl;
	cout << "3. # de Estudiantes Aprobados y Reprovados" << endl;
	cout << "4. Salir" << endl << endl;
	cout << "Seleccione la opcion: ";
	cin >> opcion;
	
	do {
		switch(opcion) 
		{
			case 1:
				cout << "Promedio del Estudiante" << endl;	
				cout << "Escriba la cantidad de notas diferentes a evaluar" << endl;
				cin >> num_notas;
				
				do {	
					cout << "Ingrese las calificaciones del <0-20>, de lo contrario no sera tomado el valor" << endl;
					
					for (int c=0; c<num_notas; c++) 
					{
						cout << "Ingrese las calificaciones del estudiante" << endl;
						cin >> calificacion;
						
						if (calificacion> 0 && calificacion<= 20) 
						{
							operacion = operacion + calificacion;
							go=0;
						}
						else if (calificacion>20 && calificacion<0) 
						{
							cout << "Introduzca un dato en el intervalo correcto <0-20>" << endl;
							go=0;
						}
					}
					if (calificacion>0 && calificacion<=20) 
					{
						promedio = operacion / num_notas;
						cout << "La poblacion de estudiantes agregada es de: "<< num_notas << endl;
						cout << "El promedio del estudiante fue de: " << promedio << endl;
					}
					run = 0;
				}
				while (go==1);	
			break;
			
			case 2: 
				cout << endl <<"Transformacion de Notas (VE-USA)" << endl;
				cout << "Ingrese la cantidad de notas a evaluar: ";
				cin >> cant_notas;
	
				for(int i=0; i<cant_notas; i++) 
				{
					cout << "Introduzca sus Notas (VE): " << endl;
					cin >> notas_ve;
					
					if (notas_ve == 20)
					{
						cout << "Su nota es: A+" << endl;
						cout << "Su nota en # es: 100" << endl;
					}
					else if (notas_ve == 18 || notas_ve == 19) 
					{
						cout << "Su nota es: A" << endl;
						if (notas_ve == 19) 
						{
							calc=19*5;
							cout << "Su nota en # es: "<< calc << endl;
						}
						else if (notas_ve == 18) 
						{
							calc=18*5;
							cout << "Su nota en # es: "<< calc << endl;
						}
					}
					else if (notas_ve == 17) 
					{
						cout << "Su nota es: A-" << endl;
						calc=17*5;
						cout << "Su nota en # es: "<< calc << endl;
					}
					else if (notas_ve == 16) 
					{
						cout << "Su nota es: B+" << endl;
						calc=16*5;
						cout << "Su nota en # es: "<< calc << endl;
					}
					else if (notas_ve == 15) 
					{
						cout << "Su nota es: B" << endl;
						calc=15*5;
						cout << "Su nota en # es: "<< calc << endl;
					}
					else if (notas_ve == 14) 
					{
						cout << "Su nota es: B-" << endl;
						calc=14*5;
						cout << "Su nota en # es: "<< calc << endl;
					}
					else if (notas_ve == 13) 
					{
						cout << "Su nota es: C+" << endl;
						calc=13*5;
						cout << "Su nota en # es: "<< calc << endl;
					}
					else if (notas_ve == 12) 
					{
						cout << "Su nota es: C" << endl;
						calc=12*5;
						cout << "Su nota en # es: "<< calc << endl;
	 				}
	 				else if (notas_ve == 11) 
					 {
	 					cout << "Su nota es: C" << endl;
	 					calc=11*5;
	 					cout << "Su nota en # es: "<< calc << endl;
					 }
	 				else if (notas_ve == 10) 
					 {
	 					cout << "Su nota es: C-" << endl;
	 					calc=10*5;
	 					cout << "Su nota en # es: "<< calc << endl;
					}
					else if (notas_ve >= 0 && notas_ve <= 9) 
					{
						cout << "Su nota es: F" << endl;
						x=notas_ve;
						calc=x*5;
						cout << "Su nota en # es: "<< calc << endl;
					}
					else {
						cout << "Error, introduzca un valor entre <0-20>" << endl << endl;
					}
					run=0;
				}
			break;
		
			case 3: 
				cout << "# De Estudiantes Aprovados y Reprovados" << endl;
				cout << "Ingrese la cantidad de estudiantes" << endl;
				cin >> cant_est;
				
				do {	
					cout << "Ingrese la calificacion del (0-20), de lo contrario no sera tomado el valor" << endl;
					
					for (int i=0; i<cant_est; i++) 
					{
						cout << "Ingrese las calificaciones finales de los estudiantes" << endl;
						cin >> calif_final;
						
						if (calif_final>= 10 && calif_final<= 20) 
						{
							cout << "Aprobado" << endl;
							num_apro = num_apro + 1;
							start=0;
						}
						else if (calif_final>0 && calif_final<=9) 
						{
							cout << "Reprobado" << endl;
							num_repro = num_repro + 1;
							start=0;
						}
					}
					if (calif_final>0 && calif_final<=20)
					{
						cout << "Se añadieron: "<< cant_est << " estudiantes" << endl;
						cout << "Los estudiantes aprobados son: " << num_apro << endl;
						cout << "Los estudiantes reprobados son: " << num_repro << endl;
					}
					run = 0;
				}
				while (start==1);
			break;
			
			case 4:
				cout << "Fin del Programa" << endl;
				run = 0;
			break;
				
			default:
				cout << "Error, introduzca los valores correctamente" << endl;
			break;
		}
	}
	while(run == 1);
}
