#include<stdio.h>

int main()
{
	int num= 91, idx;
	int isPrime = 0;
	for(idx = 2; idx <= num/2; idx++)
	{
		if(num % idx == 0) {
			break;
		}
		else {
			isPrime=1;
			break;
		}
	}
	
	if(isPrime=1)
	{
		printf("%d is Prime\n", num);
	}
	else
	{
		printf("%d is NOT Prime\n", num);
	}
	return 0;
}
				
