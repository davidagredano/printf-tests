/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/09 17:09:13 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_print_percent(void)
{
	ft_putstr_fd("ft_print_percent: param=", STDOUT_FILENO);
	ft_putchar_fd('%', STDOUT_FILENO);
	ft_putstr_fd(", outputs=", STDOUT_FILENO);
	int	ret = ft_print_percent();
	ft_putstr_fd(", returns=", STDOUT_FILENO);
	ft_putnbr_fd(ret, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
}

int	main(void)
{	
	test_print_percent();
}
