/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:00:16 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 16:59:38 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	test_putstr(char *s)
{
	int	ret;

	ret = ft_putstr(s);
	printf(" | ret=%d\n", ret);
}

int	main(void)
{
	test_putstr("Hello");
	test_putstr("Bye Bye");
	test_putstr("This is a string.");
}
