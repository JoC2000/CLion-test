//
// Created by damin on 31/10/18.
//

#ifndef UNTITLED_CPOLIGONO_H
#define UNTITLED_CPOLIGONO_H
#include <iostream>
using namespace std;
class Cpoligono {
    int lados;
    float longitud;
    float perimetro,apotema;
public:
    void setlados(int _lados);
    void setlongitud(float _longitud);
    float getperimetro(float _lados,float longitud);
    float getapotema(float _lados);
    float getarea(float _perimetro,float apotema);
    string getnombre(string _nombre);
};


#endif //UNTITLED_CPOLIGONO_H
