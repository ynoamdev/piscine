/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   santantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:36:35 by ynoam             #+#    #+#             */
/*   Updated: 2019/04/14 20:35:00 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void sastantua(int size )
	{
		int i;
		int j;
		int row;
		int column;
	
		i=3;
		row=3;
		column=7;
		while ( i >= 1)
		{
			j=1;
			while (j <= column)
			{
				if( i==j  )
					ft_putchar('/');
				else if( j  ==  ((column-i)+1)  )
					ft_putchar('\\');
				else if((  j > i   )   && ( j < ( (column-i)+1)))
				{
					if( i == 1 &&  j== (column/2+1) && size ==1  )

						ft_putchar('|');
					else
						ft_putchar('*');
				}
				else
					ft_putchar(' ');
				j++;
			}
			i--;
			ft_putchar('\n');
		}
	}

int main(void)
{
	sastantua(2);
	return (0);
}
