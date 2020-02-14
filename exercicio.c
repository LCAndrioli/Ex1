#include <time.h>
#include <stdio.h>
#include <windows.h>

int valor[6]; 

void megasena();
void pegavalor();
void comparar();

int main(){
	int a;
	
	megasena();
    pegavalor();
    comparar();
    
    return 0;
}
// imprime mega sena
void megasena(){
	int a, b, cont=1;
	printf("\n");
    for(a=0;a<6;a++){
    	printf("\t\t");
        for(b=0;b<10;b++){
            if(cont < 10){
                printf("0%i ",cont);
            }
            else{
            	printf("%i ",cont);
			}
			cont++;
        }
       printf("\n");
    }
    printf("\n");
}

void pegavalor(){
	int a;
    printf("\t\tEscolha seis numeros:\n\t\t> ");
    for(a=0;a<6;a++){
    	scanf(" %i", &valor[a]);
	}
}

void comparar(){
	srand(time(NULL));
	int a, b, resultados[6], acertos = 0;
	for(a=0;a<6;a++){
		resultados[a] = rand()%60;
	}
	for(a=0;a<6;a++){
		for(b=0;b<6;b++){
			if(valor[a]==resultados[b]){
				acertos++;
			}	
		}
	}
	printf("\n\t\tResultado: ");
	for(a=0;a<6;a++){
		printf("%i ", resultados[a]);
	}
	printf("\n\t\tAcertou %i", acertos);
	
}
