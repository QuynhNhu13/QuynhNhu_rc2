#include<stdio.h>

int main(){
	int n;
	printf ("Input number or element: ");
	scanf ("%d", &n);
	
	if (n<=0){
		printf ("Invalid!!!"); 
		return 1;
	}
	int A[n];
    int demDuong = 0;
    int tongDuong = 0;
	int i=0;
	for (i; i<n; i++){
		printf("Input A[%d]= ", i);
		scanf("%d", &A[i]);
		if(A[i]>0){
			demDuong++;
			tongDuong=tongDuong+A[i];
		}
	}
	printf("\n------------------ DONE ------------------\n");
	printf("\n--- ELEMENT > 0 is:\n");
	int j=0;
	for (j;j<n;j++){
		if (A[j]>0){
			printf("A[%d] is %d\n", j, A[j]);
		}
	}
	printf("\n");
	if(demDuong>0){
		double trungBinhDuong=(double)tongDuong/demDuong;
		printf("Average of all element > 0: %.1lf\n", trungBinhDuong);
	} else {
		printf("Invalid!!!");
	}
}
