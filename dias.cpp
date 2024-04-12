#include <iostream>
using namespace std;
int main(){
string dia;
int diaa;

cout << "Que dia es hoy? ";
cin >> dia;
if(dia == "lunes"){
    diaa = 1;
}else if(dia == "martes"){
    diaa = 2;
}else if(dia == "miercoles"){
    diaa = 3;
}else if(dia == "jueves"){
    diaa = 4;
}else if(dia == "viernes"){
 diaa = 5;
}
switch (diaa) {
  case 1:
    cout << "hoy no tenes nada";
    break;
  case 2:
    cout << "hoy tenes programacion";
    break;
  case 3:
    cout << "hoy no tenes nada";
    break;
  case 4:
    cout << "hoy tenes programacion";
    break;
  case 5:
    cout << "hoy tenes programacion";
    break;
  default:
    cout << "Ingrese un dia";
}
}
