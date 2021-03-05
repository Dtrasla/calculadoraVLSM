#include <iostream>
#include "calculadora.h"
#include <vector>

using namespace std;
int main(){
   vector<bool> red;
    /*
                     //primer        //segundo       //tercer        //cuarto
    bool prim[32] = {1,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1};
    for(int i = 0; i<32; i++)
        red.push_back(prim[i]);
    vector<int> decimal;
    decimal = convertirACadenaDecimal(red);
    
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    }
    cout << endl;
    for(vector<bool>::iterator it = red.begin(); it != red.end(); ++it){
        if(*it)
            cout << "1";
        else{
            cout << "0";
        }
    }



    cout << endl;
    vector<bool> segundaRed;
    segundaRed = devolverSubRed(red, 25, 25, 21);
    decimal = convertirACadenaDecimal(segundaRed);
     for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    }
    */

    int redInicial[4] = {192,168,8,0};
    int prefijoInicial = 23;
    vector<int> redInic;
    for(int i = 0; i<4; i++){
        redInic.push_back(redInicial[i]);
    }


    vector<bool> cadena;
    cadena = convertirDecimalABinario(redInic);
    vector<int> decimal;
    decimal = convertirACadenaDecimal(cadena);
    cout << "Red: ";
     for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    }
    cout << endl;
    cadena = devolverBroadcast(prefijoInicial, cadena);
    decimal = convertirACadenaDecimal(cadena);
    cout << "broadcast: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout << endl << endl;



    cadena = devolverSubRed(cadena, 23, 24, 21);
    decimal = convertirACadenaDecimal(cadena);
    cout << "Red: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout  << endl;
    cadena = devolverBroadcast(24, cadena);
    decimal = convertirACadenaDecimal(cadena);
    cout << "broadcast: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout  << endl << endl;


    cadena = devolverSubRed(cadena, 24, 24, 21);
    decimal = convertirACadenaDecimal(cadena);
    cout << "Red: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout  << endl;
    cadena = devolverBroadcast(24, cadena);
    decimal = convertirACadenaDecimal(cadena);
    cout << "broadcast: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout  << endl << endl;


    cadena = devolverSubRed(cadena, 24, 25, 21);
    decimal = convertirACadenaDecimal(cadena);
    cout << "Red: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout  << endl;
    cadena = devolverBroadcast(25, cadena);
    decimal = convertirACadenaDecimal(cadena);
    cout << "broadcast: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout  << endl << endl;


    cadena = devolverSubRed(cadena, 25, 25, 21);
    decimal = convertirACadenaDecimal(cadena);
    cout << "Red: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout  << endl;
    cadena = devolverBroadcast(25, cadena);
    decimal = convertirACadenaDecimal(cadena);
    cout << "broadcast: ";
    for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    } 
    cout  << endl << endl;

    return 0; 
}