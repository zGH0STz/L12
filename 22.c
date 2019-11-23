/*22.c2Programmas autors: Elvijs buls
Prg.veidota 2019 gada 23 Novembri
Versija:0.0.1
Programma cikliskam robezhas e apreekjinam */

#include<stdio.h>
#include<math.h>

int main()
{
  int k;         //cikla mainigais
  double lim;    //robezhas mainigaa defineeshana

  for(k=1; k<=50; k++ )
  {
    lim = pow((1+1./k),k);
    printf("k=%d lim=%f\n", k, lim);
  }
 /* eapreikinot ar katru nakamo mainigo robeza tiecas uz 3 bezgaliga cikla*/
}
