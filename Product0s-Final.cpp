#include <iostream>
using namespace std;

main() {

	string narticulo, idproducto, narticulo_2, idproducto_2;
	int A, B, precio, cantidad, producto, precio_2, cantidad_2;
	int run = 1;

	cout << "Introduzca los articulos a ingresar (Max 2 articulos a la vez): ";
	cin >> producto;
	
	do {
		for(int i = 0; i<producto; i++) {	
			
			if (i==0 && producto<=2) {
				
				cout << "Introduzca su Nombre del Producto" << endl;
				cin >> narticulo;
					
				cout << "Introduzca el ID del Producto" << endl;
				cin >> idproducto;
					
				cout << "Introduzca el precio del Producto" << endl;
				cin >> precio;
					
				cout << "Introduzca el stock del producto ingresado" << endl;
				cin >> cantidad;
					
				cout << "Su registro es:" << endl << "Nombre: " << narticulo << endl << "ID: #" << idproducto << endl << "Precio: " << precio << endl << "Stock: " << cantidad << endl << endl;
			}
			else if (i==1 && producto<=2) {

				cout << "Introduzca su Nombre del Producto" << endl;
				cin >> narticulo_2;
					
				cout << "Introduzca el ID del Producto" << endl;
				cin >> idproducto_2;
					
				cout << "Introduzca el precio del Producto" << endl;
				cin >> precio_2;
					
				cout << "Introduzca el stock del producto ingresado" << endl;
				cin >> cantidad_2;
				
				cout << "Su registro es:" << endl << "Nombre: " << narticulo_2 << endl << "ID: #" << idproducto_2 << endl << "Precio: " << precio_2 << endl << "Stock: " << cantidad_2 << endl << endl;
				
				cout << "Introduzca el producto #1 para comparar su Costo (1-2)" << endl;
				cin >> A;
				
				cout << "Introduzca el producto #2 para comparar su Costo (1-2)" << endl;
				cin >> B;
				
				if (A == 1 && B == 2) {
					A=precio;
					B=precio_2;
					
					if (precio>precio_2) {
						cout << "El producto 1 es el mas costoso" << endl;
						cout << "El producto 2 es el menos costoso" << endl;
					}
					else if (precio<=precio_2) {
						cout << "El producto 2 tiene igual o mayor costo al producto 1" << endl;
						cout << "El producto 1 es el menos costoso" << endl;
					}
				}
				else if (A==2 && B==1) {
					A=precio_2;
					B=precio;
					
					if (precio_2>precio) {
						cout << "El producto 2 es el mas costoso" << endl;
						cout << "El producto 1 es el menos costoso" << endl;
					}
					else if (precio_2<=precio){
						cout << "El producto 1 tiene igual o mayor costo al producto 2" << endl;
						cout << "El producto 2 es el menos costoso" << endl;
					}
				}
				else {
					cout << "Error, el valor de las comparaciones debe estar entre los intervalos (1-2)";
				}	
		
				cout << "Introduzca el producto #1 para comparar su Cantidad (1-2)" << endl;
				cin >> A;
				cout << "Introduzca el producto #2 para comparar su Cantidad (1-2)" << endl;
				cin >> B;
				
				if (A == 1 && B == 2) {
					A=cantidad;
					B=cantidad_2;
					
					if (cantidad>cantidad_2) {
						cout << "El producto 1 tiene mas cantidad" << endl;
						cout << "El producto 2 tiene menos cantidad" << endl;
					}
					else if (cantidad<=cantidad_2) {
						cout << "El producto 2 tiene igual o mayor cantidad al producto 1" << endl;
						cout << "El producto 1 tiene menos cantidad" << endl;
					}
				}
				else if (A==2 && B==1) {
					A=cantidad_2;
					B=cantidad;
					
					if (cantidad_2>cantidad) {
						cout << "El producto 2 tiene mas cantidad" << endl;
						cout << "El producto 1 tiene menos cantidad" << endl;
					}
					else if (cantidad_2<=cantidad){
						cout << "El producto 1 tiene igual o mayor cantidad al producto 2" << endl;
						cout << "El producto 2 tiene menos cantidad" << endl;
					}
				}
				else {
					cout << "Error, el valor de las comparaciones debe estar entre los intervalos (1-2)" << endl;
				}
			}
			else {
				cout << "Error" << endl;
			}
		}
		cout << "Desea continuar con el programa? 1: Si - 0: No" << endl;
		cin >> run;		
	}
	while(run == 1);
}
