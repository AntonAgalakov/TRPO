#include <stdio.h>
#include "deposit.h"

int proverka (int srok, int vklad) {
	if (vklad >= 10000)
		if(srok > 0 && srok <=365)
			return 0;
		else {
			printf("The data is not correct (srok)\n");
			return -1;
		}
	else
	{
		printf("\nThe data is not correct (vklad)\n");	
		if (srok < 0 || srok > 365)
			printf("\nThe data is not correct (srok)\n");
		return -1;
	}
}

int itog (int srok, int vklad) {
	if (srok > 0 && srok <=365) {
		if (vklad >= 100000) {
			if (srok <= 30)
				vklad = vklad - vklad *0.1;
			if ((srok > 30) && (srok <=120))
				vklad = vklad +vklad * 0.03;
			if ((srok  > 120) && (srok <=240))
				vklad = vklad + vklad * 0.08;
			if ((srok > 240) && (srok <=365))
				vklad = vklad + vklad * 0.15;
		}
	
		if (vklad < 100000) {
			if (srok <=30)
				vklad = vklad - vklad *0.1;
			if ((srok > 30) && (srok <=120))
				vklad = vklad + vklad * 0.02;
			if ((srok > 120) && (srok <=240))
				vklad = vklad + vklad * 0.06;
			if ((srok > 240) && (srok <=365))
				vklad = vklad + vklad * 0.12;
		}
		return vklad;
	}
	else
		return -1;
}