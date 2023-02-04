#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// ZAR ATMA OYUNU
// zar min 1 max 6 olur(random üretilecek)
// klavyeden kaç kez zar atılacağı girilsin,döngü adet kadar çalışsın ve her çalıştığında üretilen her 2 zar sonucu ve kazanma/beraberlik durumu ekrana yazdırılsın
// en son oyunu kimin kazandığı ekrana yazdırılsın

int main()

{
 
 srand(time(0));
 char oyuncu1[30],oyuncu2[30];
 int i;
 int n; 
 int sayac1=0,sayac2=0,sayac3=0; // sayac1 oyuncu1'in galibiyet sayısı,sayac2 oyuncu2'nin galibiyet sayısı,sayac3 oyuncu1 ve oyuncu2'nin berabere kalma sayısı
 
 printf("1.oyuncunun adini ve soyadini girin: ");
 gets(oyuncu1);
 
 printf("2.oyuncunun adini ve soyadini girin: ");
 gets(oyuncu2);
 
 printf("kac defa zar atilsin?: ");
 scanf("%d",&n);
 
 for(i = 0 ; i < n ; i++)
 {
  int zar1 = 1 + rand()%6;
  int zar2 = 1 + rand()%6;
  
  printf("%d  %d\n",zar1,zar2);
  
  if(zar1 > zar2)
  {
   printf("%s kazandi\n",oyuncu1);
   sayac1++;
  }
  
  else if(zar2 > zar1)
  {
   printf("%s kazandi\n",oyuncu2);  
   sayac2++;
  }
  
  else
  {
   printf("%s ve %s berabere\n",oyuncu1,oyuncu2);  
   sayac3++;
  }
 }
 
 printf("\n%s %d kez kazandi\n",oyuncu1,sayac1);
 printf("\n%s %d kez kazandi\n",oyuncu2,sayac2);
 printf("\n%s ve %s %d kez berabere kaldi\n",oyuncu1,oyuncu2,sayac3);
 
 if(sayac1 > sayac2)
 {
  printf("\nOyunu %s kazandi\n",oyuncu1);
 }
 
 else if(sayac2 > sayac1)
 {
  printf("\nOyunu %s kazandi\n",oyuncu2);  
 }
 
 else
 {
  printf("\n%s ve %s berabere kaldi\n",oyuncu1,oyuncu2);
 }
 
 return 0;
 
}