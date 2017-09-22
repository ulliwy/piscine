/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:48:53 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/15 14:48:55 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				s_len(char *str);

int				s_len(char *str)
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*ret;

	i = 0;
	ret = src;
	if (size == 0)
		return 0;
	while (i < size - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < size)
	{
		*dest = '\0';
		i++;
	}
	return (s_len(ret));
}
