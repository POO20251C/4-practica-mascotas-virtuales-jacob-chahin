#include "Plataformas.h"
Plataformas::Plataformas() {}

void Plataformas::registrarUsuario(const string& nombre) {
    usuarios[nombre] = new Usuarios
    (nombre);
}

Usuarios* Plataformas::getUsuario(const string& nombre) {
    if (usuarios.find(nombre) != usuarios.end()) {
        return usuarios[nombre];
    }
    return nullptr;
}

void Plataformas::mostrarUsuarios() const {
    for (const auto& pair : usuarios) {
        cout << "Usuario: " << pair.first << endl;
    }
}

Tienda& Plataformas::getTienda() {
    return tienda;
}
