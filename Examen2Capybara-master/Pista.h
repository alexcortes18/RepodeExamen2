#ifndef PISTA_H
#define PISTA_H

#include <iostream>
using namespace std;

class Pista
{
    public:
        string autor;
        int fecha;
        int duracion;
        char categoria;
        bool es_buena;
        Pista(string autor,int fecha, int duracion, char categoria, bool es_buena);
        virtual ~Pista();
    protected:
    private:
};

#endif // PISTA_H
