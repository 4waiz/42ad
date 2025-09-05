#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// --- helpers for list bonus ---
static void del(void *p) { free(p); }
static void print_str(void *p) { printf("%s ", (char *)p); }
static void *to_upper(void *p) {
    char *s = (char *)p;
    char *copy = strdup(s);
    for (int i = 0; copy[i]; i++)
        if (copy[i] >= 'a' && copy[i] <= 'z')
            copy[i] -= 32;
    return copy;
}

int main(void)
{
    /* ------------ PART 1 (ctype + mem + str basics) ------------ */
    printf("isalpha('A')=%d, isdigit('5')=%d, isalnum('@')=%d\n",
           ft_isalpha('A'), ft_isdigit('5'), ft_isalnum('@'));
    printf("isascii(200)=%d, isprint(' ')=%d\n",
           ft_isascii(200), ft_isprint(' '));
    printf("toupper('z')=%c, tolower('H')=%c\n",
           ft_toupper('z'), ft_tolower('H'));

    char buf[10] = "abcdef";
    ft_bzero(buf+2, 2); printf("bzero: %s\n", buf);
    ft_memset(buf, 'X', 3); printf("memset: %s\n", buf);
    char dst[10]; ft_memcpy(dst,"hello",6); printf("memcpy: %s\n",dst);
    char ov[20]="123456789"; ft_memmove(ov+2,ov,5); printf("memmove overlap:%s\n",ov);
    printf("memchr:%s\n",(char*)ft_memchr("abcde",'c',5));
    printf("memcmp:%d\n",ft_memcmp("abc","abd",3));
    printf("atoi(\"-42\")=%d\n",ft_atoi(" -42"));

    /* ------------ PART 2 (alloc + str advanced) ------------ */
    char *sdup = ft_strdup("Hello"); printf("strdup: %s\n", sdup); free(sdup);
    char *sjoin = ft_strjoin("foo","bar"); printf("strjoin: %s\n", sjoin); free(sjoin);
    char *smap = ft_strmapi("abc",[](unsigned i,char c){return (i%2)?c-32:c;});
    printf("strmapi: %s\n",smap); free(smap);
    char s1[10]; ft_strlcpy(s1,"longstring",sizeof(s1));
    printf("strlcpy: %s\n",s1);
    char *sub = ft_substr("substring",3,4); printf("substr: %s\n",sub); free(sub);
    char *trim = ft_strtrim("   hello!!  "," !"); printf("trim: %s\n",trim); free(trim);
    char **split = ft_split("a,b,c",','); for(int i=0;split[i];i++){printf("split[%d]=%s\n",i,split[i]);free(split[i]);} free(split);
    char *itoa = ft_itoa(-123); printf("itoa: %s\n",itoa); free(itoa);

    // put* functions
    ft_putstr_fd("putstr_fd",1); ft_putchar_fd('\n',1);
    ft_putendl_fd("putendl_fd",1);
    ft_putnbr_fd(1234,1); ft_putchar_fd('\n',1);

    // strchr/strrchr/strncmp/strnstr
    printf("strchr:%s\n",ft_strchr("hello",'l'));
    printf("strrchr:%s\n",ft_strrchr("hello",'l'));
    printf("strncmp:%d\n",ft_strncmp("abc","abd",3));
    printf("strnstr:%s\n",ft_strnstr("42 network","net",10));

    /* ------------ BONUS (linked list) ------------ */
    t_list *list=NULL;
    ft_lstadd_back(&list, ft_lstnew(strdup("world")));
    ft_lstadd_front(&list, ft_lstnew(strdup("hello")));
    ft_lstadd_back(&list, ft_lstnew(strdup("42")));
    printf("lstsize=%d, last=%s\n",ft_lstsize(list),(char*)ft_lstlast(list)->content);
    printf("iter: "); ft_lstiter(list,print_str); printf("\n");

    t_list *upper = ft_lstmap(list,to_upper,del);
    printf("map: "); ft_lstiter(upper,print_str); printf("\n");

    ft_lstclear(&list,del);
    ft_lstclear(&upper,del);

    return 0;
}
