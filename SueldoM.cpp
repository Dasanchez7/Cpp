#include <iostream>

using namespace std;

main() {
	
	string nombre, apellido, fecha, cedula;
	int horax, hora, op1, op2, op3;
    float total1, total11, total2, total22, total3, total33;
	
	cout << "Introduzca su Nombre" << endl;
	cin >> nombre;
	
	cout << "Introduzca su Apellido" << endl;
	cin >> apellido;
	
	cout << "Introduzca su Cedula (Solo digitos, sin puntos)" << endl;
	cin >> cedula;
	
	cout << "Introduzca su Fecha de Nacimiento (dd/mm/aaaa)" << endl;
	cin >> fecha;
	
	cout << "Introduzca sus Horas Trabajadas Totales" << endl;
	cin >> hora;
	
	cout << "Introduzca sus Horas Extras Totales" << endl;
	cin >> horax;
	
	if (hora > 0) {
			if (horax == 0) {
			op1 = (hora + horax) * 8;
			cout << "Su registro es:" << endl << "Nombre: " << nombre << endl << "Apellido: " << apellido << endl << "CI: " << cedula << endl << "Fecha de Nacimiento: " << fecha << endl << "Horas trabajadas: " << hora << endl << "Horas extra: " << horax << endl;
			cout << "No trabajaste horas extra, tu cobro es de: " << op1 << "$" << endl;
			}
			else if (horax >= 1 && horax <= 9) {
				op2 = (hora + horax) * 8;
				total2 = op2 * 0.10;
				total22 = op2 + total2;
				cout << "Su registro es:" << endl << "Nombre: " << nombre << endl << "Apellido: " << apellido << endl << "CI: " << cedula << endl << "Fecha de Nacimiento: " << fecha << endl << "Horas trabajadas: " << hora << endl << "Horas extra: " << horax << endl;
				cout << "Te correspoden un 10% de sueldo mas debido a la cantidad de tus horas extras, tu cobro es de: " << total22 << "$" << endl;
			}
			else if (horax >= 10) {
				op3 = (hora + horax) * 8;
				total3 = op3 * 0.25;
				total33 = op3 + total3;
				cout << "Su registro es:" << endl << "Nombre: " << nombre << endl << "Apellido: " << apellido << endl << "CI: " << cedula << endl << "Fecha de Nacimiento: " << fecha << endl << "Horas trabajadas: " << hora << endl << "Horas extra: " << horax << endl;
				cout << "Te correspoden un 25% de sueldo mas debido a la cantidad de tus horas extras, tu cobro es de: " << total33 << "$" << endl;
			}
			else {
				cout << "Error, no hay horas extras validas, introduce los valores correctamente";
			}
		}
	else {
		cout << "Error, no hay horas de trabajo validas, introduce los valores correctamente";
	}
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
