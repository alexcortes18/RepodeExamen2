#include "Pista.h"

Pista::Pista(string autor,int fecha, int duracion, char categoria, bool es_buena)
{
    this->autor=autor;
    this->fecha=fecha;
    this->duracion=duracion;
    this->categoria=categoria;
    this->es_buena=es_buena;
}

Pista::~Pista()
{
    //dtor
}
