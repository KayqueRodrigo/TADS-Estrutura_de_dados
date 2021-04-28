#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Conta, Valordaconta, perg;
	int multa,QuantasPessoas;
	multa = 0;
	
	printf("Quanto Ficou a Conta No Bar?");
	scanf("%f",&Conta);
	
	printf("Quantos Vão Contribuir?");
	scanf("%f",&QuantasPessoas);
	
	printf("Tem multa, se sim digite 1, se não qq outro valor?");
	scanf("%f",&perg);
	
	if (perg == 1)
	{
		printf("Qual o valor?");
		scanf("%d",&multa);
    }
		
	Valordaconta = (multa + Conta) / QuantasPessoas;
    printf("Ficou, %f",  Valordaconta);

	return 0;
	
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>

//int main()
//{
//	setlocale(LC_ALL,"Portuguese");

//	int qtdepessoa;
//	float conta;
//	float rateio;
//	float multa;
//	int perg;
//	
//	multa=0;
//	printf("Digite quantidade de pessoas: ");
//	scanf("%d",&qtdepessoa);
//	
//	printf("Digite valor da conta R$ ");
//	scanf("%f",&conta);	
//	printf("Tem multa. Digite 1 para sim ou qq outro valor para nao: ");
//	scanf("%d",&perg);
//	if (perg==1)
//	{
//		printf("Digite valor da multa R$ ");
//		scanf("%f",&multa);			
//	}	
//	
//	rateio = (conta+multa) / qtdepessoa;
//		
//	printf("Cada um terá que pagar R$ %.2f.\n\n",rateio);	
//	
//	
//	return 0;
//}
