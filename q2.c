#include <stdio.h>

int isValidTime(int hours, int minutes){
	if (0<=hours && hours<=23 && 0<minutes && minutes<=59){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int inputhours, inputminutes;
	
	printf("Input time (hh mm) to check: ");
	scanf ("%d %d", &inputhours, &inputminutes);
	
	if(isValidTime(inputhours, inputminutes)){
		printf("Valid!");
	} else {
		printf("Invalid!");
	}
	
	return 0;
}
