#include <stdio.h>

int isPerfectNumber (int so){
	int tong = 1;
	int i=2;
	for (i; i*i<=so; i++){
		if (so%i==0){
			tong = tong+i;
			if (i*i!=so){
				tong=tong+(so/i);
			}
		}
	}
	return (tong==so);
}

int main(){
	int n;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	if(n>0){
		if(isPerfectNumber(n)){
			printf ("%d is a perfect number.\n", n);
		} else {
			printf ("%d is not a perfect number.\n", n);
		}
	} else {
		printf("Invalid!!!");
	}
	
	return 0;
}
