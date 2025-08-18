#include <stdio.h>
#include <stdlib.h>   // for standard atoi
#include <limits.h>   // for INT_MAX and INT_MIN

// Prototypes from your libft
int ft_atoi(const char *str);

int main(void)
{
    char *tests[] = {
        "2147483647",       // INT_MAX
        "-2147483648",      // INT_MIN
        "999999999999999",  // overflow (undefined in your code, just test)
        "42abc",            // number followed by letters
        "9223372036854775807",
        "abc42",            // letters first (should return 0)
        "",                 // empty string
        NULL                // sentinel to stop loop
        
    };

    for (int i = 0; tests[i] != NULL; i++)
    {
        int result = ft_atoi(tests[i]);
        int result2 = atoi(tests[i]);   // now standard atoi works
        printf("ft_atoi(\"%s\") = %d\n", tests[i], result);
        printf("atoi(\"%s\") = %d\n", tests[i], result2);
    }

    printf("\nSystem INT_MAX = %d\n", INT_MAX);
    printf("System INT_MIN = %d\n", INT_MIN);

    return 0;
}
