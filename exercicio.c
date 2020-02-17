#include <time.h>
#include <stdio.h>

int valor[6], resultados[6]; 

void megasena();
void pegavalor();
void sortear();
void comparar();
void organizar();

int main(){
	int a;
	
	megasena();
    pegavalor();
    sortear();
    organizar();
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
    printf("\t\tEscolha seis numeros acima:\n\t\t");
    for(a=0;a<6;a++){
    	printf("numero %i: ", a+1);
    	scanf(" %i", &valor[a]);
    	if(valor[a]<1||valor[a]>60){
    		printf("\n\tValor incorreto. Digite novamente o ");
    		a--;
		}else{
			printf("\n\t\t");
		}
		
	}
}

void sortear(){
	srand(time(NULL));
	int a;
	for(a=0;a<6;a++){
		resultados[a] = rand()%60;
	}
}

void organizar(){
	int a, b, m, aux;
	for(a=0;a<5;a++){
		m = a;
		for(b=a+1;b<6;b++){
			if(valor[m] > valor[b]){
				m = b;
			} 
		}
		aux = valor[a];
		valor[a] = valor[m];
		valor[m] = aux;
	}
	for(a=0;a<5;a++){
		m = a;
		for(b=a+1;b<6;b++){
			if(resultados[m] > resultados[b]){
				m = b;
			} 
		}
		aux = resultados[a];
		resultados[a] = resultados[m];
		resultados[m] = aux;
	}
}
    
void comparar(){
	int a, b, acertos = 0;
	for(a=0;a<6;a++){
		for(b=0;b<6;b++){
			if(valor[a]==resultados[b]){
				acertos++;
			}	
		}
	}
	printf("\n\t\tNumeros jogados: ");
	for(a=0;a<6;a++){
		printf("%i ", valor[a]);
	}
	printf("\n\t\tResultado: ");
	for(a=0;a<6;a++){
		printf("%i ", resultados[a]);
	}
	printf("\n\t\tAcertou %i. ", acertos);
	switch(acertos){
		case 0:printf("");break;
		case 1:printf("");break;
		case 2:printf("");break;
		case 3:printf("");break;
		case 4:printf("Quadra");break;
		case 5:printf("Quina");break;
		case 6:printf("Sena");break;
		default:printf("\n\n\t\tAlgo deu errado.\n");
	}
}
