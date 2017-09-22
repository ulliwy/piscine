/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 18:55:23 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/14 18:55:26 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		is_letter(char c);
int		is_nbr(char c);

int		is_letter(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *ret;

	ret = str;
	while (*str)
	{
		if (is_letter(*str))
		{
			if (is_letter(*(str - 1)) || is_nbr(*(str - 1)))
				if (*str >= 'A' && *str <= 'Z')
					*str = *str + 32;
			if (!is_letter(*(str - 1)) && !is_nbr(*(str - 1)))
				if (*str >= 'a' && *str <= 'z')
					*str &= ~' ';
		}
		str++;
	}
	return (ret);
}
