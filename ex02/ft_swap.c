/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:01:11 by amejia            #+#    #+#             */
/*   Updated: 2022/11/09 22:05:37 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a=12;
	b=-1;

	printf("a vale: %d, b vale %d\n",a,b);
	ft_swap(&a,&b);
	printf("a vale: %d, b vale %d\n",a,b);
}
