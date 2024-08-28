/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:59:19 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/27 19:09:09 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((int)(s1[i] - s2[i]));
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	lhs[] = "khjshfkjd";
	char	rhs[] = "khjdfkjdhfs";
	int	ft = ft_strcmp(lhs, rhs);
	int	good = strcmp(lhs, rhs);
	printf("[%s] %d [%s]\n", lhs, ft, rhs);
	printf("[%s] %d [%s]\n", lhs, good, rhs);
	return (0);
}
*/
