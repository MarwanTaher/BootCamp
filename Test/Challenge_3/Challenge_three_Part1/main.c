/*
 * AUTHOR: Ahmed Nofal, Avelabs Embedded R&D software team
 */
#include <stdio.h>
/* Complete the function below to detect the endianness of the machine*/
void Detect_Endianness(void){
char x=1;
char*ptr=&x;
*ptr=0;
	if(ptr!=0)
	{
		printf("big endian\n");
	}
	else{
		printf("Little endian\n");
	}
}

int main(void){
	Detect_Endianness();
}
