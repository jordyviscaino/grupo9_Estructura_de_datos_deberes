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
#include "entrada.h"
#include "entrada.cpp"

using namespace std;

int main(){
	
	entrada* obj;
	
	obj = new Flotante();
	char datof[10];
    float valorf;
        char msg[]="Por favor ingrese un valor flotante: ";
    strcpy(datof,obj->entradaDatos(msg));
    cout<<endl;
    fflush(stdin);
    valorf = atof(datof);

    printf(" \n El valor connvertido es-->  %f   ",valorf*2);
    
    printf("\n*----------------------------------------------------*\n");
    
    obj= new Entero();
	char datoe[10];
	int valor;
	strcpy( datoe, obj ->entradaDatos("Por favor ingrese un valor entero: "));
	 cout<<endl;
    fflush(stdin);
    valor = atoi(datoe);
   
    printf("\n El valor connvertido es--> %d", valor);

 
    printf("\n*----------------------------------------------------*\n");
    
    obj= new Cadena();
	char datoc[10];

	strcpy( datoc, obj ->entradaDatos("Por favor ingrese una cadena: "));
	 cout<<endl;
    fflush(stdin);
   
    printf("\n La cadena es--> %s", datoc);
    printf("\n ------------------- GRACIAS ------------------- ");
	return 0;
	
	
	
}