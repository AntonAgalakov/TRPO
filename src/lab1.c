#include <stdio.h>
#include "deposit.h"

int main()
{
	int srok, vklad;
	printf("Input amound: ");
	scanf("%d", &vklad);
	printf("Input period: ");
	scanf("%d", &srok);
	proverka(srok, vklad);
	vklad = itog(srok, vklad);
	printf("Deposit amount = %d", vklad);
	return 0;
}