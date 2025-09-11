#include<stdio.h>
int main(){
	int n;
	printf("Enter a 3-digit number:");
	scanf("%d",&n);
	printf("Middle digit: %d\n",(n/10)%10);
	return 0;
}