/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:03:58 by amejia            #+#    #+#             */
/*   Updated: 2022/11/09 22:09:49 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	main(void)
{
	int		intarray[10]={1,2,3,4,5,6,7,8,9,0};
	int		counter;


	
	counter = 0;
	while (counter <10)
	{
		printf("%d\n", intarray[counter]);
		counter++;
	}
	ft_rev_int_tab(&intarray[0],10);
	counter=0;
	while (counter <10)
	{
		printf("%d\n", intarray[counter]);
		counter++;
	}
	return (0);
	}
