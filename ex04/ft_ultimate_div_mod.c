/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:04:04 by amejia            #+#    #+#             */
/*   Updated: 2022/11/09 22:06:45 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include	<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int	a;
	int	b;

	a = 7281;
	b = 3;
	printf("a: %d, b:%d\n",a,b);
	ft_ultimate_div_mod(&a,&b);
	printf("div: %d, mod: %d\n",a,b);
}	
