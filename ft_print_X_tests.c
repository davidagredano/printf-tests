/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:03:56 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/13 12:58:36 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_X_test(unsigned int n, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%X", n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%X", n);
	ft_print_return_value(ret, "ft_printf");
}

void	ft_print_X_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'X'");
	ft_print_X_test(0, "0");
	ft_print_X_test(1, "1");
	ft_print_X_test(15, "15");
	ft_print_X_test(16, "16");
	ft_print_X_test(17, "17");
	ft_print_X_test(42, "42");
	ft_print_X_test(12345678, "12345678");
	ft_print_X_test(-1, "-1");
	ft_print_X_test(-16, "-16");
	ft_print_X_test(-42, "-42");
	ft_print_X_test(-12345678, "-12345678");
	ft_print_X_test(INT_MAX, "INT_MAX");
	ft_print_X_test(INT_MIN, "INT_MIN");
	ft_print_X_test(UINT_MAX, "UINT_MAX");
	ft_print_X_test((unsigned int) LONG_MAX, "LONG_MAX");
	ft_print_X_test((unsigned int) LONG_MIN, "LONG_MIN");
	ft_print_X_test((unsigned int) ULONG_MAX, "ULONG_MAX");
	printf("\n\n");
}
