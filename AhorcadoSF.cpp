#include <iostream>
#include <time.h>
#include <string.h>
#include <cstring>
#include <string>
#include <stdlib.h>

using namespace std;

int ganadas = 0; 
int perdidas = 0;
int iteracion2 = 0;
char pisos[100];
char palabra_jugar[100];
char palabrasjugadas[100];
int iteracion = 0;
int calc = 0;

void espaciado(){
	for (int i = 0; i < 100; ++i)
	{
		cout << endl;
	}
}

void tablero(int oportu, int char_length, char pisos[100]){
	cout << "Oportunidades: " << oportu << endl;

	for (int i = 0; i < char_length; ++i)
	{
		cout << pisos[i];
	}
}


void juegocompleto() {
	
	int char_length = 0;
	int oportu = 3;
	char letra;
	bool ahorcado = true;
	bool encontrar = true;
	bool ganar = true;
	
	iteracion++;
	
	cout << "Ingrese la palabra: " << endl;
	cin >> palabra_jugar;

	char_length = strlen(palabra_jugar);

	espaciado();

	for (int j = 0; j < char_length; j++) {
		pisos[j] = '_';
	}

	while(ahorcado == true) {

		tablero(oportu, char_length, pisos);
		
		cout << "Ingrese una letra" << endl;
		cin >> letra;

		encontrar = false; 

		for (int j = 0; j < char_length; ++j)
		{
			if (letra == palabra_jugar[j])
			{
				pisos[j] = letra; 
				encontrar = true;
			}
		}

		if (encontrar==false)
		{
			oportu--;
			if (oportu<=0)
			{
				ahorcado = false; 
			}
		}
		ganar = true;

		for (int k = 0; k < char_length; ++k)
		{
			if(palabra_jugar[k]!=pisos[k]) 
			{
				ganar = false; 
			}
		}

		if (ganar == true) {
			ahorcado = false;
		}
		espaciado();

		if (oportu<=0)
    	{
    		cout << "Has perdido" << endl;
    		perdidas++;
    	}

    	if (ganar == true) {
    		cout << "Has ganado" << endl;
    		ganadas++;
    	}

    	calc = char_length * iteracion;

    	for (int i = 0; i < calc; ++i)
    	{
    		strcpy(palabrasjugadas, palabra_jugar);
    	}
	}
}

main () {
	int opc;
	char opc2;
	char run = 'S';

	do {

		cout << "1. Jugar" << endl;
        cout << "2. Estadistica" << endl;

		cout << "Introduzca la opcion: "; 
		cin >> opc; 

		switch(opc) {
			case 1:
				juegocompleto();
			break; 

			case 2:
				cout << "\na. Victorias" << endl;
      			cout << "b. Derrotas" << endl;
      			cout << "c. Palabras usadas" << endl;

				cout << "Ingrese la opcion: " << endl;
				cin >> opc2;

				switch(opc2) {
					case 'a':
						cout << "Partidas ganadas: " << ganadas;
					break;

					case 'b':
						cout << "\nPartidas perdidas: " << perdidas;
					break;

					case 'c':
						cout << "Palabras usadas: " << endl;
						for (int i = 0; i < 100; ++i)
						{
							cout << palabrasjugadas[i];
						}
					break;

					default:
						cout << "Error, introduzca correctamente los valores" << endl;
					break;
				} 
			break;

			default:
				cout << "Error, introduzca correctamente los valores" << endl;
			break;
		}

 		cout << endl <<"¿Seguir corriendo el juego? S: Para si, N: Para no " << endl;//Para saber si el user quiere seguir jugando
	    cin >> run;
	    system("cls");
	                    //Condicional comparativo para saber si continuar con el programa
		if (run == 'N'){
			cout << "Has terminado el juego.\n";  
	    }    
		
	}
	while (run == 'S');
}