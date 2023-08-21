#include <stdio.h>
#include <stdbool.h>
//Composite number is non-prime number
//4 is smallest composite number


bool isComposite(int number){
	int possibleFactor = 2;
	while(possibleFactor<number){	
	    if(number%possibleFactor==0){
	    	return true;
		}
		possibleFactor++;
	}
	return false;
}

int main ( ) {
	int number;
	while(1){
	printf("%s","Please input a number : ");
	scanf("%d",&number);
	if(number==-1){
		break;
	}
	number++;
	while(isComposite(number)==0){
		number++;
	}
	
	printf("\n%d is a smaller Composite number that greater then your number\n",number);
}
}
