#include <stdlib.h>
#include <stdio.h>

int main()
{
    char * nom;
    int age;
    printf("quel est votre nom ?");
    scanf("%s", nom);
    printf("quel age avez vous ?");
    scanf("%d", &age);
    int year1 = 2026-age;
    int year2 = 2027-age;
    printf("bonjour %s vous êtes né soit en %d soit en %d",nom,year1,year2);

}