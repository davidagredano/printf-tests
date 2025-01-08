/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:00:02 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/08 16:17:32 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	ft_printf_tests(void)
{
	ft_printf("Same args than directives % %\n", "hello", "bye");
	ft_printf("More args than directives %\n", "1", "2");
	//ft_printf("More directives than args % %\n", "1"); // May segfault
	return ;
}

int	main(void)
{
	ft_printf_tests();
}
