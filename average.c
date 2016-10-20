#include<stdio.h>
#include"average.h"

int average(int payments[])
{
	int sum,ave,i;
	sum = 0;
	for(i=0; i<5; i++){ 
		sum = sum+payments[i];
	}
	ave = sum/5;
	printf("%d\n", ave);

	return ave;
}
