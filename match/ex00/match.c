/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iprokofy <iprokofy@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 09:35:11 by iprokofy          #+#    #+#             */
/*   Updated: 2017/08/19 09:35:12 by iprokofy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (1);

	if (*s2 == '*' && *s1 == '\0')
		return match(s1, s2 + 1);

	if (*s2 == *s1)
		return (match(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	return (0);
}