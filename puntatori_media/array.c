#include<stdio.h>
extern double calcolomedia(double *a, size_t dim)
{
    int i;
    double somma = 0;

    for(i = 0; i < dim; i++)
        somma += a[i];

    return somma/dim;
}