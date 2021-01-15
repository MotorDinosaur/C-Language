# include <stdio.h>
struct stu
{
        char ch;
        int i;
        double k;
};
struct str
{
        char cha;
        double n;
        int j;        
};

int main (void)
{
        struct stu s1 = {0};
        printf("%d\n",sizeof(s1));
        struct str s2 = {0};
        printf("%d\n", sizeof(s2));
        
        return 0;
}