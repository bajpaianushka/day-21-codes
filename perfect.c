#include <stdio.h>

int main() {
	int n = 6;
	int sum = 0;

	for(int i=1; i<n; i++){
		if(n % i == 0){
			sum = sum + i;
		}
	}
	if(sum == n)
		printf("Perfect number\n");
	else
		printf("Not perfect number\n");

	return 0;
}
