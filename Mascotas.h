#ifndef MASCOTAS_H
#define MASCOTAS_H
#include "Habilidades.h"
#include "Objetos.h"
#include <bits/stdc++.h>
using namespace std;

class Mascotas {
  private:
      string nombre;
      int edad;
      int energia;
      string estadoSalud;
      string saludEmocional;
      vector <Habilidades> habilidades;
      vector <string> historial;
  public:
      Mascotas(string nombre, int edad, int energia, string estadoSalud, string saludEmocional);
      string getNombre() const;
      void recibirObjeto(Objetos *objeto);
      void aprenderHabilidad(Habilidades *habilidad);
      void ganarExperencia(int exp);
      void mostrarHitorial();
};
#endif //MASCOTAS_H
