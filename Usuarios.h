#ifndef USUARIOS_H
#define USUARIOS_H
#include "Mascotas.h"
#include <bits/stdc++.h>
using namespace std;
class Usuarios {
    private:
        string nombre;
        map<string, Mascotas*> mascotas;
    public:
        Usuarios(string nombre);
        void adoptarMascota(Mascotas* mascota);
        void mostrarMascota();
};

#endif //USUARIOS_H
