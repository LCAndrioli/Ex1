#include <stdio.h>
#include <windows.h>

void megasena();

int main(){
	megasena();
    printf("\t\tEscolha seis numeros:\n\t\t> ");
    return 0;
}
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
