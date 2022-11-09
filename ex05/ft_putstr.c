/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:05:35 by amejia            #+#    #+#             */
/*   Updated: 2022/11/09 22:07:46 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	trial_string;
	char	*str_point;
	int 	counter;
	char	*original;

	str_point ="Hola como estàn";
	ft_putstr(str_point);
	
	return (0);
}
