/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmze-aha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:11:10 by tmze-aha          #+#    #+#             */
/*   Updated: 2024/08/28 19:12:26 by tmze-aha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strcat(char *dest; char *src)
{
	int	i;
	int	des_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
        char    lhs[] = "sjhfjksf";
        char    rhs[] = "khdjhskjf";
        char    *rc = ft_strcat(lhs, rhs);
	char	*good = strcat(lhs, rhs); 
        printf("[%s] %s [%s]\n", lhs, rc, rhs);
        printf("[%s] %s [%s]\n", lhs, good, rhs);
	return (0);
}
*/
