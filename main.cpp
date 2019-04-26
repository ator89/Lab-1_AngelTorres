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
//Permutaciones posibles
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
          ejercicio3();
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
}//Final main()



//Ejercicio #1
void ejercicio1(){
  int size = 0, suma = 0;
  cout << "Cantidad de dígitos en la secuencia de par: "<< endl;
  cin >> size;
  
  int secuencia[size];
  
  //Inicializar la secuencia
  for(int i = 0; i < size; i++){
    cout << "Ingrese un dígito a la vez y presione <enter>: ";
    cin >> secuencia[i];
  }

  //Imprimir secuencia
  for(int i = 0; i < size; i++){
    cout << " " << secuencia[i];
  }
  cout << endl;  

  
  for(int i = 0; i <= size; i++){
    cout << "Valor: " << secuencia[i] <<endl;
    cout << "Suma inicial: " << suma << endl;
 
    //Comparar posición actual con la siguiente
    if(secuencia[i] == secuencia[i+1]){
      suma += secuencia[i];
    }
    if(secuencia[size] == secuencia[0]){
      suma = secuencia[0] + secuencia[size]; 
    }
    cout << "Suma: "<< suma << endl;
  }
  cout << "La suma es: " << suma << "\n";

}

//Ejercicio #2
void ejercicio2(){  
  int num, div, suma=0;
  int valores[1000];
  
  cout << "Ingrese un número a validar: ";
  cin >> num;

  for(int i = 0; i < 1000; i++){
    valores[i] = 0;
  }
 
  //Comprobar  
  for(int i = 1; i < num; i++)
  {
    div = num % i;
    if (div == 0){
      suma = suma + i;
    }
    valores[i] = suma;   
  }
  
  //Verificar si el número es perfecto e imprimir valores 
  if(suma == num){
    cout << "El número " << num << " es perfecto.\n";
    for(int i = 0; i < 1000; i++){
      if(valores[i] != 0){
        cout<< valores[i] << " ";
      }
    }
  }
  else{
        cout << "El número " << num << " no es perfecto.\n";}
}

//Ejercicio #4
void ejercicio3(){
  string palabra;
  char word[] = {};

  cout << "Ingrese una palabra: ";
  cin >> palabra;
  
  for(int i = 0; i < palabra.length(); i++){
  
  }
}

//Menú principal
void menu(){
  cout << "\n\tLABORATORIO 2\n"
      << "1 - Ejercicio 1\n"
      << "2 - Ejercicio 2\n"
      << "3 - Ejercicio 3\n"
      << "Seleccione una opción: ";
}
