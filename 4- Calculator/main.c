#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int secim1, secim2, taban, us, sayi3;
	float bolme, sayi1, toplam, cikarma, carpma, sayi2, karekok;
	
	printf("Dort Islem Icin --> 1\n");
	printf("Ozel Matematiksel Fonksiyonlar Icin --> 2\n\n");
	printf("Secim Yapiniz.");
    tekrarsecimyap: scanf("%d",&secim1); /*önemli*/
	
	switch (secim1)
	{
		case 1:
			{
				printf("Toplama Islemi Icin Lutfen 1'e Basiniz.\n"); 
	    		printf("Cikarma Islemi Icin Lutfen 2'e Basiniz.\n");
				printf("Carpma Islemi Icin Lutfen 3'e Basiniz.\n");
				printf("Bolme Islemi Icin Lutfen 4'e Basiniz.\n\n");
				printf("Lutfen Tekrar Secim Yapiniz:"); scanf("%d",&secim2);
				
				if (secim2==1){
					printf("Sayi1'i Girinz."); 		scanf("%f",&sayi1);
					printf("Sayi2'yi Giriniz."); 	scanf("%f",&sayi2);
					toplam=sayi1+sayi2;
					printf("Toplama Sonucunuz %.2f 'dir.",toplam);
				}
				else if (secim2==2){
					printf("Sayi1'i Giriniz."); 	scanf("%f",&sayi1);
					printf("Sayi2'yi Giriniz."); 	scanf("%f",&sayi2);
					cikarma=sayi1-sayi2;
					printf("Cikarma Sonucunuz %.2f'dir.",cikarma);		
				}
				else if (secim2==3){
					printf("Sayi1'i Giriniz."); 	scanf("%f",&sayi1);
					printf("Sayi2'yi Giriniz."); 	scanf("%f",&sayi2);
					carpma=sayi1*sayi2;
					printf("Carpma Islemi Sonucunuz %.2f'dir.",carpma);
				}
				else if (secim2==4){
					printf("Sayi1'i Giriniz."); 	scanf("%f",&sayi1);
					printf("Sayi2'yi Giriniz."); 	scanf("%f",&sayi2);
					bolme=sayi1/sayi2;
					printf("Bolme Islemi Sonucunuz %.2f'dir.",bolme);
				}
				else {
					printf("0 ve 4 Arasinda Bir Rakam Giriniz."); goto tekrarsecimyap;
				}
			}
		case 2:
			{
				printf("\nKarekok Islemi Icin 1'e Basiniz.\n");
				printf("Us Alma Islemi Icin 2'ye Basiniz.\n\n");
				printf("Secim Yapin:"); 			scanf("%d",&secim2);
				
				if (secim2==1){
					printf("Sayiyi Giriniz."); 		scanf("%d",&sayi3);
					printf("%d Sayisinin Karekoku = %f Sayisidir.",sayi3,sqrt(sayi3));
				}
				else if (secim2==2){
					printf("Taban Degerini Giriniz."); 		scanf("%d",&taban);
					printf("Us Degerini Giriniz."); 		scanf("%d",&us);
					printf("%d Ussu %d = %.2f Sayisidir.",taban,us,pow(taban,us));
				}
			}
	}
	return 0;
}
