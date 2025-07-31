/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilel-kas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:28:21 by ilel-kas          #+#    #+#             */
/*   Updated: 2025/07/28 17:28:09 by ilel-kas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
/*
#include <stdio.h>
int main()
{
    int nb;
    char str[] = " ---+--+1234ab567"; 
    nb = ft_atoi(str);
    printf("%d\n", nb);
}*/
