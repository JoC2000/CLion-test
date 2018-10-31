//
// Created by damin on 31/10/18.
//

#include "Alumno.h"
#include <iostream>
using namespace std;

void Alumno::setnombre(string _nombre){
    this->nombre=_nombre;
}
void Alumno::setapellido(string _apellido){
    this->apellido=_apellido;
}
void Alumno::setdireccion(string _direccion){
    this->direccion=_direccion;
}
void Alumno::setedad(int _edad){
    this->edad=_edad;
}
string Alumno::getnombre(){
    return nombre;
}
string Alumno::getapellido(){
    return apellido;
}
string Alumno::getdireccion(){
    return direccion;
}
int Alumno::getedad(){
    return edad;
}