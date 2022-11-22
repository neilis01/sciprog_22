/*
 * Find e using Taylor Expansion
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int factorial(int n);


int main(){

	int i , order;
	double e, *terms;

	// Enter the Polynomial Order
	

	printf("Please enter the required polynomial order\n");
	
	if (scanf("%d", &order) != 1){
		printf("You did not enter a number");
		return 1;
	}
	
	// Allocate space for terms array
	
	terms = malloc(order*sizeof(double));


	for (i = 0; i < order; i++){

		terms[i] = 1.0/((double)factorial(i+1));
		printf("\n e term for order %d is %1.14lf \n", order, terms[i]);	
	}

	e = 1.0;

	for(i=0; i<order; i++){
	
		e = e+terms[i];
	}

	free(terms);

	printf("\n e is estimated as %1.14lf. with difference %1.14lf. \n", e, e-exp(1.0));

	return 0;
	
}



int factorial(int n){

	if(n<0){
		printf("Error: this value should be positive");
		return(-1);
	}

	else if(n==0){
		return 1;
	}
	
	else{
		return (n*factorial(n-1));
	}


}