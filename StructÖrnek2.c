#include <stdio.h> //DÜZELTÝLECEK
#include <stdlib.h>
#define SIZE 3
struct Bp1Vize{
	int no;
	float vize;
};
float ortalamaBul (struct Bp1Vize Notlar[]);
int main(){
	//int liste [SIZE];
	struct Bp1Vize liste [SIZE];
	int i=0;
	float ortalama;
	while(liste[i].no!=liste[i+1].no){
		printf("\n%d. Ogrencinin Numarasi:",i+1);
		scanf("%d",&liste[i].no);
		printf("\n%d. Ogrencinin Vize notu:",i+1);
		scanf("%f",&liste[i].vize);	
		i++;
		if(i==SIZE){
			break;
		}
	}
	/*for(i=0;i<SIZE;i++){
		printf("\n%d. Ogrencinin Numarasi:",i+1);
		scanf("%d",&liste[i].no);
		printf("\n%d. Ogrencinin Vize notu:",i+1);
		scanf("%f",&liste[i].vize);	
	}*/
		/*if(liste[i].no==liste[i+1].no){
			printf("Ogrenci Nolari ayni olamaz!!");
		}*/
	ortalama=ortalamaBul(liste);
	printf("\nSinif ortalamasi: %f",ortalama);
	return 0;
}

float ortalamaBul (struct Bp1Vize notlar[]){ 
	int i;
	float toplam=0;
	for(i=0;i<SIZE;i++){
		toplam+=notlar[i].vize;
	}
	return toplam/SIZE;
}

