/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:59:19 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/27 19:19:52 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
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
int     main(void)
{
        char    lhs[] = "sdfhjdhfs";
        char    rhs[] = "jshfsjk";
	unsigned int i = 3;
	int	ft = ft_strncmp(lhs, rhs, i);
	int	good = strncmp(lhs, rhs, i);

        printf("[%s] %d [%s]\n", lhs, ft, rhs);
	printf("[%s] %d [%s]\n", lhs, good, rhs);
        return (0);
}
*/
