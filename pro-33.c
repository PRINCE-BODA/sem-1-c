
//Print 1 to 10 then modify program print 1 to n.
#include<stdio.h>
void main() {
	int n,i;
	printf("Enter Number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d\t",i);
	}
}
