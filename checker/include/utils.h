/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipollin <nipollin@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:45:41 by nipollin          #+#    #+#             */
/*   Updated: 2024/07/31 19:22:31 by nipollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	UTILS_H
# define UTILS_H

# include <stddef.h>

void	ft_write_memory(void *mem, size_t siz);
void	ft_write_strstr(char **strstr);
char	**ft_free_strstr(char **str, size_t len);
size_t	ft_strstrlen(char **s);
void	ft_write_file(int fd);

#endif // UTILS_H
