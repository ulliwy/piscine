/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:27:15 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/14 15:27:22 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (*str == *to_find)
		{
			if (*(to_find + 1) == '\0')
				return (str - i);
			i++;
			str++;
			to_find++;
		}
		str = str - i + 1;
	}
	return (0);
}
