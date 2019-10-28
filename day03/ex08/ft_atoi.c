/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 06:51:10 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/09 18:41:38 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_atoi(char *str)
{
	int number;
	int sign;
	int i;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
		number = number * 10 + str[i++] - 48;
	return (number * sign);
}

int	main(void)
{
	printf("%d\n",ft_atoi("			-+	123"));
	return (0);
} 
