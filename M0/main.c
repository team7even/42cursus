#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	test = 'A';

	printf("is_alpha('%c'): %d\n", test, ft_isalpha(test));
    //printf("is_digit('%c'): %d\n", test, ft_isdigit(test));
    printf("is_lower('%c'): %d\n", test, ft_islower(test));
    printf("is_upper('%c'): %d\n", test, ft_isupper(test));
    //printf("is_space('%c'): %d\n", test, is_space(test));

    return (0);
}