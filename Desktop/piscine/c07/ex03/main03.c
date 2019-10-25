#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep);

int		main(int argc, char *argv[])
{
	if (argc == 1)
		return 0;
	char sep[] = "!";
	
	printf ("Resultado: %s",ft_strjoin(argc, &argv[0], sep));
}
