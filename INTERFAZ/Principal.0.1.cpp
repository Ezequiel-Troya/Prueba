//LIBRERIAS
#include <iostream>
#include <windows.h>
using namespace std;

/*****************************************************
* FUNCION PARA EL POSICIONEMIENTO EN X, Y COORDENADA *
******************************************************/
void posicion(int x, int y){
    HANDLE miManejador = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x; 
    dwPos.Y = y; 
    SetConsoleCursorPosition(miManejador, dwPos);
}
/**************************************************************************************************************************************************************************************
* 	    																		   INTERFAZ PRINCIPAL			   	 															   	  *
**************************************************************************************************************************************************************************************/
/*****************************************************
* 	     FUNCION DE OPCIONES DEL MENU PRINCIPAL    	 *
******************************************************/
void opcion_principal (int opcion) {
    string password;
    switch (opcion) {
        case 1:
            system("cls");
            do {
                cout << "Ingrese la contrasenia de administrador: ";
                cin >> password;
                if (password != "joker2019") {
                    cout << "Contrasenia incorrecta. Intentalo de nuevo." << endl;
                }
            } while (password != "joker2019");
            system("cls");
            cout << "Bienvenido, administrador." << endl;
            
            break;

        case 2:
            system("cls");
          
            break;

        case 3:
            system("cls");
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
            break;
    }
}

/*****************************************************
*               MENU DEL PROGRAMA PRINCIPAL          *
******************************************************/
void menu_principal(){
	system("cls");
	system("color 6");
	int opcion, numFacturas;
	string password;
	do{
	
	    posicion(7,5);cout << "\t\t **********************";
        posicion(7,5);cout << "\n\t\t ||     Bienvenido   ||";
        posicion(7,6);cout << "\n\t\t ||Menu de Opciones: ||";
        posicion(7,7);cout << "\n\t\t ||Elija una opcion: ||";
        posicion(7,8);cout << "\n\t\t **********************";
        posicion(7,9);cout << "\n\t  =============================================================";
        posicion(7,10);cout << "\n	  || 1. Ingresar como administrador		             ||";
        posicion(7,11);cout << "\n\t  || 2. Ingresar como cliente                                ||";
        posicion(7,12);cout << "\n\t  || 3. Salir del programa                                   ||";
        posicion(10,17);cout << "\n\t  ============================";
        posicion(10,18);cout << "\n\t  ||Ingrese la opcion:      ||";
        posicion(10,19);cout << "\n\t  ============================";
        posicion(33,19);cin >> opcion;
        opcion_principal(opcion);
    }while (opcion != 3);
}

int main (){
	menu_principal();
}
	