/*201.c2Programmas autors: Elvijs buls
Prg.veidota 2019 gada 23 Novembri
Versija:0.0.1*/

#include <stdio.h>
#include <math.h>

void f61()
{
 printf("lenļi ludzu :\n");
}

void f62()
{
printf("Kaads ir Tavs vecums?\n");
}

void f63()
{
printf("Kaads ir Tavs vecums?\n");
}

int main()
{
  int lenkis ;
  float radians;

  f61();
  scanf("%d", &lenkis);
  
  radians = ((lenkis*M_PI)/180);

  printf("Tavs lenķis: %d \n",lenkis);
  printf("Radianos ir: %f \n",radians);

}

