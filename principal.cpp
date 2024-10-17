/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string nombresPerros[] = {"Max", "Frida", "Toby", "Luna", "Israel", "Magno", "Tasha"};
    int edadesPerros[] = {5, 3, 2, 4, 7, 6, 8};
    int puntajesPerros[] = {90, 85, 88, 95, 80, 78, 92};
    string razasPerros[] = {"Labrador", "Pastor Alemán", "Beagle", "Golden Retriever", "Bulldog", "Dálmata", "Poodle"};
    int cantidadPerros = 7;

    
    string nuevosNombres[10]; 
    int nuevasEdades[10];
    int nuevosPuntajes[10];
    string nuevasRazas[10];
    int cantidadNuevosPerros = 0; 

    int pmenu;
    do {
        cout << "1. Mostrar la lista de los perros registrados en la exposición" << endl;
        cout << "2. Mostrar la información de un perro específico" << endl;
        cout << "3. Registrar un nuevo perro" << endl;
        cout << "4. Salir" << endl;

        cout << "Digite la opción que desee: ";
        cin >> pmenu;

        switch (pmenu) {
            case 1: 
                cout << "Perros registrados:" << endl;
                for (int i = 0; i < cantidadPerros; i++) {
                    cout << nombresPerros[i] << " - " << razasPerros[i] << " - Edad: " << edadesPerros[i] << " - Puntaje: " << puntajesPerros[i] << endl;
                }
               
                for (int i = 0; i < cantidadNuevosPerros; i++) {
                    cout << nuevosNombres[i] << " - " << nuevasRazas[i] << " - Edad: " << nuevasEdades[i] << " - Puntaje: " << nuevosPuntajes[i] << endl;
                }
                break;
            
            case 2: { 
                int index;
                cout << "Introduce el número del perro (0 a " << (cantidadPerros + cantidadNuevosPerros - 1) << "): ";
                cin >> index;
                if (index < cantidadPerros) {
                    cout << nombresPerros[index] << " - " << razasPerros[index] << " - Edad: " << edadesPerros[index] << " - Puntaje: " << puntajesPerros[index] << endl;
                } else {
                    index -= cantidadPerros;
                    cout << nuevosNombres[index] << " - " << nuevasRazas[index] << " - Edad: " << nuevasEdades[index] << " - Puntaje: " << nuevosPuntajes[index] << endl;
                }
                break;
            }

            case 3: {
                if (cantidadNuevosPerros < 10) {
                    cout << "Introduce el nombre del nuevo perro: ";
                    cin >> nuevosNombres[cantidadNuevosPerros];
                    cout << "Introduce la raza: ";
                    cin >> nuevasRazas[cantidadNuevosPerros];
                    cout << "Introduce la edad: ";
                    cin >> nuevasEdades[cantidadNuevosPerros];
                    cout << "Introduce el puntaje: ";
                    cin >> nuevosPuntajes[cantidadNuevosPerros];
                    cantidadNuevosPerros++;
                    cout << "Nuevo perro registrado con éxito!" << endl;
                } else {
                    cout << "No se pueden registrar más perros." << endl;
                }
                break;
            }

            case 4: // Salir
                cout << "Saliendo del programa." << endl;
                break;

            default:
                cout << "Opción no válida." << endl;
                break;
        }
    } while (pmenu != 4);

    return 0;
}