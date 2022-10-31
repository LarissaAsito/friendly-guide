#include <stdio.h> 		// biblioteca padrão da linguagem C.
#include <stdlib.h>	   // Necessário para a função random
#include <time.h>     // Necessario para "time" da função random

int main () {
	
	int palpite, tentativa, sorteado;
	
	srand( (unsigned)time(NULL) ); 			// srand é responsável por, cada vez que abrir o programa, garantir que o numero sorteado seja diferente do sorteado anteriormente.
	sorteado = rand()%100;				   // a Função rand irá sortear aleatoriamente um número entre 0 e 100 e armazenará na variável "sorteado"
	

	printf ("\n                     USP - UNIVERSIDADE DE SAO PAULO");
	printf ("\n                     INFORMATICA BIOMEDICA - 2020.1");
	printf ("\n\n------------------------- ADIVINHACOES -------------------------");
	printf ("\nTente adivinhar o numero sorteado pelo computador.");
	printf ("\nNumero sorteado entre 0 e 100.");
	
		printf ("\n\nDigite algum numero: ");
		scanf ("%d", &palpite); 			// Solicita palpite inicial do usuario
		tentativa = 1; 					   // Atribuimos o valor inicial 1 para a variável TENTATIVA para representar a primeira tentativa de acertar o numero sorteado.
	do { 								  // do-while foi utilizado para repetir toda a estrutura do programa para que o usuário continue tentando adivinhar o numero
		if ( palpite > sorteado ) {
			printf ("\nO numero sorteado e MENOR que %d", palpite);
			printf ("\nTente novamente: ");
			scanf ("%d", &palpite);
			tentativa ++;				 // Soma +1 para cada tentativa de acertar o numero
		} else if (palpite < sorteado) {
			printf ("\nO numero sorteado e MAIOR que %d", palpite);
			printf ("\nTente novamente: ");
			scanf ("%d", &palpite);
			tentativa ++; 				// Soma +1 para cada tentativa de acertar o numero
		} else {
			printf ("\nPARABENS, VOCE ACERTOU O NUMERO!!");
			printf ("\nSeu numero de tentativas foi: %d", tentativa);
			printf ("\nO numero sorteado foi %d \n", sorteado);
			system ("pause");
			break;						 // Finaliza o programa
		}
	} while (tentativa);
}



