/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:03:58 by amejia            #+#    #+#             */
/*   Updated: 2022/11/10 00:45:04 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_rev_int_tab(int *tab,int size);

int	main(void)
{
	int		intarray[10]={1,2,3,4,5,6,7,8,9,0};
	
	int  	smallarray[1]={4};
	int		counter;


	printf("Test1\n");
	counter = 0;
	while (counter <10)
	{
		printf("%d", intarray[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(intarray,10);
	counter=0;
	while (counter <10)
	{
		printf("%d", intarray[counter]);
		counter++;
	}

	printf("\nTest2\n");

	ft_rev_int_tab(smallarray,1);


	printf("\nTest3\n");

	int test1[] = {1,5,4,2,3};
	int size = 5;
	ft_rev_int_tab(test1, size);
	
	for (int i = 0; i < size; i++)
		printf("%d,", test1[i]);



	return (0);
	}
