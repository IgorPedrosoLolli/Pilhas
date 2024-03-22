#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int num, aux_num;
	int *vet;
	int i = 0, j = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	vet = (int *) malloc(num*sizeof(int));
	
	do{
		aux_num = num % 2;
		vet[i] = aux_num;
		i++;
		num = num / 2;
				
	}while(num > 0);
	
	printf("\n");
	printf("Valor na Pilha com a leitura convertida!\n");
	
	for(j = i - 1; j >= 0; j--)
		printf("%d", vet[j]);
	
	free (vet);
		
	return 0;
}
