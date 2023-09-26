#include "ft_printf.h"

int main(void)
{
	int i;
	char *str = "whatever~~~~";

	i = 0;
	printf("|%+0.5s|\n", str);	
	ft_printf("|%+0.5s|\n", str);	
}
