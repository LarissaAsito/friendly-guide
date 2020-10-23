#include <stdio.h>/*stdio.h é um cabeçalho da biblioteca padrão do C*/
#include <math.h>/*math.h é um arquivo cabeçalho que fornece protótipos para funções, macros e definição de tipos da biblioteca padrão da linguagem de 
programação C para funções matemáticas básicas.*/
main()
{
	int n1, n2, n3, n4, n5, opcao, p1, p2, p3, p4, p5, pesos, maior, menor;   /*essas foram as variáveis utilizadas durante o programa*/
	float soma, media, x, y, z, w, t, A, B, C, D, E, d1, d2, desvio;
	
	printf("insira 5 numeros para realizar as operacoes. \n"); /*foi pedido que o usuário insira cinco números*/
	printf("Primeiro numero: ");
	scanf("%d", &n1);
	printf("Segundo numero: ");
	scanf("%d", &n2);
	printf("Terceiro numero: ");
	scanf("%d", &n3);
	printf("Quarto numero: ");
	scanf("%d", &n4);
	printf("Quinto numero: ");
	scanf("%d", &n5);
	

	
	printf("\n\n----------------MENU----------------\n");
	printf("\n\nAgora selecione a operacao matematica que deseja realizar: \n"); /*foi pedido para o usuário inserir uma das opções das operações matemáticas*/
	printf("1 - media aritmetica simples\n");
	printf("2 - media ponderada\n");
	printf("3 - desvio padrao\n");
	printf("4 - mostrar o maior valor\n");
	printf("5 - mostrar o menor valor\n");
	printf("6 - mostrar os valores inseridos\n\n");
	printf("opcao: ");
	scanf("%d", &opcao);
	
	switch (opcao) /*Switch/case é uma estrutura de condição que define o código a ser executado*/
	{
		case 1: /*média simples*/
			soma = n1+n2+n3+n4+n5;
			printf("o resultado da media aritmetica simples: %f \n", soma/5);
			system("pause"); /*usado para não deixar um teste fechar imediatamente*/
		break; /*usado para encerrar o programa*/
		
		case 2: /*média ponderada*/
			printf("primeiro valor digitado: %d", n1);    printf("   insira o peso: "); scanf("%d", &p1);
			printf("segundo valor digitado: %d", n2);     printf("   insira o peso: "); scanf("%d", &p2);
			printf("terceiro valor digitado: %d", n3);    printf("   insira o peso: "); scanf("%d", &p3);
			printf("quarto valor digitado: %d", n4);      printf("   insira o peso: "); scanf("%d", &p4);
			printf("quinto valor digitado: %d", n5);      printf("   insira o peso: "); scanf("%d", &p5);
			soma = n1*p1 + n2*p2 + n3*p3 + n4*p4 + n5*p5;
			pesos = p1 + p2 + p3 + p4 + p5;
			printf("o resultado da media ponderada: %f \n", soma/pesos);
			system("pause"); /*usado para não deixar um teste fechar imediatamente*/
		break; /*usado para encerrar o programa*/
		
		case 3: /*desvio padrão*/
			soma = n1 + n2 + n3 + n4 + n5;
			media= soma/5;
			x = n1 - media; 
			y = n2 - media;
			z = n3 - media;
			w = n4 - media;
			t = n5 - media;
			A = pow (x, 2);
			B = pow (y, 2);
			C = pow (z, 2);
			D = pow (w, 2);
			E = pow (t, 2);
			d1 = A + B + C + D + E;
			d2 = d1/5;
			desvio = sqrt (d2);
			printf("o resultado do desvio padrao: %f \n", desvio);
			system("pause");  /*usado para não deixar um teste fechar imediatamente*/
		break; /*usado para encerrar o programa*/
			
			
		case 4: /*maior valor*/
            maior = n1;
            menor = n1;
            if (n2 < menor)
                menor = n2;
            if (n2 > maior)
                maior = n2;
            if (n3 < menor)
                menor = n3;
            if (n3 > maior)
                maior = n3;
            if (n4 < menor)
                menor = n4;
            if (n4 > maior)
                maior = n4;
            if (n5 > maior)
                maior = n5;
            if (n5 > maior)
                maior = n5;
            printf ("O Maior valor digitado foi: %d \n", maior);
            system("pause"); /*usado para não deixar um teste fechar imediatamente*/
        break; /*usado para encerrar o programa*/

        case 5: /*menor valor*/
            maior = n1;
            menor = n1;
            if (n2 < menor)
                menor = n2;
            if (n2 > maior)
                maior = n2;
            if (n3 < menor)
                menor = n3;
            if (n3 > maior)
                maior = n3;
            if (n4 < menor)
                menor = n4;
            if (n4 > maior)
                maior = n4;
            if (n5 > maior)
                maior = n5;
            if (n5 > maior)
                maior = n5;
            printf ("O Menor valor digitado foi: %d \n", menor);
            system("pause"); /*usado para não deixar um teste fechar imediatamente*/
        break; /*usado para encerrar o programa*/
		case 6: 
			printf("mostrar os valores inseridos: \n %d\n %d\n %d\n %d\n %d\n", n1,n2,n3,n4,n5); 
			system("pause"); /*usado para não deixar um teste fechar imediatamente*/
        break; /*usado para encerrar o programa*/
		
	}
			
}
