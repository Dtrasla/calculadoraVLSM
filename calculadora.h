#ifndef __CALCULADORA__H__
#define __CALCULADORA__H__
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;


//recibe la red actual como un vector de binarios, los bits de las mascaras y calcula una nueva subred a partir de ello
vector<bool> devolverSubRed(vector<bool> redActual, int bitsMascaraActual, int bitsNuevaMascara, int bitsOriginales);

vector<int> convertirACadenaDecimal(vector<bool> redBinaria);

vector<int> devolverBroadcast(vector<bool> redBinaria, int bitsMascara);


#include "calculadora.hxx"
#endif //__CALCULADORA__H__
