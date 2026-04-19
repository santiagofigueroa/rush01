

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
}