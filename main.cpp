#include "Plataformas.h"
using namespace std;

int main() {
    Plataformas plataforma;
    int opcion;
    string nombreUsuario, nombreMascota, nombreObjeto;
    int edad, energia;
    string estadoEmocional, estadoSalud;

    do {
        cout << "1. Registrar usuario\n";
        cout << "2. Adoptar mascota\n";
        cout << "3. Brindar objeto a mascota\n";
        cout << "4. Mostrar usuarios\n";
        cout << "5. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ingrese nombre de usuario: ";
            cin >> nombreUsuario;
            plataforma.registrarUsuario(nombreUsuario);
        } else if (opcion == 2) {
            cout << "Ingrese nombre de usuario: ";
            cin >> nombreUsuario;
            Usuarios* usuario = plataforma.getUsuario(nombreUsuario);
            if (usuario) {
                cout << "Ingrese nombre de la mascota: ";
                cin >> nombreMascota;
                cout << "Ingrese edad: ";
                cin >> edad;
                cout << "Ingrese energía: ";
                cin >> energia;
                cout << "Ingrese estado emocional: ";
                cin >> estadoEmocional;
                cout << "Ingrese estado de salud: ";
                cin >> estadoSalud;
                Mascotas* mascota = new Mascotas(nombreMascota, edad, energia, estadoEmocional, estadoSalud);
                usuario->adoptarMascota(mascota);
            } else {
                cout << "Usuario no encontrado.\n";
            }
        } else if (opcion == 3) {
            cout << "Ingrese nombre de usuario: ";
            cin >> nombreUsuario;
            Usuarios* usuario = plataforma.getUsuario(nombreUsuario);
            if (usuario) {
                cout << "Ingrese nombre de la mascota: ";
                cin >> nombreMascota;
                cout << "Ingrese nombre del objeto: ";
                cin >> nombreObjeto;
                Objetos* obj = plataforma.getTienda().obtenerObjeto(nombreObjeto);
                if (obj) {
                    cout << "Objeto " << obj->getNombre() << " dado a " << nombreMascota << "\n";
                } else {
                    cout << "Objeto no encontrado.\n";
                }
            } else {
                cout << "Usuario no encontrado.\n";
            }
        } else if (opcion == 4) {
            plataforma.mostrarUsuarios();
        }
    } while (opcion != 5);

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.