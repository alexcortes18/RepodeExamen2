#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "Pista.h"
#include "NodoBinario.h"
#include <iostream>       // std::cin, std::cout
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <list>
using namespace std;

void evaluar();
void escribir(string nombre_archivo, Pista*gato, int posicion);
Pista* leer(string nombre_archivo, int posicion);
int contarBuenas(string nombre_archivo);
int contarRepetidos(multiset<int> mi_set);
bool existe(queue<char> a, stack<char> b, char c);
string getKey(map<string,string>mi_mapa, string valor);
void cortarDecendencia(NodoBinario* raiz,int valor);
int getProfundidad(NodoBinario* raiz,int buscado);
char borrar2Bits(char byte);

#endif // EVALUADOR_H
