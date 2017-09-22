/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 15:20:00 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/15 15:20:04 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base);
int		s_len(char *str);
int		ft_putchar(char c);
void	wrapper(unsigned int nbr, char *base, unsigned int base_len);
int		is_base(char *base, int len);
void	set_zero(char *tb);

void	set_zero(char *tb)
{
	int i;

	i = 0;
	while (i < 256)
	{
		tb[i] = '\0';
		i++;
	}
	i = 0;
}

int		is_base(char *base, int len)
{
	int		i;
	int		j;
	char	tb[256];

	if (len <= 1)
		return (0);
	set_zero(tb);
	i = 0;
	while (*base)
	{
		if ((!(*base >= 32 && *base <= 126)) || (*base == '-' || *base == '+'))
			return (0);
		j = 0;
		while (j < i + 1)
		{
			if (*base == tb[j])
				return (0);
			j++;
		}
		tb[i] = *base;
		i++;
		base++;
	}
	return (1);
}

void	wrapper(unsigned int nbr, char *base, unsigned int base_len)
{
	if (nbr >= base_len)
		wrapper(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len]);
}

int		s_len(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	unsigned int	value;

	base_len = s_len(base);
	if (!is_base(base, base_len))
		return ;
	value = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		value = -value;
	}
	wrapper(value, base, base_len);
}
