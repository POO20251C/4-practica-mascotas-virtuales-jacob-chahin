#include "Mascotas.h"
using namespace std;

Mascotas::Mascotas(string nombre, int edad, int energia, string estadoSalud, string saludEmocional)
    : nombre(nombre), edad(edad), energia(energia), estadoSalud(estadoSalud), saludEmocional(saludEmocional) {}

string Mascotas::getNombre() const {
    return nombre;
}


void Mascotas::recibirObjeto(Objetos *objeto) {
    historial.emplace_back("Recibió " + objeto->getNombre());
}

void Mascotas::aprenderHabilidad(Habilidades *habilidad) {
    habilidades.emplace_back(*habilidad);
    historial.emplace_back("Aprendió habilidad: " + habilidad->getNombre());
}

void Mascotas::ganarExperencia(int exp) {
    energia += exp;
}

void Mascotas::mostrarHitorial() {
    for (const auto& evento : historial) {
        cout << evento << endl;
    }
}