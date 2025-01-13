/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 12:54:51 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/13 12:57:44 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_p_test(const void *ptr, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%p", ptr);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%p", ptr);
	ft_print_return_value(ret, "ft_print_printf");
}

void	ft_print_p_tests(void)
{
	char	*ptr;

	ft_print_test_header("Unit tests for specifier 'p'");
	ft_print_p_test(ptr = "1", "New pointer 1");
	ft_print_p_test(ptr = "2", "New pointer 2");
	ft_print_p_test(ptr = "3", "New pointer 3");
	ft_print_p_test(ptr = "4", "New pointer 4");
	ft_print_p_test(ptr = "5", "New pointer 5");
	ft_print_p_test(ptr = "6", "New pointer 6");
	ft_print_p_test(ptr = "7", "New pointer 7");
	ft_print_p_test(ptr = "8", "New pointer 8");
	ft_print_p_test(ptr = "9", "New pointer 9");
	ft_print_p_test(NULL, "NULL pointer");
	printf("\n\n");
}
