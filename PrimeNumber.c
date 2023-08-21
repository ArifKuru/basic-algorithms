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

int main() {
int number;
while(1){
printf("%s","Please input a number : ");
scanf("%d",&number);
if(number==-1){
	break;
}
number++;
while(isPrime(number)==0){
	number++;
}
printf("\n%d is a smallest prime number that greater then your number\n",number);
};

}
