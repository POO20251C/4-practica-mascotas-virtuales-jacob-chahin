#include "Tienda.h"
Tienda::Tienda() {}

void Tienda::agregarObjeto(Objetos& obj) {
    inventario.emplace_back(obj);
}

void Tienda::mostrarInventario() {
    for (auto& obj : inventario) {
        cout << obj.getNombre() << " - " << obj.getEfecto() << endl;
    }
}

Objetos* Tienda::obtenerObjeto(string nombre) {
    for (auto& obj : inventario) {
        if (obj.getNombre() == nombre) {
            return &obj;
        }
    }
    return nullptr;
}