#include <stdio.h>
#include <stdlib.h>
//basamaklarýn toplamý bulan.
int main(){
int sayi,toplam=0;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
		while(sayi>0)
	{
	    toplam+=sayi%10; //toplama son basamaðý dahil ettik.
		sayi=sayi/10; //aldýðýmýz kýsmý çýkarýyoruz 10 bölüp.
	}
	
	printf("Sayinizin basamak sayilarinin toplami %d'dir.",toplam);
	
	return 0;
}
