//Check whether the given number is perfect or not.
#include<stdio.h>
void main() {
	int n,i=1,sum=0;
	printf("Enter Number :");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		printf("PERFECT NUMBER");
		
	}
	else{
		printf("NOT PERFECT NUMBER");
	}
}