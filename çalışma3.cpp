#include <stdio.h>

int topla(int sayi, int t){
    if(sayi <= 5){  
        t = t + sayi;
        topla (sayi+1,t);
    }
    else 
        return t; 
}

int main(){ 
    int toplam=0,sonuc;

    sonuc = topla(0,toplam); 
    printf("Sonuc : %d", sonuc);
   
}
