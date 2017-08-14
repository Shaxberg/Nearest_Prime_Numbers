#include <stdio.h>
#include <stdlib.h>

int isPrime(int myNumber){
	int i  = 2;
	while (i < myNumber){
		if (myNumber%i == 0){
			return 0;
		}
		i = i + 1;
	}
	return 1;
}

int findUpper(int myNumber){
	int num = myNumber % 2 ? myNumber + 2 : myNumber + 1;
	while (!isPrime(num)){
		num += 2;
	}
	return num;

}

int findLower(int myNumber){
	int i = 1;
	if (myNumber <= 2){
		printf("error: invalid number");
		return -1;
	}
	int num = myNumber % 2 ? myNumber - 2: myNumber - 1;
	while(!isPrime(num)){
		num -= 2;
	}

	return num;
}
int main(){
	// Objective: Return a number + prime above and prime below  if number is not prime.
	// Return "number is prime" if the number *is* prime.
	int myInt = 0;
	scanf("%d", &myInt);
	if (isPrime(myInt)){
		printf("%d is prime.\n", myInt);
	} else {
		printf("%d < %d < %d\n", findLower(myInt), myInt, findUpper(myInt));
	}

}