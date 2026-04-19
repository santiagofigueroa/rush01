/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safiguer <safiguer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:42:49 by safiguer          #+#    #+#             */
/*   Updated: 2026/04/18 17:49:42 by safiguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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