int solve(int grid[4][4], int row, int col,
          int top[4], int bottom[4],
          int left[4], int right[4])
{
    if (row == 4)
        return 1;

    int next_row = (col == 3) ? row + 1 : row;
    int next_col = (col + 1) % 4;

    for (int num = 4; num >= 1; num--) // 🔽 your idea
    {
        if (is_safe(grid, row, col, num))
        {
            grid[row][col] = num;

            // If row filled → check row views
            if (col == 3 && !check_row(grid, row, left[row], right[row]))
            {
                grid[row][col] = 0;
                continue;
            }

            // If column filled → check column views
            if (row == 3 && !check_col(grid, col, top[col], bottom[col]))
            {
                grid[row][col] = 0;
                continue;
            }

            if (solve(grid, next_row, next_col, top, bottom, left, right))
                return 1;

            grid[row][col] = 0;
        }
    }
    return 0;
}