/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:05:35 by amejia            #+#    #+#             */
/*   Updated: 2022/11/09 22:08:21 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str_point;
	int 	leng;
	
	str_point ="Hola como estan";
	leng=ft_strlen(str_point);
	printf("%d\n",leng);

	return (0);
}
