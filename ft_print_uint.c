/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/09 11:34:58 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_print_uint(unsigned int n)
{
	ft_putstr_fd("ft_print_uint: param=", STDOUT_FILENO);
	ft_putnbr_fd(n, STDOUT_FILENO); // bug: works with int only
	ft_putstr_fd(", outputs=", STDOUT_FILENO);
	int	ret = ft_print_uint(n);
	ft_putstr_fd(", returns=", STDOUT_FILENO);
	ft_putnbr_fd(ret, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

int	main(void)
{	
	test_print_uint((unsigned int) 1);
	test_print_uint((unsigned int) 123);
	test_print_uint((unsigned int) 392485);
	test_print_uint((unsigned int) 0);
	test_print_uint((unsigned int) INT_MAX);
	test_print_uint((unsigned int) INT_MAX + 1);
	test_print_uint((unsigned int) 3000000000);
	test_print_uint((unsigned int) UINT_MAX);
}
