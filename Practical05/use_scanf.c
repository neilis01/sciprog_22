// Library imports
#include <stdio.h>
#include <math.h>

int main(){

	// Declaration of variables
	int i; double a; int ierr;
	
	// Enter information from user
	
	printf("Enter an int and double\n");
	ierr = scanf("%d %lf",&i,&a);

	// Error checking
	if (ierr != 2){
		printf("Problem with Input");
	}

	return 0;
}
