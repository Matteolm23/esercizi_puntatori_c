#include<stdio.h>
#include"contaspazi.h"

int main(void)
{
    char string[200];
    size_t spazi;

    printf("scrivi quello che vuoi(massimo 200 caratteri):\n");
    fgets(string,200,stdin);

    spazi = contaspazi(string);

    if (spazi != 1)
        printf("\nla stringa che hai inserito contiene %lu spazi\n\n", spazi);
    else
        printf("\nla stringa che hai inserito contiene 1 spazio\n\n");

    return 0;
}