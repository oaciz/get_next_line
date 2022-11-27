/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaciz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:58:35 by oaciz             #+#    #+#             */
/*   Updated: 2022/04/18 13:03:22 by oaciz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	m;

	if (!s2)
		return (NULL);
	i = 0;
	m = 0;
	p = (char *)malloc(((ft_strlen(s2) + ft_strlen(s1)) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s1 && s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	free(s1);
	while (s2[m])
		p[i++] = s2[m++];
	p[i] = '\0';
	return (p);
}

int	ft_strchr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
