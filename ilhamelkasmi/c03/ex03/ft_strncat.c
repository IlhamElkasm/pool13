/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:31:53 by ahammouc          #+#    #+#             */
/*   Updated: 2025/07/27 11:59:35 by ahammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	while(dest[i])
		i++;

	while(src[j] && j < nb)
	{
		dest[i] = src[j];
			j++;
			i++;
	}
	dest[i] = '\0';
	return(dest);
}
/*
int	main()
{
	char dest[100] = "achraf ";
	char arr[] = "hammouc";
	ft_strncat(dest, arr, 4);
	printf("%s :", dest);
}
*/
