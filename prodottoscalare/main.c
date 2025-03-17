#include<stdio.h>
#include"vettori.h"
#define N 5

int i;

int main()
{
    double x[N], y[N];
    double ps = prodscalare(x,y,N);
    srand(time(NULL));

    for(i = 0; i < N; i++)
    {
        x[i] = rand() % 10;
        y[i] = rand() % 10;
        printf("x: %.1f   y:%.1f\n", x[i], y[i]);
    }

    printf("\n<x,y>\n");
    for(i = 0; i < N; i++);
        printf("%.1f\n", x[i] * y[i]);

    printf("\nprodotto scalare: %f\n", ps);

}