#include <stdio.h>
#include <math.h>

void heapify (int vetor[], int n, int i);
void buildheap (int vetor[], int n);
void heapsort (int vetor[], int n);
//int pai (int i);
int filhodir (int i); //indice filho direito
int filhoesq (int i); //indice filho esquerdo
void troca (int vetor[], int i, int imaior); //troca elementos de lugar

void main()
{
	int vetor[10],i,n;
	
	printf("Digite a quantidade de elementos: ");
	scanf("%d",&n);
	
	printf("\nDigite os elementos: ");
	for (i=1;i<n+1;i++)
		scanf("%d",&vetor[i]);
	
	heapsort(vetor,n); //chama a funcao de ordenacao
	
	printf("\nVetor ordenado pelo heapsort: ");
	for (i=1;i<n+1;i++)
		printf("[%d]  ",vetor[i]);
	printf("\n\n");
}

void troca (int vetor[], int i, int imaior) //troca os valores de lugar
{
	int aux;
	aux=vetor[i];
	vetor[i]=vetor[imaior];
	vetor[imaior]=aux;
}

void heapify (int vetor[], int n, int i)
{
	int esq, dir, maior;
	esq=filhoesq(i);
	dir=filhodir(i);
	
	if ((esq<=n) && (vetor[esq]>vetor[i]))
		maior=esq;
	else
		maior=i;
		
	if ((dir<=n) && (vetor[dir]>vetor[maior]))
		maior=dir;
		
	if (maior != i)
	{
		troca(vetor,i,maior);
		heapify(vetor,n,maior);
	}
	return;
}

void buildheap (int vetor[], int n)
{
	int i;
	for (i=floor(n/2);i>0;i--)
		heapify(vetor,n,i);
}

void heapsort (int vetor[], int n)
{
	int i;
	buildheap(vetor,n);
	for(i=n; i>1; i--)
	{
		troca(vetor,i,1);
		n--;
		heapify(vetor,n,1);
	}
}

/*int pai (int i) //indice pai
{
	return(floor(i/2));
}*/

int filhodir (int i) //indice filho direito
{
	return(2*i+1);
}

int filhoesq (int i) //indice filho esquerdo
{
	return(2*i);
}
