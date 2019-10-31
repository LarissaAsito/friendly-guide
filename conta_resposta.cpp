#include<stdio.h>
main(){
	char gabarito[10];
	char alternativas[10];	
	int matricula, i, j, cont_nota, cont_aprovado;
	float porcentagem=0;
	cont_nota=0;
	cont_aprovado=0;
	printf("Entre com o gabarito da prova:\n");
	for(i=0; i<10; i++){
		printf("%d° questao:", i+1);
		scanf("%c", &gabarito[i]);
		fflush(stdin); //limpeza de buffer
	}
	for(i=0; i<15; i++){
		//entrada de dados
		printf("\n\n\nDados do %d aluno\n", i+1);
		printf("Numero:");
		scanf("%d", &matricula);
		printf("\nRespostas: \n");
		fflush(stdin);
		for(j=0; j<10; j++){
			printf(" %d° questao: ", j+1);
			scanf("%c", &alternativas[j]);
			fflush(stdin);
		}		
		//comparacao com o gabarito
		for(j=0; j<10; j++){
			if(gabarito[j]==alternativas[j])
				cont_nota++;			
		}
		printf("A nota do %d° aluno foi: %d.", i+1, cont_nota);
		if(cont_nota >= 6){
			 cont_aprovado++;
		}
		cont_nota=0;
	}
	porcentagem = (cont_aprovado/15) * 100;
	
	printf("A porcentagem de alunos aprovados foi de : %3.2f", porcentagem);
}
