/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:03:58 by amejia            #+#    #+#             */
/*   Updated: 2022/11/09 22:10:40 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		intarray[10]={44,4352,43,84,50,26,74,80,96,6};
	int		counter;


	
	counter = 0;
	while (counter <10)
	{
		printf("%d\n", intarray[counter]);
		counter++;
	}
	ft_sort_int_tab(&intarray[0],10);
	
	printf("--------\n");
	counter=0;
	while (counter <10)
	{
		printf("%d\n", intarray[counter]);
		counter++;
	}
	return (0);
}
