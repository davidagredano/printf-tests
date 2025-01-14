/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/14 21:48:14 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_u_bonus_test(const char *spec, const char *desc)
{
	int				ret;
	char			*full_desc;
	unsigned int	u;

	u = 123456;
	full_desc = ft_strjoin(spec, desc);
	ft_print_test_desc(full_desc);
	ret = printf(spec, u, u, u, u, u, u);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, u, u, u, u, u, u);
	ft_print_return_value(ret, "ft_printf");
	free(full_desc);
}

void	ft_print_u_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'u' with bonus");
	ft_print_u_bonus_test("|%u|%#u|%0u|%-u|% u|%+u|", " // Flags");
	ft_print_u_bonus_test("|%8u|%#8u|%08u|%-8u|% 8u|%+8u|", " // Field width 8 > strlen 6");
	ft_print_u_bonus_test("|%2u|%#2u|%02u|%-2u|% 2u|%+2u|", " // Strlen 6 > Field width 2");
	ft_print_u_bonus_test("|%.8u|%#.8u|%0.8u|%-.8u|% .8u|%+.8u|", " // Precision 8 > Strlen 6");
	ft_print_u_bonus_test("|%.2u|%#.2u|%0.2u|%-.2u|% .2u|%+.2u|", " // Strlen 6 > Precision 2");
	ft_print_u_bonus_test("|%7.3u|%#7.3u|%07.3u|%-7.3u|% 7.3u|%+7.3u|", " // Field width 7 > Strlen 6 > Precision 3");
	ft_print_u_bonus_test("|%3.8u|%#3.8u|%03.8u|%-3.8u|% 3.8u|%+3.8u|", " // Precision 8 > Strlen 6 > Field width 3");
	ft_print_u_bonus_test("|%3.4u|%#3.4u|%03.4u|%-3.4u|% 3.4u|%+3.4u|", " // Strlen 6 > Precision 4 > Field width 3");
	ft_print_u_bonus_test("|%9.7u|%#9.7u|%09.7u|%-9.7u|% 9.7u|%+9.7u|", " // Field width 9 > Precision 7 > Strlen 6");
	ft_print_u_bonus_test("|%2.0u|%#2.0u|%02.0u|%-2.0u|% 2.0u|%+2.0u|", " // Field width 2 > Strlen 6 > Precision 0");
	printf("\n\n");
}
