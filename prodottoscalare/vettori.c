#include<stdio.h>
double prodscalare(double *x, double *y, size_t n)
{
    double prodotto = 0;
    for(int i = 0; i < n; i++)
        prodotto += x[i]*y[i];

    return prodotto;
}