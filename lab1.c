#include <stdio.h>

int main()
{
	int skok = -1;
	int vklad = 1;
	
	while ((srok < 0) && (srok <=365)) {
		printf("Enter the term of the deposit: ");
		scanf("%d", &srok);
		if (srok < 0)
			printf("\nThe data is not correct");
	}
	
	while (vklad < 10000) {
		printf("Enter the amount of your deposit: ");
		scanf("%d", &vklad);
		if (vklad < 10000)
			printf("\n The data is not correct");
	}
}