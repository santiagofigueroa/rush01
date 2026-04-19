#include <unistd.h>

int	parse_input(char *str, int views[16])
{
	int i = 0;
	int j = 0;

	while (str[i])
	{
		if (i % 2 == 0) // number position
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			views[j++] = str[i] - '0';
		}
		else // space position
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31 || j != 16)
		return (0);
	return (1);
}