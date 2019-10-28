/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 16:35:31 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/09 20:02:21 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
int	main(void)
{
	printf("%d\n", ft_strlen("uwuuuwugt"));
	printf("%lu\n",strlen("uwuuuwugt"));
	return (0);
}
