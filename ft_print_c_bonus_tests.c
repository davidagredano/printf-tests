/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/14 13:24:18 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_c_bonus_test(const char *spec, const char *desc)
{
	int		ret;
	char	*full_desc;

	full_desc = ft_strjoin(spec, desc);
	ft_print_test_desc(full_desc);
	ret = printf(spec, 'O', 'O', 'O', 'O', 'O', 'O');
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, 'O', 'O', 'O', 'O', 'O', 'O');
	ft_print_return_value(ret, "ft_printf");
	free(full_desc);
}

void	ft_print_c_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'c' with bonus");
	ft_print_c_bonus_test("|%c|%#c|%0c|%-c|% c|%+c|", " // Flags");
	ft_print_c_bonus_test("|%6c|%#6c|%06c|%-6c|% 6c|%+6c|", " // Field width");
	ft_print_c_bonus_test("|%.6c|%#.6c|%0.6c|%-.6c|% .6c|%+.6c|", " // Precision");
	ft_print_c_bonus_test("|%6.3c|%#6.3c|%06.3c|%-6.3c|% 6.3c|%+6.3c|", " // Field width > precision");
	ft_print_c_bonus_test("|%3.6c|%#3.6c|%03.6c|%-3.6c|% 3.6c|%+3.6c|", " // Field width < precision");
	printf("\n\n");
}
