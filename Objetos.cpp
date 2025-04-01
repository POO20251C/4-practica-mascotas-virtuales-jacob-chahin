#include "Objetos.h"
using namespace std;
Objetos::Objetos(const string& nombre, const string& tipo, const string& efecto) : nombre(nombre), tipo(tipo), efecto(efecto) {}

string Objetos::getNombre() const { return nombre; }
string Objetos::getTipo() const { return tipo; }
string Objetos::getEfecto() const { return efecto; }