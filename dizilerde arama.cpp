#include <stdio.h>

      int main()
    {
 
        int array[20];
        int i, dusuk, orta, yuksek, key, boyut;
 
        printf("Dizinin boyutunu giriniz \n");
        scanf("%d", &boyut);
 
        printf("Dizini elemanlarýný giriniz\n");
        for (i = 0; i < boyut; i++) 
        {
            scanf("%d", &array[i]);
        }
 
        printf("Aranacak sayiyi giriniz \n");
        scanf("%d", &key);
 
     
        dusuk = 0;
        yuksek = (boyut - 1);
 
        while (dusuk <= yuksek) 
        {
            orta = (dusuk + yuksek) / 2;
 
            if (key == array[orta]) 
            {
                printf("Aradýgýnýz sayi dizide bulundu\n");
                
            }
 
            if (key < array[orta])
                yuksek = orta - 1;
 
            else
                dusuk = orta + 1;
 
        }
 
        printf("sayý yok\n");
 
    }
