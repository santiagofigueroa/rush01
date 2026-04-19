<<<<<<< HEAD

=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_views.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safiguer <safiguer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 21:34:57 by safiguer          #+#    #+#             */
/*   Updated: 2026/04/19 21:35:03 by safiguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void print_grid();

<<<<<<<< HEAD:initial_array.c
void	rush01(char *input)
{
	int grid[4][4] = {
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3}
	};

	(void)input; 
	print_grid(grid);
========
>>>>>>> d5745c6aba90424c328fe1ab9a93c29ecbd161fa

void	fill_views(int views[16], int top[4], int bottom[4], int left[4], int right[4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		top[i] = views[i];
		bottom[i] = views[i + 4];
		left[i] = views[i + 8];
		right[i] = views[i + 12];
		i++;
	}
<<<<<<< HEAD
=======
>>>>>>>> d5745c6aba90424c328fe1ab9a93c29ecbd161fa:ft_fill_views.c
>>>>>>> d5745c6aba90424c328fe1ab9a93c29ecbd161fa
}