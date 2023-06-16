#include <stdio.h>

int main() {
	int length, number=1, flag=0, i;
	 
	printf("Enter a number: ");  scanf("%d", &length); printf("\n");
	
    while(length!=number){
	    number++;
	    
	    for( i=2; i<=number/2; i++){	            	
            if(number%i == 0){               	
                flag = 1;
                break;
            }
        } 
    if(flag == 0){                	
       	printf("The number %d is prime.\n",number);
	}
	
    flag=0;
	}
	return 0;
}


