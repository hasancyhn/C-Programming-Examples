#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, taban;;
	
	printf("Taban Degerini Giriniz: ");	scanf("%d",&taban);
	
	for(i=1; i<=taban; i++){
		for (j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
