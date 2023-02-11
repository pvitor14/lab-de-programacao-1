// Ler o peso e altura de uma pessoa.
// Calcular e mostrar o IMC de acordo com a faixa que a pessoa se enquadra na tabela.
// Peso/altura*altura
// setlocale.h é para lingua portuguesa (acentuação)

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main ()
{ 
	setlocale (LC_ALL, "");
	float peso, altura, imc;

 	printf ("Coloque aqui seu peso atual");
	scanf ("%f", &peso);
	
	printf ("Coloque aqui sua altura atual");
	scanf ("%f", &altura);

	imc = peso/(altura*altura);
	printf ("%f \n", imc);
	
	if (imc<18.5) 
		printf ("Voce esta abaixo do peso");
	else if (imc>18.5 && imc<25)
		printf ("Voce esta no peso normal");
	else if (imc>=25 && imc<30)
		printf ("Voce esta com sobrepeso");	
	else if (imc>=30 && imc<35)
		printf ("Voce esta com obesidade grau 1");
	else if (imc>=35 && imc<40)
		printf ("Voce esta com obesidade grau 2");
	else  
		printf ("Voce esta com obesidade grau 3");

	system ("pause");
 }
