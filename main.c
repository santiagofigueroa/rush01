/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<<< HEAD:main.c
/*   main.c                                          :+:      :+:    :+:   */
========
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
>>>>>>>> d5745c6aba90424c328fe1ab9a93c29ecbd161fa:ft_parse_input.c
/*                                                    +:+ +:+         +:+     */
/*   By: safiguer <safiguer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 21:29:28 by safiguer          #+#    #+#             */
/*   Updated: 2026/04/19 21:30:33 by safiguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

<<<<<<<< HEAD:main.c
void rush01(char ** matrix); 

int main (int argc, char *argv[])
{
if (argc != 2 || argv == NULL )
	{
		write(1, "Error\n", 6);
		return (1);
	}

	rush01(argv[1]);
	return (0);
} 
========
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
>>>>>>>> d5745c6aba90424c328fe1ab9a93c29ecbd161fa:ft_parse_input.c
