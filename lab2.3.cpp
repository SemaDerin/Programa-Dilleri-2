//Main fonksiyonu i�erisinde verilen say�n�n basamaklar�n� toplam�n� rek�rsif bir fonksiyon kullanarak bulunuz.
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
