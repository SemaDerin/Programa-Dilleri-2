#include <stdio.h>
 
int binary_conversion(int);
 
int main()
{
   int num, bin;
 
   printf("Onluk tabanda bir sayi giriniz: ");
   scanf("%d", &num);
   bin = binary_conversion(num);
   printf("girilen sayi %d nin binary karsiligi %d\n", num, bin);
}
 
int binary_conversion(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 2) + 10 * binary_conversion(num / 2);
    }
}
