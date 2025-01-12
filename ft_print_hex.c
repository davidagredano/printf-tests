/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 20:16:52 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	test_print_hex(const unsigned int n, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%x", n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%x", n);
	ft_print_return_value(ret, "ft_printf");
}

int	main(void)
{
	ft_print_test_header("Unit tests for specifier 'x'");
	test_print_hex(0, "0");
	test_print_hex(1, "1");
	test_print_hex(15, "15");
	test_print_hex(16, "16");
	test_print_hex(17, "17");
	test_print_hex(42, "42");
	test_print_hex(12345678, "12345678");
	test_print_hex(-1, "-1");
	test_print_hex(-16, "-16");
	test_print_hex(-42, "-42");
	test_print_hex(-12345678, "-12345678");
	test_print_hex(INT_MAX, "INT_MAX");
	test_print_hex(INT_MIN, "INT_MIN");
	test_print_hex(UINT_MAX, "UINT_MAX");
	test_print_hex((unsigned int) LONG_MAX, "LONG_MAX");
	test_print_hex((unsigned int) LONG_MIN, "LONG_MIN");
	test_print_hex((unsigned int) ULONG_MAX, "ULONG_MAX");
}
