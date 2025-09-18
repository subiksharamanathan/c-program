#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>99&a<1000){
		printf("%d IS 3 DIGIT NUMBER",a);
	}
	else{
		printf("%d IS NOT A 3 DIGIT NUMBER",a);
	}
}