#ifndef PLATAFORMAS_H
#define PLATAFORMAS_H
#include "Tienda.h"
#include "Usuarios.h"
#include <bits/stdc++.h>
using namespace std;
class Plataformas {
      private:
             map<string, Usuarios*> usuarios;
             Tienda tienda;
      public:
             Plataformas();
             void registrarUsuario(const string& nombre);
             Usuarios* getUsuario(const string& nombre);
             void mostrarUsuarios()const;
             Tienda& getTienda();
};
#endif //PLATAFORMAS_H
