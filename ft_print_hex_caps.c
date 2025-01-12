/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_caps.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:03:56 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 20:17:40 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	test_print_hex_caps(const unsigned int n, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%X", n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%X", n);
	ft_print_return_value(ret, "ft_printf");
}

int	main(void)
{
	ft_print_test_header("Unit tests for specifier 'X'");
	test_print_hex_caps(0, "0");
	test_print_hex_caps(1, "1");
	test_print_hex_caps(15, "15");
	test_print_hex_caps(16, "16");
	test_print_hex_caps(17, "17");
	test_print_hex_caps(42, "42");
	test_print_hex_caps(12345678, "12345678");
	test_print_hex_caps(-1, "-1");
	test_print_hex_caps(-16, "-16");
	test_print_hex_caps(-42, "-42");
	test_print_hex_caps(-12345678, "-12345678");
	test_print_hex_caps(INT_MAX, "INT_MAX");
	test_print_hex_caps(INT_MIN, "INT_MIN");
	test_print_hex_caps(UINT_MAX, "UINT_MAX");
	test_print_hex_caps((unsigned int) LONG_MAX, "LONG_MAX");
	test_print_hex_caps((unsigned int) LONG_MIN, "LONG_MIN");
	test_print_hex_caps((unsigned int) ULONG_MAX, "ULONG_MAX");
}
