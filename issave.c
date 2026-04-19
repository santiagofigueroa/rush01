int is_safe(int grid[4][4], int row, int col, int num)
{
    for (int i = 0; i < 4; i++)
    {
        if (grid[row][i] == num || grid[i][col] == num)
            return 0;
    }
    return 1;
}