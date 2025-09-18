#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",a);
	scanf("%d",b);
	if(a>99)&(b<1000){
		printf("%d IS 3 DIGIT NUMBER",a);
	}else{
		printf("%d IS NOT A 3 DIGIT NUMBER",b);
	}
	return 0;
}