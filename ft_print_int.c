/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/11 15:35:38 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	ft_print_expected_value(const int n)
{
	int	ret;

	ret = printf("%d", n);
	printf(" (%d)", ret);
	printf(" %s// printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	ft_print_return_value(const int n)
{
	int	ret;

	ret = ft_printf("%d", n);
	printf(" (%d)", ret);
	printf(" %s// ft_printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	test_print_int(const int n, const char *desc)
{
	ft_print_test_desc(desc);
	ft_print_expected_value(n);
	ft_print_return_value(n);
}

int	main(void)
{
	ft_print_test_header("Unit tests for specifiers 'd' and 'i'");
	test_print_int(1, "1");
	test_print_int(16, "16");
	test_print_int(42, "42");
	test_print_int(12345678, "12345678");
	test_print_int(-1, "-1");
	test_print_int(-16, "-16");
	test_print_int(-42, "-42");
	test_print_int(-12345678, "-12345678");
	test_print_int(0, "0");
	test_print_int(INT_MAX, "INT_MAX");
	test_print_int(INT_MIN, "INT_MIN");
	test_print_int(UINT_MAX, "UINT_MAX");
	test_print_int((int) LONG_MAX, "LONG_MAX");
	test_print_int((int) LONG_MIN, "LONG_MIN");
	test_print_int((int) ULONG_MAX, "ULONG_MAX");
}
