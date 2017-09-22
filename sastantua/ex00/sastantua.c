/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 09:56:46 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/13 09:56:54 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sastantua(int size);
int		ft_putchar(char c);
void	print_line(char c, int n);
int		draw_door_lines(int level, int door, int i, int block);
void	else_f(int size, int level, int i, int block);
void	draw(int h, int size);

void	print_line(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
}

int		draw_door_lines(int level, int door, int i, int block)
{
	if (level >= block + 3 - door)
	{
		print_line('*', (i * 2 - 1 - door) / 2);
		if (level == block + 3 - (door / 2) - 1 && block >= 5)
		{
			print_line('|', door - 2);
			print_line('$', 1);
			print_line('|', 1);
		}
		else
			print_line('|', door);
		print_line('*', (i * 2 - 1 - door) / 2);
		return (1);
	}
	return (0);
}

void	else_f(int size, int level, int i, int block)
{
	int door_printed;
	int door;

	door_printed = 0;
	door = size - (1 - (size % 2));
	print_line('/', 1);
	if (block == size)
		door_printed = draw_door_lines(level, door, i, block);
	if (!door_printed)
		print_line('*', i * 2 - 1);
	print_line('\\', 1);
	ft_putchar('\n');
}

void	draw(int h, int size)
{
	int i;
	int level;
	int block;
	int door_printed;

	i = 1;
	level = 0;
	block = 1;
	door_printed = 0;
	while (i <= h)
	{
		if (++level == block + 3)
		{
			i += (block++ - 1) / 2 + 1;
			level = 0;
		}
		else
		{
			print_line(' ', (2 * h - 1) / 2 - i + 1);
			else_f(size, level, i, block);
		}
		i++;
	}
}

void	sastantua(int size)
{
	int i;
	int h;
	int skip;

	if (size <= 0)
		return ;
	skip = 0;
	i = 1;
	while (i < size)
	{
		skip = skip + 1 + ((i - 1) / 2) + 1;
		i++;
	}
	h = (size * (5 + size)) / 2 + skip;
	draw(h, size);
	return ;
}
