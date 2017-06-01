#include<stdio.h>
#include<stdlib.h>

main()

{
	int i;
	i=0;
	printf("Hello world ");

	while(i<10)
	{ 
		printf(". ");
		i=i+1;
		delay(1000);
	} 
	printf("\n");
	
	return 0;
}
