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
#include <unistd.h>
 
char    **ft_split_whitespaces(char *str);
void    ft_print_words_tables(char **tab);

void    ft_putchar(char c)
{
    write(1, &c, 1);
    return ;
}

 
int     main()
{
    char *arr;
    arr = "   12333\n\n\t456  789\r10 11          12\t";
    ft_print_words_tables(&arr);
    return (0);
}
