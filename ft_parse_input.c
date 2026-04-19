/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safiguer <safiguer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 21:29:28 by safiguer          #+#    #+#             */
/*   Updated: 2026/04/19 21:30:33 by safiguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	parse_input(char *str, int views[16])
{
	int		i;
	int		j;

	i = 0;
	j = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			views[j++] = str[i] - '0';
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31 || j != 16)
		return (0);
	return (1);
}