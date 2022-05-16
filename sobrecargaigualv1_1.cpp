/*uUFA-ESPE
* Sobrecarga operador =
* Viscaino Jordy  -
* 14/05/2022
* 15/05/2022
* grupo 9
* Estructura de Datos 4683
* Versión 1.0
* https://github.com/jordyviscaino/grupo9_Estructura_de_datos_deberes.git
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>
#include "datos.h"
#include "ingrgeso.cpp"
using namespace std;
class SValores{
	int num;
	public:
		SValores(int n=0):num(n){};//libre para asignar posteriormente
		
		friend SValores operator + (SValores a, SValores b){
			return SValores(a.num+b.num); //operador para obtener resultados
		}
		
		SValores& operator=(SValores a){  /* */
			num = a.num;  //asignacion del objeto
			return *this; //referencia al objeto num
		}
};

int main(){
	SValores a(3), b(8), c(5), d, e;


	e=d=a+b+c; /* la suma de los objetos previamente propuestos son asignados 
	tanto a "d" como a "e"*/
	e=d+a+b; /* ahora asignamos el valor de "d" nuevamente a "e" sumando "a" y "b"*/
	
	  printf("\n-El primer valor es: --> %d---", d);
	   printf("\n-Ahora el valor es: --> %d---", e);
	return 0;
}
