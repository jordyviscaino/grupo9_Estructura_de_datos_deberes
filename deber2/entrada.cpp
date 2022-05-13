#include<iostream>

using namespace std;

 	class Flotante : public entrada {
 		public: 
		 char *entradaDatos(char* msg);
		 };
		 
	char* Flotante::entradaDatos(char* msg){
		
		char *dato=new char[10];
		bool flag = false;
		char c;
		int i=0;
		printf("%s\n",msg);
		
		while((c=getch())!=13){
			
    			if((c>='0' && c<='9')||c=='.'){
       			 if(!(i==0&&c=='.')){ 
           			 if(!(c=='.'&&flag==true)){ 
               			 printf("%c",c);       
             			   dato[i++]=c;
             				   if(c=='.')
                  				  flag=true;
            	}
       		 }
        }
    }
    
	dato[i]='\n';
    return dato;
}

		bool resp(char* dato,int i){
    for(int j=0;j<i;j++){
         if(!((dato[j]>='0' && dato[j]<='9')||dato[j]=='.')){
            return false;
         }
    }
    return true;
}
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
/*	valor=atoi(dato);
	printf ("\n");
	printf ("el dato ingresado es %d", valor);
	system("pause");
*/
	return dato;
}



class Cadena : public entrada {
public:
    char *entradaDatos(char* msg);
};

char* Cadena::entradaDatos(char* msg){

    char *dato=new char[35];
    char c;
    int i=0;
    printf("%s\n",msg);
    while((c=getch())!=13){
    if((c>='a' && c<='z')||(c>='A' && c<='Z')){
        printf("%c",c);
        dato[i++]=c;
        }
    }
    dato[i]='\n';
    
    return dato;

}
	
		
		
		
	