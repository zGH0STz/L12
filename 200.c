/*200.c2Programmas autors: Elvijs buls
Prg.veidota 2019 gada 23 Novembri
Versija:0.0.1*/

#include <stdio.h>
#include <math.h>

int main()
{
 int a;
 int b;
 int c;
 
 a = 1; 

 for(a; a < 11; a++ )
 {
  for(b = 1; b < 12; b++ )
  {
   c = (a % b);
   printf("a = %d ,b = %d \n",a,b);
   printf("Atlikums: %d \n",c); 
   printf("\n");
  }
    
 
 }
 /* ar pirmo loop katrs skaitlis tiek dalits ar nakamo skaitli un atlikums tiek izvadits  */
}

