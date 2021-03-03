#include "calculadora.h"



vector< vector<bool> > devolverSubRed(vector<bool> redActual, int bitsMascaraActual, int nuevaMascara){



}

//convierte cadenas binarias a redes de ipv4
vector<int> convertirACadenaDecimal(vector<bool> redBinaria){
    vector<int> decimal;
    vector<bool>::iterator it;
    int octeto= 0; 
    int acum = 0, pot = 128;
    for( it = redBinaria.begin(); it != redBinaria.end(); ++it){
        if(octeto%8 == 0 && octeto != 0){
            decimal.push_back(acum);
            acum = 0;
            pot = 128;
            
        }

        if(*it)
            acum+= pot;
        pot = pot/2;
        octeto++;
        cout << acum << " ";
    }
    decimal.push_back(acum);
    return decimal;
}

