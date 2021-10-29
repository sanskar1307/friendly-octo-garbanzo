
// array and pointer

#include <stdio.h>

int main()
{
	int arr[4] = {10,20,30,40};
	printf("First element of array %d\n",*(arr));
	printf("Second element of array %d\n",*(arr+1));
	printf("Third element of array %d\n",*(arr+2));
	printf("Fourth element of array %d\n",*(arr+3));

	printf("Second element of array %d\n",(2[arr]));
	printf("Second element of array %d\n",(*(2+arr)));







	return 0;
}