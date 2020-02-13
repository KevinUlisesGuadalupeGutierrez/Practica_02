#include <iostream>
#include "GaTo.h"
using namespace std;
int main(){
GaTo Pelusa(5);
Pelusa.Maullar();
cout << "Pelusa es un gato que tiene";
cout << Pelusa.ObtenerEdad() << "anios de edad" << endl;
Pelusa.Maullar();
Pelusa.AsignarEdad(7);
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerEdad() << " anios de edad" << endl;
return 0;
}
