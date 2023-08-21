#include <stdio.h>
#include <stdbool.h>



//Co-prime
bool isCoprime(int num1,int num2){
	int i;
	for (i=2;i<num1 || i <num2;i++){
		if(num1 % i == 0 && num2 % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int num1;
	
	int num2;
	
	while(1){
	
	
	
	printf("\nPlease enter first number : \n");
	
	scanf("%d",&num1);
	
	
	printf("\nPlease enter second number : \n");
	
	scanf("%d",&num2);
	
	if(num1==-1 || num2 ==-1)
	{
		break;	}
	
	if(isCoprime(num1,num2)==1){
		printf("%d and %d are Co-prime numbers",num1,num2);
	}
	else {
		printf("%d and %d are not Co-prime numbers",num1,num2);
	}
	
}
}
