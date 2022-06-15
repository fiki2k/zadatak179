/*  Program treba izracunat : 1^2+2^2+3^2+4^2+....+N^2  */

#include<stdio.h>

int main()
{
    int i,N;
    unsigned long sum;

    printf("Unesi vrijednost N : ");
    scanf("%d",&N);

    sum=0;

    for(i=1;i<=N;i++)
        sum= sum+ (i*i);

   

    printf("\nKonacna suma je : [ %ld ]\n",sum);

    return 0;
}
