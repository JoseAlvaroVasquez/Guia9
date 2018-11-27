#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int info;
	struct nodo *sig;
};

struct nodo	*raiz = NULL;



void ingresar(int x){ 
struct nodo *nuevo;
	nuevo = malloc(sizeof(struct nodo));
	nuevo->info = x;
	if(raiz	== NULL){
		raiz = nuevo;
		nuevo->sig = NULL;
	}
	else{
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void reemplazar(struct nodo *pila, int viejo, int nuevo){ 
	if(pila!= NULL){ 
		if(pila->info == viejo){ 
			pila->info = nuevo; 
		}
		else{
			reemplazar(pila->sig,viejo,nuevo); 
		}
	}
	else{
		printf("No hay valores iguales\n");
	}
}

void imprimir(){ 
	struct nodo *reco=raiz;
	printf("Lista :\n");
	while(reco!=NULL){
		printf("%i ",reco->info);
		reco=reco->sig;
	}
	printf("\n");
}

void estaVacia(){
	if(raiz == NULL){
		printf("pila  vacia\n");
	}else{
		printf("pila no vacia\n");
	}
}
    
int main(){
	ingresar(12);
	ingresar(71);
	ingresar(43);
	imprimir();
	printf("Reemplazando dato contenido en la pila.\n");
	reemplazar(raiz,10,15);
	imprimir();
	system("pause"); 
	return 0;
}


