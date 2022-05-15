#include<stdio.h>
sum(int n){ // function used to find the sum
	if(n==0)
	   return 0;
	else      
	    return n%10+sum(n/10);
}
int main(){
	int i;
	printf("input number:");
	scanf("%d",&i);
	printf("Sum of digits : %d",sum(i)); 
}