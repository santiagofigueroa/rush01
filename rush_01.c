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

void	ft_putchar(char c);
int		parse_input(char *str, int views[16]);
void	fill_views(int views[16], int top[4], int bottom[4], int left[4], int right[4]);
int		solve(int grid[4][4], int row, int col,	int top[4], int bottom[4], int left[4], int right[4]);
void	print_grid(int grid[4][4]);

void	rush01(char *input)
{
	int views[16];
	int top[4], bottom[4], left[4], right[4];
	int grid[4][4] = {0};

	// 1. Parse input
	if (!parse_input(input, views))
	{
		write(1, "Error\n", 6);
		return;
	}

	// 2. Split views
	fill_views(views, top, bottom, left, right);

	// 3. Solve
	if (solve(grid, 0, 0, top, bottom, left, right))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
}
