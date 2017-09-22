#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	int nbr[8];
	unsigned char temp;
	unsigned char temp2;

	//temp = octet & 15;
	temp = temp << 4;
	printf("%d\n", temp);
	//temp2 = octet & 240;
	temp2 = temp2 >> 4;
	printf("%d\n", temp);
	//1000 0101
	octet = temp | temp2;
	return (octet);
}

int main()
{
	unsigned char octet = 133;
	printf("%d\n", swap_bits(octet));
}