/*uUFA-ESPE
* (Programa de ejemplo)Manejo de clases
* Viscaino Jordy  -  Pavón Jerry
* 11/05/2022
* 12/05/2022
* grupo 9
* Estructura de Datos 4683
* Versión 1.0
* https://github.com/jordyviscaino/grupo9_Estructura_de_datos_deberes.git
*/

#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
#include "dato.h"
#include "entradadato.cpp"

using namespace std;

int factorial(int);
int suma(int);
int suma(int n){
  if(n==0)
   return 0;
else{
   return n+suma(n-1);
 }
}

int factorial(int n){
  if(n==0)
   return 1;
  else{
   return n*factorial(n-1);
  }
}
int main(int argc, char** argv) {
entrada* obj;
 obj= new Entero();
	char datoe[10];
	int valor;
		strcpy( datoe, obj ->entradaDatos("Por favor ingrese valor entero para su factorial: "));
	 cout<<endl;
    fflush(stdin);
    valor = atoi(datoe);
    
  for(int i=1;i<=valor;i++){
    printf("\nSUMA %d ",suma(i));
    printf("factorial = %d",factorial(i));
  }
 return 0;
}


    /*printf("\n El valor connvertido es--> %d", valor);*/
