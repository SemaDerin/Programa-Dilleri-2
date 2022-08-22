#include <stdio.h>
int main()
{
   int* ab;
   int m;
   m = 17;
   
   printf("\n\n Pointer kullanimi:\n"); 
   printf(" ab = int pointer'i, int m = 17\n\n");
    
   printf(" m'nin adresi : %p\n",&m);
   printf(" m'nin degeri : %d\n\n",m);
   
   ab = &m;
   
   printf(" m'nin adresi ab'ye atandı.\n");
   printf(" ab'nin adresi : %p\n",ab);
   printf(" ab'nin icerigi : %d\n\n",*ab);
   
   m = 35;
   
   printf(" m'ye 35 degeri atandi.\n");
   printf(" ab'nin adresi : %p\n",ab);
   printf(" ab'nin icerigi : %d\n\n",*ab);
   
   *ab = 8;
   
   printf(" ab'nin isaret ettigi degiskenin degeri 8 olarak atandi.\n");
   printf(" m'nin adresi: %p\n",&m);//ab m'nin adresini icerdigi icin
                                     //m 'nin degeri 8 olarak degisti
   printf(" m'nin degeri : %d\n\n",m);
   return 0;
}
