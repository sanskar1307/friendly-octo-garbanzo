#include <stdio.h>

int main()
{	

	char*cptr = NULL;
	float*fptr = NULL;
	double*dptr = NULL;
	int*iptr = NULL;

	printf("Pointer to character takes %d bytes\n",sizeof(cptr));
	printf("Pointer to float takes %d bytes\n",sizeof(fptr));
	printf("Pointer to double takes %d bytes\n",sizeof(dptr));
	printf("Pointer to integer takes %d bytes\n",sizeof(iptr));




	return 0;
}