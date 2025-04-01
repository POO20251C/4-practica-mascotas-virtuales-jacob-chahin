#ifndef HABILIDADES_H
#define HABILIDADES_H
#include <bits/stdc++.h>
using namespace std;

class Habilidades {
      private:
             string nombre;
             string descripcion;
      public:
             Habilidades(string nombre, string descripcion);
             string getNombre() const;
             string getDescripcion() const;
};

#endif //HABILIDADES_H
