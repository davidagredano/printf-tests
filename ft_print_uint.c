/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 20:14:38 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	test_print_uint(const unsigned int n, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%u", n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%u", n);
	ft_print_return_value(ret, "ft_printf");
}

int	main(void)
{
	ft_print_test_header("Unit tests for specifier 'u'");
	test_print_uint(1, "1");
	test_print_uint(16, "16");
	test_print_uint(42, "42");
	test_print_uint(12345678, "12345678");
	test_print_uint(-1, "-1");
	test_print_uint(-16, "-16");
	test_print_uint(-42, "-42");
	test_print_uint(-12345678, "-12345678");
	test_print_uint(0, "0");
	test_print_uint(INT_MAX, "INT_MAX");
	test_print_uint(INT_MIN, "INT_MIN");
	test_print_uint(UINT_MAX, "UINT_MAX");
	test_print_uint((unsigned int) LONG_MAX, "LONG_MAX");
	test_print_uint((unsigned int) LONG_MIN, "LONG_MIN");
	test_print_uint((unsigned int) ULONG_MAX, "ULONG_MAX");
}
