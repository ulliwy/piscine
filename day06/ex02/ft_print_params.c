/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 12:08:27 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/16 12:08:29 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	char	*name;

	i = 1;
	while (i < argc)
	{
		name = argv[i];
		while (*name)
		{
			ft_putchar(*name);
			name++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
