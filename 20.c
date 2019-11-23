/*20.cProgramma ar datu izvadi(data out)
Programmas autors:Elvijs , buls
Prg.veidota: 2019gada 23 novembri
Versija:0.0.1
Programma mani iztaujaa un veic apreekjinus lietojot user-funkctions*/

#include <stdio.h>

void f61() /* void datu tips noziimee,
            ka funkcija NEKO neatgriezh
            (kaa procedure in PASCAL)*/
{
printf("Sveiks ,kaa Tevi sauc?\t");
}
void f62()
{
printf("Kaads ir Tavs vecums?\n");
}
void f63()
{
printf("Cik liels Tu esi augumaa\n\t?(Augumsmetros):");
}

int main()
{
 char vards[20]; //Simboluvirkne-masiivs.(20simboli)
 int vecums;
 float augums;

 f61();//tiekizsauktaf-jaf61
 scanf("%s", vards);//skaneesimboluvirkni(string)
 f62();//tiekizsauktaf-jaf62
 scanf("%d", &vecums);//Esiveeriigsarampersandaziimi!
 f63();//tiekizsauktaf-jaf63
 scanf("%f", &augums);//Decimaalatdaliitaajsirpunktasimbols:"."
 printf("Mans Vardsir:%s\n", vards );
 printf("Esmu: %d gadus jauns %d.gada produkts\n", vecums , 2019-vecums);
 printf("Garumaa esmu padevies: %f cm\n",   augums*100 );
 /*Ielasa vertibas un izdara operacijas lai izdotu rezultatus  */
}
