#include "Usuarios.h"
using namespace std;
Usuarios::Usuarios(string nombre) : nombre(nombre) {}

void Usuarios::adoptarMascota(Mascotas* mascota) {
    mascotas[mascota->getNombre()] = mascota;
}

void Usuarios::mostrarMascota() {
    for (const auto& pair : mascotas) {
        cout << "Mascota: " << pair.first << endl;
    }
}
