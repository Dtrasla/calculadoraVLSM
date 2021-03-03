#include <iostream>
#include "calculadora.h"
#include <vector>

using namespace std;
int main(){
   vector<bool> red;

                     //primer        //segundo       //tercer        //cuarto
    bool prim[32] = {1,1,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0};
    for(int i = 0; i<32; i++)
        red.push_back(prim[i]);


    return 0; 
}