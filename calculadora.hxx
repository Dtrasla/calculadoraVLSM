#include "calculadora.h"


//recibe como vector EL ULTIMO HOST de una red y calcula la subred a partir de eso
vector<bool> devolverSubRed(vector<bool> redActual, int bitsMascaraActual, int bitsNuevaMascara, int bitsOriginales){
    cout << "bits de la mascara original: " << bitsOriginales<<endl;
    cout << "bits de la mascara actual: " << bitsMascaraActual<<endl;
    cout << "bits de la nueva subred: " << bitsNuevaMascara<<endl;
    int posicionActual = bitsNuevaMascara;
    bool val = false;
    for(vector<bool>::iterator it = redActual.begin() + bitsNuevaMascara-1; it!=redActual.end() && !val; ){
        if(posicionActual == bitsNuevaMascara && !(*it) && posicionActual >=bitsOriginales){
            *it = true;
            val = true;
            ++it;
            for(it; it != redActual.end(); it++) //reinicia todos los bits despues del que se cambio
                *it = false;
        }

        else if( posicionActual >= bitsOriginales && posicionActual < bitsNuevaMascara && !(*it) ){
            *it = true;
            val = true;
            ++it;
            for(it; it != redActual.end(); it++) 
                *it = false;
        }

        if(posicionActual<bitsOriginales)
            val = true;

        --it;
        --posicionActual;
    }

    for(vector<bool>::iterator it = redActual.begin(); it != redActual.end(); ++it){
        if(*it)
            cout << "1";
        else{
            cout << "0";
        }
    }
    cout << endl;

    return redActual;
}

//convierte cadenas binarias a redes de ipv4
//recibe un vector booleano que representa toda la red
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
        //cout << acum << " ";
    }
    decimal.push_back(acum);
    return decimal;
}

