#include<stdio.h>
main(){
	int vetor1[5],vetor2[5], vetor3[10], i,j, aux;
	
	printf("Entre com 5 digitos:\n");
	for(i=0; i<5; i++){
		printf("%dº :", i+1);
		scanf("%d", &vetor1[i]);					
	}
	printf("\nEntre com mais 5 digitos:\n");
	for(i=0; i<5; i++){
		printf("%dº :", i+1);
		scanf("%d", &vetor2[i]);					
	}
	//ordenando o primeiro
	for(j=0; j<5; j++)
		for(i=0; i<4; i++){// bubble só troca os dois termos
			if(vetor1[i]>vetor1[i+1]){
				aux = vetor1[i];
				vetor1[i] = vetor1[i+1];
				vetor1[i+1] = aux;
			}			
		}
		//ordenando o segundo
	for(j=0; j<5; j++)
		for(i=0; i<4; i++){// bubble só troca os dois termos
			if(vetor2[i]>vetor2[i+1]){
				aux = vetor2[i];
				vetor2[i] = vetor2[i+1];
				vetor2[i+1] = aux;
			}			
		}
	aux=2;	
	j=0;//posicao dos vetores menores
	//intercalando
	for(i=0;i<10;i++){
		if(aux%2==0){//par
			vetor3[i] = vetor1[j];
			aux++;
		}else{//impar
			vetor3[i] = vetor2[j];
			aux++;
			j++;
		}
	}
	printf("\nO vetor resultante eh:");
	for(i=0;i<10;i++){
		printf("%d", vetor3[i]);
	}
}
