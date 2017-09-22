/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:38:50 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/16 15:38:52 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main()
{
	char	*val = "fghjkl";

	printf("%s\n", ft_strdup(val));
	printf("%s\n", strdup(val));
	return (0);
}
