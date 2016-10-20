#include<stdio.h>
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
}
