#ifndef OBJETOS_H
#define OBJETOS_H
#include <bits/stdc++.h>
using namespace std;
class Objetos {
      private:
             string nombre;
             string tipo;
             string efecto;
      public:
             Objetos(const string& nombre, const string& tipo, const string& efecto);
             string getNombre () const;
             string getTipo() const;
             string getEfecto() const;
};
#endif //OBJETOS_H
