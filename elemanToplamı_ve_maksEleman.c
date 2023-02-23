#include <stdio.h>
#include <stdlib.h>
/*Elemanlarý kullanýcýdan alýnan 5 boyutlu bir dizinin elemanlarý toplamýný ve en büyük elemanýný bulan C programýný yazýnýz.
*/
int main(){
	int liste [5];
	int i;
	for(i=0;i<5;i++){	
	printf("%d. sayiyi giriniz:",i+1);
	scanf("%d",& liste[i]);
	}
	int toplam=0;
		for(i=0;i<5;i++){
	    toplam += liste [i];}
	  int enbuyuk=liste [0];
	  for (i=0;i<5; i++){
	  	if (liste[i]>liste[0]){
	  		enbuyuk=liste [i];
		  }
	  }
	  printf("%d\n",toplam);
	  printf("en buyuk eleman: %d",enbuyuk);
	  
return 0;	
}
