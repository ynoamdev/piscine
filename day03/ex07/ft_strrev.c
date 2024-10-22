/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 17:58:01 by ynoam             #+#    #+#             */
/*   Updated: 2019/04/23 21:11:37 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	stock;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (i > j)
	{
		stock = str[j];
		str[j++] = str[i];
		str[i--] = stock;
	}
	return (str);
}
