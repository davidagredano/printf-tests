/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/11 20:37:28 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	ft_print_expected_value(const unsigned int n)
{
	int	ret;

	ret = printf("%x", n);
	printf(" (%d)", ret);
	printf(" %s// printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	ft_print_return_value(const unsigned int n)
{
	int	ret;

	ret = ft_printf("%x", n);
	printf(" (%d)", ret);
	printf(" %s// ft_printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	test_print_hex(const unsigned int n, const char *desc)
{
	ft_print_test_desc(desc);
	ft_print_expected_value(n);
	ft_print_return_value(n);
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
