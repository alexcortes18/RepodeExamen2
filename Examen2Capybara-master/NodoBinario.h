#ifndef NODOBINARIO_H
#define NODOBINARIO_H

#include <iostream>
using namespace std;

class NodoBinario
{
    public:
        NodoBinario*hijo_izquierdo;
        NodoBinario*hijo_derecho;
        int valor;
        NodoBinario(int valor);
        virtual ~NodoBinario();
    protected:
    private:
};

#endif // NODOBINARIO_H
