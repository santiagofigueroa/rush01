/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safiguer <safiguer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:55:00 by safiguer          #+#    #+#             */
/*   Updated: 2026/04/18 21:19:34 by safiguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_putchar(char c);


void	free_matrix(char **pArr, int rows)
{
    int i;

	i = 0;

    while (i < rows)
	{
		printf("%s","Libre !! ");
		printf("%p",pArr[i]);
		free(pArr[i]);

		i++;
	}
	//free(pArr);

	//return pArr;

}

void	rush03(int x, int y)
{
	int	c_x;
	int	c_y;

	c_x = 1;
	c_y = 1;
	while (c_y <= y)
	{
		while (c_x <= x)
		{
			if (c_x == 1 && (c_y == 1 || c_y == y))
				ft_putchar('A');
			else if (c_x == x && (c_y == 1 || c_y == y))
				ft_putchar('C');
			else if (c_x != 1 && c_x != x && c_y != 1 && c_y != y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			c_x++;
		}
		if (x > 0)
			ft_putchar('\n');
		c_y++;
		c_x = 1;
	}
}

char **create_matrix(int rows, int cols)
{
	char	**pArr;
	int		i;
	int		j;

	rush03(rows ,cols);  

	while (i < rows)
	{
		while (j < cols)
		{
			printf("  &pArr[%d][%d] = %p\n", i, j, &pArr[i][j]);
			j++;
		}
		i++;
	}
	return		pArr;
}




void rush01(char *pArrgs[])
{
	int		x_col;
	int		y_row;
	char    **tmpArr;

	x_col = 0;
	y_row = 0;


	//free_matrix(pArrgs, 4);

	tmpArr = create_matrix(6,6);
	printf("%s" ,"Matrix creada !");
	free_matrix(tmpArr, 5);
	printf("%s\n","\n");
	printf("%s" ,"Final del programa!!!");
	return;

	while (x_col <= 4)
	{
		while (y_row <= 4)
		{
			//arr[y_row][x_col] =	&pArrgs[y_row];
			//putchar(tmpArr[y_row][x_col]);
		}

		putchar(x_col);
		putchar('\n'); 
		x_col ++; 
	}
	///printf("s%" ,pArrgs);
}
