int check_row(int grid[4][4], int row, int left_val, int right_val)
{
    int arr[4], rev[4];

    for (int i = 0; i < 4; i++)
        arr[i] = grid[row][i];

    reverse(arr, rev);

    return (count_visible(arr) == left_val &&
            count_visible(rev) == right_val);
}