#include<stdio.h>
#define pi 3.1415
float volume(float rcubo)
{
	float volume=0.0;
	volume=(4.0/3.0)*pi*rcubo;
	return volume;
}
float rcubo(float raio){return raio*raio*raio;}
main()
{
	float raio,aux;
	printf("Raio: ");
	scanf("%f",&raio);
	printf("Volume: %.4f",volume(rcubo(raio)));	
}
