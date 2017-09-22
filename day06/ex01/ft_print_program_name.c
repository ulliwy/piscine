/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 09:49:00 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/16 09:49:02 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*name;

	argc = 0;
	name = argv[0];
	while (*name)
	{
		ft_putchar(*name);
		name++;
	}
	ft_putchar('\n');
	return (0);
}