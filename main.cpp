#include <iostream>
#include "Cpoligono.h"
using namespace std;
int main() {
    Cpoligono obj;
    int n;
    float l;
    cout<<"Número de lados:";
    cin>>n;
    obj.setlados(n);
    cout<<"Longitud de lados:";
    cin>>l;
    obj.setlongitud(l);
    cout<<obj.getperimetro(n,l)<<endl;
    cout<<obj.getapotema(n);
}