/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/11 20:35:35 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	ft_print_expected_value(const unsigned int n)
{
	int	ret;

	ret = printf("%u", n);
	printf(" (%d)", ret);
	printf(" %s// printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	ft_print_return_value(const unsigned int n)
{
	int	ret;

	ret = ft_printf("%u", n);
	printf(" (%d)", ret);
	printf(" %s// ft_printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	test_print_uint(const unsigned int n, const char *desc)
{
	ft_print_test_desc(desc);
	ft_print_expected_value(n);
	ft_print_return_value(n);
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
