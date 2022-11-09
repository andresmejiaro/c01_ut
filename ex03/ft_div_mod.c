/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:03:05 by amejia            #+#    #+#             */
/*   Updated: 2022/11/09 22:06:09 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	a;
	int	b;
	int 	div;
	int	mod;

	a = 7281;
	b = 3;
	printf("a: %d, b:%d\n",a,b);
	ft_div_mod(a,b,&div,&mod);
	printf("div: %d, mod: %d\n",div,mod);
}
