#include "NodoBinario.h"

NodoBinario::NodoBinario(int valor)
{
    this->valor=valor;
    hijo_izquierdo=NULL;
    hijo_derecho=NULL;
}

NodoBinario::~NodoBinario()
{
    //dtor
}
