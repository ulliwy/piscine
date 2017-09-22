/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 09:36:33 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/18 09:36:35 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rot_cap(char c)
{
	int temp;

	temp = c;
	temp = temp + 16;
	if (temp > 90)
		temp = temp - 26;
	return (temp);
}

char	*ft_rot42(char *str)
{
	char	*ret;
	int		temp;

	ret = str;
	while (*str)
	{
		temp = 0;
		if (*str >= 'A' && *str <= 'Z')
		{
			temp = rot_cap(*str);
			*str = temp;
		}
		if (*str >= 'a' && *str <= 'z')
		{
			temp = *str;
			temp = temp + 16;
			if (temp > 122)
				temp = temp - 26;
			*str = temp;
		}
		str++;
	}
	return (ret);
}
