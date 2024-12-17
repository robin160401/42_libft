/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstumpf <rstumpf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:37:22 by rstumpf           #+#    #+#             */
/*   Updated: 2024/10/11 12:50:19 by rstumpf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main() {
// ft_putchar_fd('a', 1);
// }