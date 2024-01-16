#include<stdio.h>

int isPrimeNumber(int n){
	if (n<=1){
		return 0;
	}
	int i=2;
	for(i; i*i<=n; i++){
		if (n%i==0){
			return 0;
		}
	}
	return 1;	
}

int main(){
	int input;
	printf ("Input number to check: ");
	scanf ("%d", &input);
	
	if (isPrimeNumber(input)){
		printf("Valid!\n");
	} else {
		printf("Invalid!\n");
	}
	
	return 0;
} 
