void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
int 	ft_putchar(char c);

#include <stdio.h>

int main()
{
	ft_putstr("hello");
	ft_putchar('\n');
	printf("%d\n", ft_strcmp("hello", "fello"));
	printf("%d\n", ft_strlen("hello"));
	int i = 1;
	int b = 2;
	ft_swap(&i, &b);
	printf("%d %d\n", i, b);
	return 0;
}