#include <stdio.h>

void	print_hex(unsigned char temp)
{
	char *alphabet;
	char *value;
	int i;

	alphabet = "0123456789abcdef";
	i = 0;
	printf("%c", alphabet[temp / 16]);
	printf("%c", alphabet[temp % 16]);
}

void	print_memory(const void *addr, size_t size)
{
	int i = 0;
	int k = 0;
	int spaces = (size % 16)*2;
	printf("%d\n", spaces);
	while (i < size)
	{
		unsigned char *temp;
		temp = (unsigned char*)(addr);
		print_hex(temp[i]);
		if (i % 2 == 1)
			printf("%c", ' ');
		if (i % 16 == 15)
			printf("%c", '\n');
		i++;
	}
	while (k < spaces)
	{
		printf("%c", ' ');
		k++;
	}
	printf("\n");
}

int main()
{
	int	tab[10] = {0, 23, 150, 255, 12, 16,  21, 42};
	print_memory(tab, sizeof(tab));
	return 0;
}