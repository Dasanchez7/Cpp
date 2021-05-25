#include <iostream> 

using namespace std; 

int main(){

    int tabla[5][5] = {{5,10,50,9,3},{4,6,12,33,90},{1,11,63,17,12},{75,30,8,45,54},{20,21,22,69,79}}; 
    int tabla2[5][5];
    int tablaf[99][99];
    int valor[99][99];
    int dato = 0;
    int i,l,c=0,n=0;
    int opcion, run=1;
    bool encontrar = false;
    bool encontrar2 = true;
    
    do{
        cout << "1. Bingo" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;
    
        switch(opcion) {
            case 1: 
                // Introducir valores de tabla2
                cout << "Introduce los valores de su tabla" << endl;

                for (int i = 0; i < 5; i++ ) {
                    for(int l=0; l < 5; l++) {
                        cout << "Posicion [" << i+1 << "] [" << l+1 << "]: " ;
                        cin >> tabla2[i][l];
                    } 
                }

                // Comparacion
                
                cout << endl <<"\nComparacion de Matrices" << endl;

                
                for(i = 0; i < 5; i++) 
                { 
                    for(l = 0; l < 5; l++) 
                    { 
                        if ((tabla[i][l] == tabla2[i][l])) 
                        { 
                            cout << tabla[i][l] << " y " << tabla2[i][l] << " Son comunes en ambas tablas " << endl; 
                            encontrar = true;
                            valor[i][l] = tabla[i][l];
                        }
                        else if(encontrar && l==4) 
                        {                 
                            cout << tabla[i][l] << " El valor esta solo en la primera tabla " << endl; 
                        }
                    } 
                    encontrar = false; 
                }

                // Mostrando la tabla de los encontrados

                cout << endl << "Mostrando la tabla de los encontrados" << endl;
                cout << "Solo se agregaran a la tabla 2 los numeros que coincidan en ambas tablas" << endl << endl;

                for (int i = 0; i < 5; i++ ) {
                    for(int l=0; l < 5; l++) {
                        cout << "Posicion [" << i+1 << "] [" << l+1 << "]: " << valor[i][l] << "\t";
                    } 
                    cout << "\n";
                }

                // Cambiar valores por X o 0

                cout << endl << "Cambiando valores encontrados a 0" << endl;

                for(i = 0; i < 5; i++) 
                { 
                    for(l = 0; l < 5; l++) 
                    { 
                        if ((valor[i][l]) > 0)
                        {
                            encontrar2 = false;
                            tablaf[i][l] = 0;
                        }
                        else if ((valor[i][l]) == 0) {
                            tablaf[i][l] = 1;
                        }
                    } 
                    encontrar2 = true; 
                }

                // Imprimir tabla de los valores encontrados pasados a 0

                cout << endl <<"Imprimiendo tabla de los valores encontrados pasados a 0" << endl;
                cout <<"0 significa los valores encontrados, 1 significa los valores que no coincidio" << endl;

                for (int i = 0; i <5; i++ ) {
                    for(int l=0; l < 5; l++) {
                        cout << "Posicion [" << i+1 << "] [" << l+1 << "]: " << tablaf[i][l] << "\t";
                    }
                    cout << "\n";
                }
            break;

            case 2:
                run = 0;
            break;
                        
            default: 
                cout << "Error, introduzca una opcion correcta" << endl;
            break;
        }
        system("pause");
        system("cls");
    }
    while(run == 1); //condicion
 
    return 0; 
}