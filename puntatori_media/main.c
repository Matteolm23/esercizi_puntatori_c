#include<stdio.h>
#include"array.h"

int i;

int main(void)
{
    size_t dim = 0;

    printf("inserisci la dimensione dell'array: ");
    scanf("%lu", &dim);

    double a[dim], media = 0;

    for(i = 0; i < dim; i++)
    {
        printf("inserisci il %do elemento dell'array: ", i+1);
        scanf("%lf", &a[i]);
    }

    printf("\nARRAY DI VALORI:\n");
    for(i = 0; i < dim; i++)
        printf("%.2lf\t", a[i]);

    media = calcolomedia(a, dim);
    printf("\n\nMEDIA DEI VALORI: %.2lf\n\n", media);

    return 0;
}