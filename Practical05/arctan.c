// Library Imports
#include <stdio.h>
#include <math.h>

// Function Definitions
double arctanh1(const double x, const double delta);

double arctanh2(const double x);


// Main
int main (){

	// Declaration of variables
	double delta, x;


	// User input for Maclaurin Series Precision
	printf("Enter a precision for the Maclaurin Series\n");
	scanf("%lf", &delta);

	int length = 1000;

	double tan1[length]; // Store the result of arctanh1 for each x

	double tan2[length]; // Store the result of arctanh2 for wach x

	int j = 0; // Array index

	x = -0.9;

	// While loop used to calculate the values of Tan by two seperate methods.

	while(x <= 0.9 && j < length){
		
		tan1[j] = arctanh1(x,delta);
		tan2[j] = arctanh2(x);

		printf("The difference at x = %lf between them is %.10lf\n", x, fabs(tan1[j] - tan2[j]));
		

		j++;
		x = x + 0.1;	// Can try with any stepsize in x
	
	}


	return 0;

}





double arctanh1(const double x, const double delta){

	double arcTan = 0;	// Aproximated Result

	double elem, val;

	int n = 0; // Sum Parameter

	do{

		val = 2*n+1;
		elem = pow(x, val)/val;
		arcTan += elem;
		n++;

	} while(fabs(elem) >= delta);


	return arcTan;
}


double arctanh2(const double x){
	return ((log(1+x) - log(1-x))/2); // Given in question
}
