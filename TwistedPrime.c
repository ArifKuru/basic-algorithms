#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number){
	if(number==1){
		return false;
	}
	int possibleFactor = 2;
	while(possibleFactor<number){
		if(number%possibleFactor == 0){
			return false;
		}
		else {
			possibleFactor++;
		}
	}
	return true;
}
int reverse(int number){
	int i;
	int temporaryHolder;
	int reverseNumber=0;
	int orgNumber = number;
	int numberOfDigits = 0;
	int digitCounter=1;
	while(number>1){
	number/=10;
	numberOfDigits++;
	}
	while (digitCounter!=numberOfDigits){
		temporaryHolder = orgNumber%10;
		orgNumber/=10;
		for(i=numberOfDigits-digitCounter;i>0;i--){
			temporaryHolder*=10;
		}
		reverseNumber+=temporaryHolder;
		digitCounter++;
	}
	
	return reverseNumber+orgNumber;
}

int main() {
int number;
while(1){
printf("%s","Please input a number : ");
scanf("%d",&number);
if(number==-1){
	break;
}
if( isPrime(number) == 1 && isPrime( reverse(number) ) == 1){
	printf("\nYour number %d is a twisted prime number\n", number);
}
else {
		printf("\nYour number %d is not a twisted prime number\n",number );

}
};

}
