/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:11:26 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/14 12:11:28 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	u_i;
	char			*ret;

	i = 0;
	u_i = i;
	ret = dest;
	while (u_i < n)
	{
		*dest = *src;
		dest++;
		src++;
		u_i++;
	}
	while (u_i < n)
	{
		*dest = '\0';
		u_i++;
	}
	return (ret);
}
