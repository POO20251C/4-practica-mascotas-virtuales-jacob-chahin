#include "Habilidades.h"

Habilidades::Habilidades(string nombre, string descripcion) : nombre(nombre), descripcion(descripcion) {}

string Habilidades::getNombre() const { return nombre; }
string Habilidades::getDescripcion() const { return descripcion; }
