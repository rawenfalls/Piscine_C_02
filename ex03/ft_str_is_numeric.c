int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
			return (0);
	}
	if (!str[0])
	{
		return (1);
	}
	return (1);
}
