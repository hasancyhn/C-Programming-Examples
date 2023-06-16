#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, ogrencinin_vizesi[10], ogrencinin_finali[10], aanotu=0, bbnotu=0, ccnotu=0, ddnotu=0, ffnotu=0;
	float ortalama[10];
	
	for(i=0; i<10; i++){
		printf("%d. Ogrencinin Vizesi:",i+1); scanf("%d",&ogrencinin_vizesi[i]);
		printf("%d. Ogrencinin Finali:",i+1); scanf("%d",&ogrencinin_finali[i]);
		ortalama[i]=(ogrencinin_finali[i]*0.4)+(ogrencinin_vizesi[i]*0.6);
		
		if (ortalama[i]>90 && ortalama[i]<=100){
			aanotu++;
		}
		else if (ortalama[i]>70 && ortalama[i]<90){
			bbnotu++;
		}
		else if (ortalama[i]>59 && ortalama[i]<70){
			ccnotu++;
		}
		else if (ortalama[i]>30 && ortalama[i]<50){
			ddnotu++;
		}
		else{
			ffnotu++;
		}
	}
	printf("%lf",ortalama);
	printf("\n***************\n");
	printf("%d Adet AA\n",aanotu);
	printf("%d Adet BB\n",bbnotu);
	printf("%d Adet CC\n",ccnotu);
	printf("%d Adet DD\n",ddnotu);
	printf("%d Adet FF",ffnotu);
	return 0;
}
