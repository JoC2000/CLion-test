//
// Created by damin on 31/10/18.
//

#include "Cpoligono.h"
#include <cmath>
#include <iostream>

using namespace std;

void Cpoligono::setlados(int _lados){
    this->lados=_lados;
}
void Cpoligono::setlongitud(float _longitud){
    this->longitud=_longitud;
}
float Cpoligono::getarea(float _perimetro,float _apotema){
    return (perimetro*apotema)/2;
}
float Cpoligono::getperimetro(float _lados, float _longitud){
    return lados*longitud;
}
float Cpoligono::getapotema(float _lados){
    return ((lados/2)/(tan(360/(lados*2))));
}
string Cpoligono::getnombre(string _nombre){
    return "Polígono de n lados";
}