#include <stdio.h>
#include <stdlib.h>
//basamaklar�n toplam� bulan.
int main(){
int sayi,toplam=0;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
		while(sayi>0)
	{
	    toplam+=sayi%10; //toplama son basama�� dahil ettik.
		sayi=sayi/10; //ald���m�z k�sm� ��kar�yoruz 10 b�l�p.
	}
	
	printf("Sayinizin basamak sayilarinin toplami %d'dir.",toplam);
	
	return 0;
}
