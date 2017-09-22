/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:49:15 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/14 17:49:20 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	u_i;

	i = 0;
	u_i = 0;
	while (u_i < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
		if (*s1 == '\0' || *s2 == '\0')
			return (*s1 - *s2);
		u_i++;
	}
	return (*(s1 - 1) - *(s2 - 1));
}
