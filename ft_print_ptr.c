/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:54:51 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 14:04:14 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	ft_print_expected_value(void *ptr)
{
	int	ret;

	ret = printf("%p", ptr);
	printf(" (%d)", ret);
	printf(" %s// printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	ft_print_return_value(void *ptr)
{
	int	ret;

	ret = ft_printf("%p", ptr);
	printf(" (%d)", ret);
	printf(" %s// ft_printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	test_print_ptr(void *ptr, const char *desc)
{
	ft_print_test_desc(desc);
	ft_print_expected_value(ptr);
	ft_print_return_value(ptr);
}

int	main(void)
{
	char	*ptr;

	ft_print_test_header("Unit tests for specifier 'p'");
	test_print_ptr(ptr = "1", "New pointer 1");
	test_print_ptr(ptr = "2", "New pointer 2");
	test_print_ptr(ptr = "3", "New pointer 3");
	test_print_ptr(ptr = "4", "New pointer 4");
	test_print_ptr(ptr = "5", "New pointer 5");
	test_print_ptr(ptr = "6", "New pointer 6");
	test_print_ptr(ptr = "7", "New pointer 7");
	test_print_ptr(ptr = "8", "New pointer 8");
	test_print_ptr(ptr = "9", "New pointer 9");
	test_print_ptr(NULL, "NULL pointer");
}
