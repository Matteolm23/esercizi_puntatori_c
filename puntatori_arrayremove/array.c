#include<stdio.h>
extern void array_remove(double *a, size_t *dim, size_t pos)
{
    int i;

    for(i = pos-1; i < dim; i++)
        a[i] = a[i+1];
    
    *dim--;
}