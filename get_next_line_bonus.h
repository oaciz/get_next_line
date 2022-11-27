/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaciz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:12:44 by oaciz             #+#    #+#             */
/*   Updated: 2022/04/17 17:21:56 by oaciz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_save(char *string);
size_t	ft_strlen(const char *str);
char	*ft_read_and_save(int fd, char *string);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_moveline(char *string);
int		ft_strchr(char *str);
#endif
