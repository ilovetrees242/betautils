#include <stdio.h>

void listFactors(int Num){
    printf("Factors are: ");
    for(int i = 1; i <= Num; i++){
    	if(Num % i == 0){
    		printf("%d ", i);
    	}
    }
    printf("\n");
}
