/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 15:07:26 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 20:11:35 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	ft_print_test_header(const char *str)
{
	size_t	size;
	size_t	i;

	size = strlen(str);
	printf("%s", CYAN);
	i = 0;
	while (i++ < size)
		printf("*");
	printf("\n%s\n", str);
	i = 0;
	while (i++ < size)
		printf("*");
	printf("%s\n", COLOR_RESET);
}

void	ft_print_test_desc(const char *str)
{
	printf("\n%s%s%s\n", CYAN, str, COLOR_RESET);
}

void	ft_print_return_value(int val, const char *function)
{
	printf(" (%d)", val);
	printf(" %s// %s (return value)%s\n", GRAY, function, COLOR_RESET);
}
