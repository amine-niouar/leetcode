

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int	get_pow(long int num, long int *power)
{
	int	len;

	len = 0;
	*power = 1;
	while (num)
	{
		len++;
		*power = *power * 10;
		num /= 10;
	}
	*power /= 10;
	return (len);
}

 int	num_zero(int power)
{
	if (power == 0)
		return (1);
	return (0);
}

 char	*fill(long int num, int nb_signed)
{
	int			i;
	int			count;
	int			sizea;
	long int	power;
	char		*s;

	power = 0;
	count = get_pow(num, &power);
	sizea = (count + num_zero(power) + nb_signed + 1);
	s = (char *)malloc(sizea * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	if (nb_signed)
		s[i++] = '-';
	if (power == 0)
		s[i++] = '0';
	while (power)
	{
		s[i] = ((num / power) % 10) + '0';
		i++;
		power /= 10;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	long int	num;
	int			nb_signed;
	char		*s;

	nb_signed = 0;
	s = 0;
	num = n;
	if (num < 0)
	{
		num *= -1;
		nb_signed = 1;
	}
	s = fill(num, nb_signed);
	return (s);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*ns;

	i = 0;
	while (s[i])
		i++;
	ns = (char *)malloc(i + 1);
	if (!ns)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}



char ** fizzBuzz(int n, int* returnSize){
    
    char **fz;
    int x;
    int i;
    
    
    fz = malloc(n * sizeof(char *));
    
    x = 0;
    i = 1;
    while(i <= n)
    {
        if(i % 3 == 0 && i % 5 == 0)
            fz[x] = ft_strdup("FizzBuzz");
        else if(i % 3 == 0)
            fz[x] = ft_strdup("Fizz");
         else if(i % 5 == 0)
            fz[x] = ft_strdup("Buzz");
        else
            fz[x] = ft_itoa(i);
        x++;
        i++;
    }
    
    *returnSize = x;
    return (fz);

}