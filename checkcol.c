int check_col(int grid[4][4], int col, int top_val, int bottom_val)
{
    int arr[4], rev[4];

    for (int i = 0; i < 4; i++)
        arr[i] = grid[i][col];

    reverse(arr, rev);

    return (count_visible(arr) == top_val &&
            count_visible(rev) == bottom_val);
}