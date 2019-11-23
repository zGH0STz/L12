/*21.c
Programmas autors: Elvijs buls
Prg.veidota 2019 gada 23 novembri
Versija:0.0.1
Programma paraada iespeejamo datu tipa paarpluudi*/

#include<stdio.h>
#include<limits.h>

int main()
{
long a = 50000;   //50 ,000
long b = 1000000; //1 ,000 ,000
long c = a * b;   //kaads ir sagaidaamais rezultaats?

printf("int datu tipa izmers ir: %ld baiti \n", c );
printf("Apreekjinam a un b reizinaajumu: \n");
printf("a=%ld , b=%ld \n", a, b);
printf("c=a*b=%ld*%ld=%ld\n", a,b,c ); // rezultaats uz ekrana?


/* Apreinins parsniedz datu daudzumu un izdeva nepareizu iznakumu labojums ar datu tipu maina no int us long  */
}
