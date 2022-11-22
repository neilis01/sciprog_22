// Checks if a matrix is a magic square
// A magic square is an n sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(N^2 +1)/2.
// The functions takes as input a matrix 'sqaure' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic sqaure;
// Otherwise, outputs a non-zero value

int isMagicSquare(int ** square, const int n){

	//Eliminate the case where 'n' is negative
	if(n < 0) {
		return 0;
	 }
	
	int magic_num = 0;
	int off_diag_sum = 0;
	int i, j;
	
	// Checking that every row and column add up to M
	
	for(i = 0; i < n; i++) {
		
		magic_num += square[i][i];
		off_diag_sum += square[i][n-i-1];
	}

	if (off_diag_sum != magic_num){
		printf("The off Diag is not the same as the diag\n");
		return 0;
	}

	for (i = 0; i<n; i++){

		int rowSum = 0;
		int colSum = 0;

		for (j = 0; j<n; j++){
			rowSum += square[i][j];
			colSum += square[j][i];
		}
	
		if (rowSum != magic_num || colSum != magic_num){
			return 0;
		}

	}	
	
	// If passed all checks, it is a magic square
	
	return 1;
}
