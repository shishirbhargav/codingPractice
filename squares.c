#include <stdio.h>

int square(int num){
	printf("%d\n",num);
	// Base case
	if(num == 0) 
		return 0;
	
	// Divide num by 2 
	int n = num >> 1;

	// Call function depending on even or odd number
	if(num&1)
		return ((square(n)<<2) + (n<<2) + 1);
	else
		return (square(n)<<2);
}

int main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Square is %d\n", square(num));
}
