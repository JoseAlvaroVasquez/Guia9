#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct nodo{
      int dato;
      struct nodo *sig;
};



struct nodo	*raiz = NULL; 

void insert(int pila){ 
struct nodo *nuevo;

	nuevo = malloc(sizeof(struct nodo));
	
	nuevo->dato = pila;

	
	if(raiz	== NULL){
		raiz = nuevo;
		nuevo->sig = NULL;
	}
	
	else{
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}



void invertir(){
	int num,cont;
	char * dato = malloc(12 * sizeof(char));
	
	printf("Digite un numero :\n");  

	scanf("%d", &num);

	sprintf(dato, "%i", num); 
		for(cont=0;dato[cont]!='\0';cont++){
		
			int x = (dato[cont] - '0');
		
			insert(x);
		}

}

void imprimir(){  
	struct nodo *reco=raiz;
	
	printf("el numero invertido es \n");
	
	while(reco!=NULL){

		printf("%i",reco->dato);
		reco=reco->sig;
	}
	
	printf("\n");
}




int main(){
	    invertir(); 
	    
		imprimir();
		
		return 0;	
}

