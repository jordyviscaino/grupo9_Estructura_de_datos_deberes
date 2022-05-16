#include<iostream>

using namespace std;
class Entero : public entrada {
 		public: 
		 char *entradaDatos(char* msg);
		 };
char* Entero::entradaDatos(char* msg){		 
	char *dato= new char[10];
	char c;
	int i=0;
	printf("%s\n",msg);
	while((c=getch())!=13){
		if(c>='0' && c<='9'){
		 
		  	
		  	printf("%c",c);
		      dato[i++]=c;     			
		}
	}
	dato[i]='\n';

	return dato;
}