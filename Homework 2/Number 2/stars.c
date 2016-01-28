#include <stdio.h>
int main(void){
	int x, y, rows;
	printf("Enter the numbers of stars in the first row: ");
	scanf("%i",&rows);
	for(x = 0; x < rows; x++){
		for(y = rows; y > x; y--){
			printf("*");
		}
		printf("\n");
	}



	return 0;
}