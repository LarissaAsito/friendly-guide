#include<stdio.h>
main(){
	int v1[5],v2[5], v3[10], i,j, aux;
	
	printf("Entre com 5 digitos:\n");
	for(i=0; i<5; i++){
		printf("%dº :", i+1);
		scanf("%d", &v1[i]);					
	}
	printf("\nEntre com mais 5 digitos:\n");
	for(i=0; i<5; i++){
		printf("%dº :", i+1);
		scanf("%d", &v2[i]);					
	}
	//ordenando o primeiro
	for(j=0; j<5; j++)
		for(i=0; i<4; i++){// bubble só troca os dois termos
			if(v1[i]>v1[i+1]){
				aux = v1[i];
				v1[i] = v1[i+1];
				v1[i+1] = aux;
			}			
		}
		//ordenando o segundo
	for(j=0; j<5; j++)
		for(i=0; i<4; i++){// bubble só troca os dois termos
			if(v2[i]>v2[i+1]){
				aux = v2[i];
				v2[i] = v2[i+1];
				v2[i+1] = aux;
			}			
		}
	aux=2;	
	j=0;//posicao dos vetores menores
	//intercalando
	for(i=0;i<10;i++){
		if(aux%2==0){//par
			v3[i] = v1[j];
			aux++;
		}else{//impar
			v3[i] = v2[j];
			aux++;
			j++;
		}
	}
	printf("\nO vetor resultante eh:");
	for(i=0;i<10;i++){
		printf("%d", v3[i]);
	}
}
