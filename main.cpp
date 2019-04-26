#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

//menu de opciones
void menu();

//Funciones Captcha
void ejercicio1();
//Verificar número perfecto
void ejercicio2();
void ejercicio3();

int main(){
  bool cicloMenu = true;
  int opcionMenu = -1;

  while(cicloMenu){
    do{
      menu();
      cin >> opcionMenu;
      switch(opcionMenu){
        case 1://Ejercicio 1
          ejercicio1();
        break;
        case 2://Ejercicio 2
          ejercicio2();
        break;
        case 3://Ejercicio 3
        break;
        case 0://Salir
          cout << "Finalizó con éxito.\n";
        break;
        default:
          cout << "Opción inválida.\n";
        break;
      }
    }while(opcionMenu != 0);
    cicloMenu = false;
  }

  return 0;
}

//Ejercicio #1
void ejercicio1(){
  char secuencia[100];
  
  
  cout << "Ingrese una secuencia de dígitos par (e: 164379): ";
  cin >> secuencia;
  int size = sizeof(secuencia)/sizeof(secuencia[0]);
  for(int i = 0; i < size; i++){
    cout << secuencia[i];
  }

}

//Ejercicio #2
void ejercicio2(){  
  int num, div, sum=0;
  int valores[1000];
  
  cout << "Ingrese un número a validar: ";
  cin >> num;

  for(int i = 0; i < 1000; i++){
    valores[i] = 0;
  }
  
  for(int i = 1; i < num; i++)
  {
    div = num % i;
    if (div == 0){
      sum = sum + i;}
    valores[i] = sum;   
  }
   
  if(sum == num){
    cout << "El número " << num << " es perfecto.\n";
    for(int i = 0; i < 1000; i++){
      if(valores[i] != 0){
        cout<< valores[i] << " ";}
      }
  }
  else{
        cout << "El número " << num << " no es perfecto.\n";}
}

//Menú principal
void menu(){
  cout << "\tLABORATORIO 2\n"
      << "1 - Ejercicio 1\n"
      << "2 - Ejercicio 2\n"
      << "3 - Ejercicio 3\n"
      << "Seleccione una opción: ";
}
