//Main fonksiyonu içerisinde verilen iki pozitif sayýyý kullanarak bu sayýlarýn en büyük ortak bölenini rekürsif
//bir fonksiyon kullanarak bulunuz.


#include<stdio.h>


  
  
  int kalan(int x,int y){ 
   
      int kalan_sonuc=x%y; 
   
          return kalan_sonuc; 
  } 
   
   
  int ebob(int x, int y){ 
   
  if(y==0){ 
      return 1; 
      } 
  if(y>0){ 
      return ebob(y,kalan(x,y)); 
      } 
  } 
   
   
  int main(){ 
   
  int sayi1,sayi2,sonuc; 
  printf("sayi girin: "); 
  scanf("%d",&sayi1); 
  printf("sayi girin: "); 
  scanf("%d",&sayi2); 
   
  sonuc=ebob(sayi1,sayi2); 
  printf("%d\n",sonuc); 
   
  return 0; 
  } 
