// Arrays and pointers relationship-II 

#include<stdio.h>

int main()
{
	int array[3]={10,15,20};
	printf("Elements are %d %d %d\n",array[0], array[1],array[2] );
	printf("Elements are %d %d %d\n",*(array+0),*(array+1),*(array+2));
	printf("Elements are %d %d %d\n",0[array],1[array],2[array]);

	

	return 0;

}