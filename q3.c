#include<stdio.h>

void veTriangle (int chieucao){
	int i=1;
	for (i; i<= chieucao; i++){
		int j=1;
		for (j; j<=chieucao-i; j++){
			printf(" ");
		}
		int k=1;
		for (k; k<=2*i-1; k++){
			printf("*");
		}
		printf("\n");
	}
}
 
int main(){
	int n;
	printf ("Triangle: Input n: ");
	scanf ("%d", &n);
	veTriangle(n);
	return 0;
}
