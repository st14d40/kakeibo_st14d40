#include<stdio.h>
<<<<<<< HEAD
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
=======
#include"sum.h"

int sum(int payments[]);

int sum(int payments[])
{
	int result=0;
	int i;
	for(i=0; i<5; i++){
		result = result + payments[i];
		}

	return result;
>>>>>>> dfeced14191ca86a386f9074e5ab10d862156b16
}
