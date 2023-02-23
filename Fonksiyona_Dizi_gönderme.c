#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rastgeleSayi(int dizi2[],int boyut){
	int i;
	for (i=0;i<10;i++){
		dizi2[i]=rand()%10+1;
		printf("%d ",dizi2[i]);
	}
}
int ortalamaAl(int dizi2[],int boyut){
	//int dizi[10]; Olmamasý lazým yeni tanýmlamanýn zaten fonksiyonda kendi tanýmlý.
	int ortalama=0,i;
	int toplam=0;
	for (i=0;i<10;i++){
		toplam+=dizi2[i];
	}	
	ortalama=toplam/boyut;
	return ortalama;
}
int main(){
	srand(time(NULL));
	int dizi[10];
	int i;
	rastgeleSayi(dizi,10);
	int ortalama=0;
	ortalama=ortalamaAl(dizi,10);
	printf("\n ortalamasi :%d ",ortalama);
}
