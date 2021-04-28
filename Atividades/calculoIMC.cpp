#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Calculando o ICM");
	
	float IMC, Peso, Altura;
	
	printf("Qual a sua Altura?");
	scanf("%f",&Altura);
	
	printf("Qual é o seu Peso?");
	scanf("%f",&Peso);
	
	IMC = Peso / (Altura*Altura);
	
	if (IMC < 18,5)
	{
		printf("ABAIXO DO PESO");
	}
	else {
	if (IMC >18,5 <25)
		printf("PESO NORMAL");
	}
	else {
	if (IMC >25 <30)
		printf("SOBRE PESO");
	}
	else 
	{
		if (IMC >30 <35)
	    printf("OBSIDADE GRAU 1");
	}	
	else {
	if (IMC >35 <40)
		printf("OBSIDADE GRAU 2");
	}
	else if {
	(IMC >=40)
		printf("OBSIDADE GRAU 3");
    } 
	return 0;
}
