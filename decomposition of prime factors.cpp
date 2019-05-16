#include <stdio.h>

void main(){
	printf("This is a calculator of decomposition of the prime factor.\n");
	printf("The range is 2~2147483646, and input a number overrange to end this program.\n\n");
	int num,i;
	while(1){
		printf("Please input your number here: ");
		scanf("%d",&num);
		if(num<2 || num>2147483646) break;
		printf("%d = ",num);
		for(i=2;i<=num;i++){
			if(num%i==0){
				num=num/i;
				if(num==1) break;
				printf("%d * ",i);
				i=1;
			}
		}
		printf("%d\n",i);
	}
}