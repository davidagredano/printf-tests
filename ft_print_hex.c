/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:06:32 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/09 12:11:21 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_print_hex(unsigned int n, bool upper)
{
	ft_putstr_fd("ft_print_uint: param=", STDOUT_FILENO);
	ft_putnbr_fd(n, STDOUT_FILENO); // bug: works with int only
	ft_putstr_fd(", outputs=", STDOUT_FILENO);
	int	ret = ft_print_hex(n, upper);
	ft_putstr_fd(", returns=", STDOUT_FILENO);
	ft_putnbr_fd(ret, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

int	main(void)
{	
	test_print_hex((unsigned int) 1, true);
	test_print_hex((unsigned int) 1, false);
	test_print_hex((unsigned int) 123, true);
	test_print_hex((unsigned int) 123, false);
	test_print_hex((unsigned int) 392485, true);
	test_print_hex((unsigned int) 392485, false);
	test_print_hex((unsigned int) 0, true);
	test_print_hex((unsigned int) 0, false);
	test_print_hex((unsigned int) INT_MAX, true);
	test_print_hex((unsigned int) INT_MAX, false);
	test_print_hex((unsigned int) INT_MAX + 1, true);
	test_print_hex((unsigned int) INT_MAX + 1, false);
	test_print_hex((unsigned int) 3000000000, true);
	test_print_hex((unsigned int) 3000000000, false);
	test_print_hex((unsigned int) UINT_MAX, true);
	test_print_hex((unsigned int) UINT_MAX, false);
}
