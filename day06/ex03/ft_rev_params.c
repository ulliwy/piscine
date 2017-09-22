/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 12:20:17 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/16 12:20:20 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*name;
	while (argc > 1)
	{
		name = argv[argc - 1];
		while (*name)
		{
			ft_putchar(*name);
			name++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
