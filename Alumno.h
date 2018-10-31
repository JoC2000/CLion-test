//
// Created by damin on 31/10/18.
//

#ifndef UNTITLED_ALUMNO_H
#define UNTITLED_ALUMNO_H
#include <iostream>
using namespace std;
class Alumno {
    string nombre,apellido,direccion;
    int edad;
public:
    void setnombre(string _nombre);
    void setapellido(string _apellido);
    void setdireccion(string _direccion);
    void setedad(int _edad);
    //getters
    string getnombre();
    string getapellido();
    string getdireccion();
    int getedad();
};


#endif //UNTITLED_ALUMNO_H
