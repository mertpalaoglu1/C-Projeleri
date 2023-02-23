#include <stdio.h>
#include <stdlib.h>
void sifreOlusturma(int sifre_uzunlugu){
	srand(time(NULL));
	char sayilar[]="0123456789";
	char harfler[]="abcdefghijklmnoqprstuvwyzxABCDEFGHÝJKLMNOQPRSTUVWYZX";
	char sifre[sifre_uzunlugu];
	int sayac=0;
	sayac=rand()%2;
	printf("Sifreniz: ");
	int i;
	for (i=0;i<sifre_uzunlugu;i++){
		if(sayac==1){
			sifre[i]=sayilar[rand()%10];
			printf("%c",sifre[i]);
			sayac=rand()%2;
		}
		else{
			sifre[i]=harfler[rand()%56];
			printf("%c",sifre[i]);
			sayac=rand()%2;
		}
		
	}
}

int main(){
	int sifre_uzunlugu=10;
	sifreOlusturma(sifre_uzunlugu);
	return 0;
}
