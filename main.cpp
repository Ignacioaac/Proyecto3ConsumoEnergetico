// Plantilla de un Menú de Opciones

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    
    do {

        
        // Texto del menú que se verá cada vez
        cout << "\n\n\t\t\tCalculo de Consumo" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\t1. Insertar consumo de la casa" << endl;
        cout << "\t2. Insertar consumo de dispositivos IOT" << endl;
        cout << "\t3. Insertar consumo Electródomesticos" << endl;
        cout << "\t4. Insertar consumo adicional" << endl;
        cout << "\t5. Calculo de Consumo" << endl;
        cout << "\t0. SALIR" << endl;
        
        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;
        
        int bombillo, horabombillo, wattbombillo, totalbombillo, numero2;
		float resultado;
        switch (opcion) {
            case 1:
                // Instrucciones para captura de datos de la casa bombillos, flurecentes etc
                cout << "\n\tIngrese la cantidad de bombillos: ";
                cin >> bombillo;

                cout << "\n\tIngrese la cantidad de horas que pasan encendidos los bombillos: ";
                cin >> horabombillo;
                
                cout << "\tIngrese la cantidad de watts de los bombillos: ";
                cin >> wattbombillo;
                
                cout << "\t---------------------------" << endl;
                totalbombillo = (bombillo*horabombillo*wattbombillo);
                cout << "\tResultado: " << totalbombillo << endl;
                
                system("pause>nul");
                break;
                
            case 2:
                // Instrucciones para restar dos números
                cout << "\n\tIngrese primer numero: ";
                cin >> numero1;
                
                cout << "\tIngrese segundo numero: ";
                cin >> numero2;
                
                cout << "\t---------------------------" << endl;
                resultado = numero1 - numero2;
                cout << "\tResultado: " << resultado << endl;
                
                system("pause>nul");
                break;
                
            case 3:
                // Instrucciones para multiplicar dos números
                cout << "\n\tIngrese primer numero: ";
                cin >> numero1;
                
                cout << "\tIngrese segundo numero: ";
                cin >> numero2;
                
                cout << "\t---------------------------" << endl;
                resultado = numero1 * numero2;
                cout << "\tResultado: " << resultado << endl;
                
                system("pause>nul");
                break;
                
            case 4:
                // Instrucciones para dividir dos números
                cout << "\n\tIngrese primer numero: ";
                cin >> numero1;
                
                cout << "\tIngrese segundo numero: ";
                cin >> numero2;
                
                cout << "\t---------------------------" << endl;
                
                if (numero2 == 0) {
                	cout << "\tResultado: No se puede dividir por cero." << endl; 
		} else {
			resultado = numero1 / (numero2 * 1.0);
			cout << "\tResultado: " << resultado << endl;
		}
                
                system("pause>nul");     
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}