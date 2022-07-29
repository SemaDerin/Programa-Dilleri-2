//Main fonksiyonu içerisinde verilen sayýnýn basamaklarýný toplamýný rekürsif bir fonksiyon kullanarak bulunuz.
#include<stdio.h>	

int toplam (int sayi){
if (sayi != 0){
return (sayi % 10 + toplam (sayi / 10));
}
else{
return 0;
}
}
int main(){
int sayi, result;
printf("sayi giriniz: ");
scanf("%d", &sayi);
result = toplam(sayi);
printf("giridiginiz sayi:  %d basamak toplami : %d\n", sayi, result);
return 0;
}
