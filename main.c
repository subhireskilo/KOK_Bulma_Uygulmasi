/******************************************************************************
                           KOK BULMA UYGULAMASI
Bir denklemin reel koku olup olmadigini ve varsa reel koklerini yok ise imajiner
koklerini bulur.
*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
// Degisken Tanimlamalari
   int a,b,c;
   float diskiriminant;
   float kok1, kok2, imajiner;
// --- 1. Kullanicidan Girdi Alma Kismi ---
   printf("Lutfen (ax^2+bx+c) denklemdeki a b ve c katsayilarini giriniz:");
   scanf("%d%d%d", &a,&b,&c);
// --- 2. Diskriminant Hesaplama ---
    // Formül: Delta = b^2 - 4ac   
   diskiriminant=pow(b,2)-4*a*c;
   
   printf("Diskiriminant=%f\n", diskiriminant);

// --- 3. Kök Durumuna Göre Karar Verme ---
 
 // A. Durum: Diskriminant Pozitif (Delta > 0)  
   if(diskiriminant>0){
       printf("Denklemin birbirinden farkli iki reel kökü vardir\n");
       // Reel Kök Formülü: x1 = (-b + sqrt(Delta)) / 2a
	   kok1=(-b+sqrt(diskiriminant))/(2*a);
       kok2=(-b-sqrt(diskiriminant))/(2*a);
          printf("1.kok=%f  2.kok=%f", kok1,kok2);
   }
 // B. Durum: Diskriminant Negatif (Delta < 0)
   else if(diskiriminant<0){
       printf("Denklemin reel Kokleri yoktur.imajiner kokleri vardir\n");
       // Sanal Kök Formülü: x = [-b / (2a)] +/- [sqrt(-Delta) / (2a)] i
	   kok1=kok2=-b/(2*a);
       imajiner=sqrt(-diskiriminant)/(2*a);
        printf("1.kok=%f-%fi  2.kok=%f+%fi", kok1,imajiner,kok2,imajiner);
   }
 // C. Durum: Diskriminant Sifir (Delta = 0)
   else{
       printf("Denklemin tek bir reel kökü vardir.\n");
         // Tek Kök Formülü: x = -b / 2a
		 kok2=(-b)/(2*a);
         printf("kok=%f",kok2);
   }
   
   
   
    return 0;
}
