#include <stdio.h>
#include <stdlib.h>
struct OgrenciNot{
	int no;
	float vize[2];
	float quiz[2];
	float final;
};

int main(){
	struct OgrenciNot o1;
	printf("Ogrenci Nosu:")
	scanf("%d",&o1.no);
	printf("1. Vize Notu: ");
	scanf("%d",&o1.vize[0]);
	printf("2. Vize Notu: ");
	scanf("%d",&o1.vize[1]);
	
	printf("\n Yazdir");
	printf("Ogrenci Nosu: %d",o1.no);
	printf("1. Vize Notu: %d",o1.vize[0]);
	printf("2. Vize Notu: %d",o1.vize[1]);
 
 return 0;
}
