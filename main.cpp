#include <iostream>
#include "Alumno.h"

using namespace std;
int main() {
    string n, a, d;
    int e;
    Alumno obj;
    cout << "Nombres:" << endl;
    getline(cin, n);
    obj.setnombre(n);
    cout << "Apellidos:" << endl;
    getline(cin, a);
    obj.setapellido(a);
    cout << "Edad:" << endl;
    cin >> e;
    obj.setedad(e);
    cout << "Direccion:" << endl;
    cin.ignore();
    getline(cin, d);
    obj.setdireccion(d);

    cout<<obj.getnombre()<<endl;
    cout<<obj.getapellido()<<endl;
    cout<<obj.getedad()<<endl;
    cout<<obj.getdireccion();
}