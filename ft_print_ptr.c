/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:27:12 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/09 16:59:54 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_print_ptr(void *ptr)
{
	ft_putstr_fd("ft_print_ptr: param=", STDOUT_FILENO);
	ft_putnbr_fd((long) ptr, STDOUT_FILENO); // bug: works with int only
	ft_putstr_fd(", outputs=", STDOUT_FILENO);
	int	ret = ft_print_ptr(ptr);
	ft_putstr_fd(", returns=", STDOUT_FILENO);
	ft_putnbr_fd(ret, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

int	main(void)
{	
	void *ptr1;
	test_print_ptr(ptr1);
	void *ptr2;
	test_print_ptr(ptr2);
	void *ptr3;
	test_print_ptr(ptr3);
	void *ptr4;
	test_print_ptr(ptr4);
	void *ptr5;
	test_print_ptr(ptr5);
	void *ptr6;
	test_print_ptr(ptr6);
	void *ptr7;
	test_print_ptr(ptr7);
	void *ptr8;
	test_print_ptr(ptr8);
	void *ptr9;
	test_print_ptr(ptr9);
	test_print_ptr(NULL);
}
