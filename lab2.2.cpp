//Girilen dizideki en b�y�k eleman� bulan program� C dilinde Rek�rsif olarak yaz�n�z.


#include<stdio.h>
int fonk(int arr[], int n){
int x;
if (n == 1)
return arr[0]; 
else
x = fonk(arr, n - 1);
if (x > arr[n - 1])
return x;
else
return arr[n - 1];
}
int main(){

int arr[] = { 141, 150, 3045, 50, 100 };
printf(" %d ", fonk(arr, 5));
getchar();
return 0;
}
