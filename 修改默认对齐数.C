# include <stdio.h>
# pragma pack (2)//设置默认对齐数为2
struct stu
{
        char ch;
        int i;
        double k;
};
# pragma pack ()//取消设置的默认对齐数

# pragma pack (8)//设置默认对齐数为8
struct str
{
        char cha;
        double n;
        int j;        
};
# pragma pack ()//取消设置的默认对齐数
int main (void)
{
        struct stu s1 = {0};
        printf("%d\n",sizeof(s1));
        struct str s2 = {0};
        printf("%d\n", sizeof(s2));
        
        return 0;
}