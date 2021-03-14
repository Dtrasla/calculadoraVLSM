#include <iostream>
#include "calculadora.h"
#include <vector>
#include <algorithm>
using namespace std;
int main(){



    //MODO SERIO
    vector<int> redOriginal;
    int primerOcteto, segundoOcteto, tercerOcteto, cuartoOcteto, mascaraOriginal;
    cout << "ingresar la red, separado por espacios: ";
    cin >> primerOcteto >> segundoOcteto >> tercerOcteto >> cuartoOcteto;
    redOriginal.push_back(primerOcteto);
    redOriginal.push_back(segundoOcteto);
    redOriginal.push_back(tercerOcteto);
    redOriginal.push_back(cuartoOcteto);
    imprimirRedDec(redOriginal);
    cout << endl << "Cuantos bits cubre la mascara de la red: ";
    cin >> mascaraOriginal;
    int maximoHostsBits = (32-mascaraOriginal);
    int subredes;
    cout << endl << "Cuantas subredes se necesitan: ";
    cin >> subredes;

    int* hostPorSubred = new int [subredes];
    int h;
    for(int i = 0; i<subredes; i++){
        cout << endl << "Hosts para la subred " << i+1 << ": ";
        cin >> h;
        //h+=2; //para las dos adicionales que se requieren
        hostPorSubred[i] = h;
    }
    int hostsTotales = 0;
    for(int i = 0; i < subredes; i++)
        hostsTotales+=hostPorSubred[i];
    std::sort(hostPorSubred, hostPorSubred+subredes, greater<int>());
    

    if(hostsTotales <= sumaBits(maximoHostsBits)){
        vector<int> subred = redOriginal;
        vector<bool> subredB = convertirDecimalABinario(redOriginal);
        for(int i = 0; i < subredes; i++){
            cout << endl << endl;
            
            int mascara = 32 - (bitsParaNumero(hostPorSubred[i]));
            if(i == 0){
                cout << "Subred 1: ";
                imprimirRedDec(redOriginal);
                cout << endl << "Mascara de la subred 1: " << mascara << " bits"<<endl;
                subredB = devolverBroadcast(mascara, subredB);
                subred = convertirACadenaDecimal(subredB);
                cout << "Broadcast 1: ";
                imprimirRedDec(subred);
                cout << endl << "Numero de hosts: " << (sumaBits( bitsParaNumero (hostPorSubred[i])))-1 ;
                cout << endl;
            }
            else{
                subredB = devolverSubRed(subredB, bitsParaNumero(hostPorSubred[i-1]), mascara, mascaraOriginal);
                subred = convertirACadenaDecimal(subredB);
                cout << "Subred " << i+1 << ": "; 
                imprimirRedDec(subred);
                cout << endl << "Mascara de la subred " << i+1 << ": " << mascara << " bits" <<endl;
                subredB = devolverBroadcast(mascara, subredB);
                subred = convertirACadenaDecimal(subredB);
                cout << "Broadcast " << i+1 << ": " ;
                imprimirRedDec(subred);
                cout << endl << "Numero de hosts: " << (sumaBits( bitsParaNumero (hostPorSubred[i])))-1 ;
                cout << endl;
            }

        }
    }
    else{
        cout <<endl<< "esta red no puede acomodar "<< hostsTotales << " hosts";
    }

    

    return 0; 
}


