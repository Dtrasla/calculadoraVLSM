#include "calculadora.h"



vector< vector<bool> > devolverSubRed(vector< vector<bool> > redActual, int bitsMascaraActual, int nuevaMascara){



}


vector<int> convertirACadenaDecimal(vector< vector<bool> > redBinaria){
    vector<int> decimal;
    vector< vector<bool> >::iterator it;

    for( it = redBinaria.begin(); it != redBinaria.end(); ++it){
        int acum = 0, pot = 1;
        vector<bool>::reverse_iterator in; 
        for(in = it->rbegin(); in != it->rend(); ++in){
            if(*in)
                acum+= pot;

            pot = pot*2;
        }
        decimal.push_back(acum);
    }

}


vector<int> convertirACadenaDecimal(vector<bool> redBinaria){
    vector<int> decimal;
    vector<bool>::iterator it;
    int octeto= 0; 
    int acum = 0, pot = 1;
    for( it = redBinaria.begin(); it != redBinaria.end(); ++it){
        if(octeto%8 == 0 && octeto != 0){
            acum = 0;
            pot = 1;
            decimal.push_back(acum);
        }

        if(*it)
            acum+= pot;
        pot = pot*2;
        octeto++;
    }

}

