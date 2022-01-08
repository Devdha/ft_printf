#include "ft_printf.h"
#include <stdio.h>

int main()
{
    printf("c test : %d, %d\n", ft_printf("%c\n", 'f'), printf("%c\n", 'f'));

    printf("---------------------------------------\n");
    printf("s test : %d, %d\n", ft_printf("%s\n", "aaaaaaa"), printf("%s\n", "ahahah"));

    printf("---------------------------------------\n");
    printf("d test : %d, %d\n", ft_printf("%d\n", 12345), printf("%d\n", 12345));

    printf("---------------------------------------\n");
    printf("ll overflow test : %d, %d\n", ft_printf("%d\n", 9223372036854775820), printf("%d\n", 9223372036854775820));

    printf("---------------------------------------\n");
    printf("u test 1 : %d, %d\n", ft_printf("%u\n", -12345), printf("%u\n", -12345));
    printf("u test 2 : %d, %d\n", ft_printf("%u\n", 12345), printf("%u\n", 12345));
    printf("u test 3 : %d, %d\n", ft_printf("%u\n", 2147483648), printf("%u\n", 2147483648));
    printf("u test 4 : %d, %d\n", ft_printf("%u\n", 4294967297), printf("%u\n", 4294967297));

    printf("---------------------------------------\n");
    printf("p test 1 : %d, %d\n", ft_printf("%p\n", 92233720368), printf("%p\n", 92233720368));
    printf("p test 2 : %d, %d\n", ft_printf("%p\n", 922337203685477582), printf("%p\n", 922337203685477582));
    printf("p test 3 : %d, %d\n", ft_printf("%p\n", "12345"), printf("%p\n", "12345"));

    printf("---------------------------------------\n");
    printf("x test 1 : %d, %d\n", ft_printf("%x\n", 92233720368), printf("%x\n", 92233720368));
    printf("x test 2 : %d, %d\n", ft_printf("%x\n", 92233720368547758200), printf("%x\n", 92233720368547758200));
    printf("x test 3 : %d, %d\n", ft_printf("%x\n", "12345"), printf("%x\n", "12345"));

    printf("---------------------------------------\n");
    printf("X test 1 : %d, %d\n", ft_printf("%X\n", 92233720368), printf("%X\n", 92233720368));
    printf("X test 2 : %d, %d\n", ft_printf("%X\n", 922337203685477582), printf("%X\n", 922337203685477582));
    printf("X test 3 : %d, %d\n", ft_printf("%X\n", "12345"), printf("%X\n", "12345"));

    system("leaks a.out");
}