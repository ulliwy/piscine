/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 18:20:32 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/14 18:20:35 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char *ret;

	ret = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str &= ~' ';
		str++;
	}
	return (ret);
}
