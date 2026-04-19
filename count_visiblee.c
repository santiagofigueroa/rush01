int count_visible(int arr[4])
{
    int count = 0;
    int max = 0;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count++;
        }
    }
    return count;
}