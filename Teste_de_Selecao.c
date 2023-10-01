#include <stdio.h>
#include <math.h>

int  main()
{
	int A, B, C, D ;

	printf("\n\n Digite quatro valores inteiros ");
	printf("\nDigite o primeiro numero");
	scanf("%d",& A);
	printf("\nDigite o segundo numero");
	scanf("%d",& B);
	printf("\nDigite o terceiro numero");
	scanf("%d",& C);
	printf("\nDigite o quarto numero");
	scanf("%d",& D);

	if (B > C &&  D > A && C + D > A + B && C > 0 && D > 0 &&  A % 2 == 0  ) 

	printf("Valores aceitos\n");
    
    else 
    printf("Valores nao aceitos\n");
}