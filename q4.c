#include<stdio.h>

void veSquare(int rong){
	int i=0;
	for (i; i<rong; i++){
		int j=0;
		for (j; j<rong; j++){
			printf("*	");
		}
		printf("\n");
	}
}

int main(){
	int rong;
	printf ("Square: Input n: ");
	scanf ("%d", &rong);

	veSquare(rong);
	return 0; 
}
