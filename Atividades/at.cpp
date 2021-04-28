#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float nota1, nota2, media;

	setlocale(LC_ALL,"Portuguese");

	printf("Digite nota1: ");
	scanf("%f",&nota1);
	
	printf("Digite nota2: ");
	scanf("%f",&nota2);	
	
	media = (nota1+nota2)/2;
	/*
	se aluno tirar de 0 a menor 5 --> reprovado
	se tirar de 5 a menor que 6 --> recuperacao
	se tirar nota maior ou igual a 6 --> aprovado
	*/
	printf("A média do aluno é: %.2f. Bons estudos!!!\n\n",media);
	
	if (media < 5)
	{
		printf("Aluno reprovado");
	}
	else
	{ 
	//	if (media>=5 && media<6)
		if (media<6)
		{
			printf("Aluno em recuperacao");
		}
		else
		{
			printf("Aluno aprovado");
		}
	}
	
	return 0;
}

