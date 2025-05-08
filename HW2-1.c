#include <stdio.h>
#include <stdlib.h>
int main()
{
float aRandomNumber ;
int i; 
for( i=0; i<50; i++ )
{ //Generates a random number between 0 and 20
aRandomNumber = rand()%2000;
printf("Rand modulo 2000 gives gives %.2f \n",
aRandomNumber);
aRandomNumber = aRandomNumber /100;
printf("We divide by 100 to get %.2f \n \n",
aRandomNumber);
}
return 0;
}

