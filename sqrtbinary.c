#include <stdio.h>
#include <stdlib.h>

int	ft_binarysearch(int min, int max, int nb)
{
	int	m;

	if (min > max)
		return (0);
	m = (min + max) / 2;
	if ((m * m) > nb)
		return (ft_binarysearch(min, m - 1, nb));
	else if (m * m == nb)
		return (m);
	else
		return (ft_binarysearch(m + 1, max, nb));
}

int	ft_aux(int nb)
{
	return (ft_binarysearch(0, nb / 2, nb));
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("radice: %d\n", ft_aux(atoi(argv[1])));
}
