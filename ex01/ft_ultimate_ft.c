/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:00:30 by amejia            #+#    #+#             */
/*   Updated: 2022/11/09 22:05:03 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*b;
	int	**c;
	int	***d;
	int	****e;
	int	*****f;
	int	******g;
	int	*******h;
	int 	********j;
	int 	*********k;
	
	
	a = 10;
	printf("%d\n", a);
	b=&a;
	c=&b;
	d=&c;
	e=&d;
	f=&e;
	g=&f;
	h=&g;
	j=&h;
	k=&j;
	
	printf("%d\n", k);
	ft_ultimate_ft(k);
	printf("%d\n", a);

	return 0;
}
