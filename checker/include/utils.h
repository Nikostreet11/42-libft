/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:45:41 by nipollin          #+#    #+#             */
/*   Updated: 2024/08/27 12:34:45 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stddef.h>
# include "libft.h"

void	ft_write_memory(void *mem, size_t siz);
void	ft_write_strstr(char **strstr);
char	**ft_free_strstr(char **str, size_t len);
size_t	ft_strstrlen(char **s);
void	ft_write_file(int fd);
void	ft_write_lst(t_list *node);
t_list	*ft_lstget(t_list *node, size_t pos);
void	ft_iter(unsigned int idx, char *c);
char	ft_map(unsigned int idx, char c);
void	ft_rot13_data(void *data);
void	*ft_rot13dup_data(void *data);

#endif // UTILS_H
