#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED
#include "Poligono.h"

//classe retangulo herda da classe poligono
class Retangulo : public Poligono {
    public:
    Retangulo(int x,int y, int largura,int altura);
    ~Retangulo();
};


#endif // RETANGULO_H_INCLUDED
