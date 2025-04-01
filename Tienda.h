#ifndef TIENDA_H
#define TIENDA_H
#include "Objetos.h"
using namespace std;
class Tienda {
  private:
      vector <Objetos> inventario;
  public:
      Tienda();
      void agregarObjeto(Objetos& obj);
      void mostrarInventario();
      Objetos* obtenerObjeto(string nombre);
};
#endif //TIENDA_H
