#include <stdio.h> 
#include <stdlib.h>
#define SIZE 3
typedef struct { //her seferinde deðiþken baþýna struct yazmamýza gerek yok.
	int no;
	float vize;
}Bp1Vize;

float ortalamaBul (Bp1Vize Notlar[]);
int main(){
	//int liste [SIZE];
	Bp1Vize liste [SIZE];
	int i;
	float ortalama;
	for(i=0;i<SIZE;i++){
		printf("\n%d. Ogrencinin Numarasi:",i+1);
		scanf("%d",&liste[i].no);
		printf("\n%d. Ogrencinin Vize notu:",i+1);
		scanf("%f",&liste[i].vize);	
	}
	ortalama=ortalamaBul(liste);
	printf("\nSinif ortalamasi: %f",ortalama);
	return 0;
}

float ortalamaBul (Bp1Vize notlar[]){
	int i;
	float toplam=0;
	for(i=0;i<SIZE;i++){
		toplam+=notlar[i].vize;
	}
	return toplam/SIZE;
}

