/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 13:45:55 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/15 13:45:57 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return 0;
	while (*dest && i < size)
	{
		dest++;
		i++;
	}
	while (*src)
	{
		if (i < size - 1)
		{
			*dest = *src;
			dest++;
		}
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}
