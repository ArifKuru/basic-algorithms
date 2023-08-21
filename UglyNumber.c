#include <stdio.h>

int divide(int number,int divider){
	while(number%divider==0){
		number/=divider;
	}
	return number;
}

int main () {

int number;

while(1){

printf("\nPlease enter a number : \n");

scanf("%d",&number);

if(number==-1){
	break;
}

if(divide(divide(divide(number,2),3),5)==1 && number!=1){
	printf("\n%d is an ugly number\n",number);
}
else{
		printf("\n%d is not an ugly number\n",number);

}

}

}

