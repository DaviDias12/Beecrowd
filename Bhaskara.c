#include <stdio.h>
#include <math.h>
int  main()
{
	double A, B, C;
    double delta, x1, x2;

    printf("\n\n digite o primeiro valor");
    scanf("%f", &A);
     printf("\n\n digite o segundo valor");
    scanf("%f", &B);
     printf("\n\n digite o terceiro valor");
    scanf("%f", &C);

    delta = (B * B) - (4 * A * C);


    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        // Calcula as raízes
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);

        // Imprime as raízes com 5 dígitos após o ponto
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }

  return 0;

}