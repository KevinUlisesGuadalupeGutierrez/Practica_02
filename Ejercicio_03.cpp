#include <iostream>
using namespace std;
class Gato{
public:
Gato(int edadInicial);
~Gato();
int ObtenerEdad()const;
void AsignarEdad(int edad);
void Maullar();
void AsignarPeso(float peso);
float ObtenerPeso()const;
private:
int suEdad;
float suPeso;
Gato(float pesoInicial);




};
//Constructor de Gato
Gato::Gato(int edadInicial){
suEdad = edadInicial;
cout << "Se ha creado un objeto Gato de edad " << edadInicial << endl;
}
Gato::~Gato(){
cout << "El objeto Gato se destruira en 3, 2, 1 .... ya fue...." << endl;
}
// ObtenerEdad, metodo de acceso publico
// regresa el valor de su miembro suEdad
int Gato::ObtenerEdad() const{
return suEdad;
}
// Definicion de AsignarEdad, metodo de
// acceso publico
void Gato::AsignarEdad(int edad){
// asignar a la variable miembro su Edad el
// valor pasado por el parametro edad
suEdad = edad;
}
// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miau" << endl;
}
Gato::Gato(float pesoInicial){
suPeso = pesoInicial;
cout << "Se ha creado un objeto Gato de peso " << pesoInicial << endl;
}
float Gato::ObtenerPeso()const{
return suPeso;
}
 void Gato::AsignarPeso( float peso){
 suPeso=peso;
 }


// crear un gato, asignar un valor asu edad, hacer que
// maulle, que nos diga su edad, y que vuelva a maullar.
int main(){
Gato Pelusa(5);
Pelusa.AsignarPeso(5.6);
Pelusa.Maullar();
cout << "Pelusa es un gato que tiene";
cout << Pelusa.ObtenerEdad() << "anios de edad" << endl;
cout << Pelusa.ObtenerPeso() << "kg de peso" << endl;
Pelusa.Maullar();
Pelusa.AsignarEdad(7);
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerEdad() << " anios de edad" << endl;
return 0;
}
