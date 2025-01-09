/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:23:32 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/09 17:01:25 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_print_str(const char *str)
{
	ft_putstr_fd("ft_print_str: param=\"", STDOUT_FILENO);
	ft_putstr_fd((char *) str, STDOUT_FILENO);
	ft_putstr_fd("\", outputs=", STDOUT_FILENO);
	int	ret = ft_print_str(str);
	ft_putstr_fd(", returns=", STDOUT_FILENO);
	ft_putnbr_fd(ret, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

int	main(void)
{	
	void *ptr1;
	test_print_str("hello");
	test_print_str("World");
	test_print_str("7sd2 92  2u");
	test_print_str("");
	test_print_str(NULL);
}
