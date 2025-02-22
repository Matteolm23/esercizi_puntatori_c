#include<stdio.h>
size_t contaspazi(const char *s)
{
    int i;
    size_t c = 0;
    
    for(i = 0; i < 200; i++)
        if (s[i] == 32)
            c++;

    return c;
}