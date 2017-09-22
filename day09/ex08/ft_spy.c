/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 13:28:02 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/18 13:28:04 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == ' ')
		s1++;
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s2 == 0 && (*s1 == ' ' || *s1 == 0))
		return (0);
	else
		return (1);
}

int		is_alert(char *str)
{
	char	*arr[3];
	int		i;

	arr[0] = "president";
	arr[1] = "attack";
	arr[2] = "powers";
	while (*str == ' ')
		str++;
	i = 0;
	while (i < 3)
	{
		if (ft_strcmp(str, arr[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char *ret;

	ret = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (ret);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		temp = ft_strlowcase(argv[i]);
		if (is_alert(ft_strlowcase(temp)))
		{
			ft_putstr("Alert!!!");
			return (0);
		}
		i++;
	}
}
