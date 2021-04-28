#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float ValorPassagem, Faturamento, clsvalor;
	int QntPassageiros, perg, Qntpassagencls;
	
	printf("Quanto Custou a Passagem?");
	scanf("%f",&ValorPassagem);
	
	printf("Qual a Quantidade de Passageiros?");
	scanf("%d",&QntPassageiros);
	
	printf("Teve venda da 1class? /n Se sim 1, para não qq pitro valor.");
	scanf("%d",&perg);
	
	if (perg == 1)
	{
		printf("Qunto custa a passagem da 1class?");
		scanf("%f",&clsvalor);
		
		printf("Quntas passagens?");
		scanf("%d",&Qntpassagencls);
	}
	
	Faturamento = (ValorPassagem * QntPassageiros) + (clsvalor * Qntpassagencls);	
	printf("O Faturamento da Azul Compani Aeria foi de:R$ %.2f", Faturamento);
	
	
	
	return 0;
}
