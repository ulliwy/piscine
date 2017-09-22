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
 
char    **ft_split_whitespaces(char *str);
 
int     main()
{
    char **arr;
    arr = ft_split_whitespaces("   12333\n\n\t456  789\r10 11          12\t");
 
    int i = 0;
    while(arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
 
    //printf("%s\n", arr[0]);
    return (0);
}
