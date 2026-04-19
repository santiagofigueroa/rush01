void reverse(int src[4], int dest[4])
{
    for (int i = 0; i < 4; i++)
        dest[i] = src[3 - i];
}