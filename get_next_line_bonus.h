/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:19:48 by alozen            #+#    #+#             */
/*   Updated: 2023/03/15 18:19:51 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *c);
int		ft_find(char *finder);
char	*ft_line(char *handle_string);
char	*ft_clean(char *handle_string);
char	*ft_read(int fd, char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *lft_str, char *buff);

#endif
