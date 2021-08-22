/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmeunier <cmeunier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:03:39 by cmeunier          #+#    #+#             */
/*   Updated: 2020/03/12 14:26:15 by cmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>

# define BUFFER_SIZE 300

int		ft_error_gnl(char **line, char **buffer);
int		get_line_break(const char *str);
int		ft_read_line(int fd, char **buffer, char **line);
int		ft_finish_line(char **save, char **line, char *buffer, int ret);
int		get_next_line(int fd, char **line);
void	ft_bzero(void *b, size_t n);
char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_strjoin_free(char *s1, char *s2);

#endif
