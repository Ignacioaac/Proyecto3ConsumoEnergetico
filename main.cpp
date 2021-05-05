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
        
        int bombillo, horabombillo, wattbombillo, totalbombillo, camara, camarah; 
        int totalcamara, compu, celu, tablets, compuh, celuh, tabletsh, totaliot;
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

                cout << "\n\tIngrese la cantidad de camaras: ";
                cin >> camara;

                cout << "\n\tIngrese la cantidad de horas que pasan encendidas las camaras: ";
                cin >> camarah;
                                
                cout << "\t---------------------------" << endl;
                 totalcamara= (camara*camarah*0.5);
                totalbombillo = (bombillo*horabombillo*wattbombillo);

                cout << "\tResultado Bombillos: " << totalbombillo <<" watts"<<endl;

                 cout << "\tResultado Camaras: " << totalcamara <<" watts"<<endl;
                break;
            case 2:
                // Instrucciones para captura de datos de la casa bombillos, flurecentes etc
                cout << "\n\tIngrese la cantidad de computadoras: ";
                cin >> compu;

                cout << "\n\tIngrese la cantidad de horas encendidas de la computadoras: ";
                cin >> compuh;

                cout << "\n\tIngrese la cantidad de celulares: ";
                cin >> celu;
                
                cout << "\n\tIngrese la cantidad de horas encendidas de la celulares: ";
                cin >> celuh;

                cout << "\tIngrese la cantidad de tablets: ";
                cin >> tablets;
                
                cout << "\n\tIngrese la cantidad de horas encendidas de la tablets: ";
                cin >> tabletsh;

                cout << "\t---------------------------" << endl;
                totaliot = ((compu*compuh)+(celu*celuh)+(tablets*tabletsh))*0.5;
                cout << "\tResultado: " << totaliot <<" watts"<<endl;
                break;
                
            
		
                
               
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}