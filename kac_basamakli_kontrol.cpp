#include <stdio.h>
#include <stdlib.h>
//önemli
int main(){
	
	long int sayi,basamak=0;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
//sayi 1923
	while(sayi>0)
	{
	 basamak++; //bölüme bakıyoruz.
	 sayi=sayi/10; //sayi 192 oldu basamak 1 oldu. sayi 19 oldu basamak 2 oldu. sayi 1 oldu basamak 3 oldu. sayi 0 oldu basamak 4 oldu.
	}
printf("Sayiniz %d basamaklidir.", basamak);
	
return 0;	
}
