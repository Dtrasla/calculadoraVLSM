#include <iostream>
#include "calculadora.h"
#include <vector>

using namespace std;
int main(){
   vector<bool> red;

                     //primer        //segundo       //tercer        //cuarto
    bool prim[32] = {0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,1,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0};
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
    segundaRed = devolverSubRed(red, 27, 30, 22);
    decimal = convertirACadenaDecimal(segundaRed);
     for(vector<int>::iterator it = decimal.begin(); it!=decimal.end(); ++it ){
        cout << *it << ".";
    }
    return 0; 
}