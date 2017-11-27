#include<stdio.h>

int main()
{
	int i=100;
	char *c=(char *)&i;
		
	printf("\nThe address of i -> %p\nThe value stored in i -> %d\n",&i,i);
	printf("The base address stored in char pointer -> %p\n",c);

	
	//determinig if following address is greater than present address	
	if((*(&c)) < (*(&c))+1)
		printf("\nIts a little Endian\n");
	else if ((*(&c)) > (*(&c))+1)
		printf("\nIts big Endian\n");

	printf("\nList of Address\n");
	//printing list of address upto 4 
	for(int j=0;j<4;j++){
		printf("%p ->",*(&c));
	(*(&c))++;

	}
	return 0;
}
