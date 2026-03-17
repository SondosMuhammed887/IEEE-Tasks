/*
 * Task 2.c
 
 */ 

#include <avr/io.h>


void ToggleBit(unsigned int *num, int bit)
{
	*num ^= (1 << bit);
}

int main(void)
{
	unsigned int x = 5;  // 0101
	ToggleBit(&x, 1);


}
