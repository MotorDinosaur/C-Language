# include <stdio.h>
void Init (struct st * p)  
{
        int a=100;
        char ch=a;
        double c=100.12;
}
struct st 
{
        int a;
        char ch;
        double c;
};
void Print (const struct st* temp)
{
        printf("%d %c %f",temp->a,temp->ch,temp->c);
}
int main (void)
{
        struct st s = {0};
        Init(&s);
        Print(&s);
        return 0;
}   /*
--------------------------------
结构体传值.c:2:19: warning: 'struct st' declared inside parameter list will not be visible outside of this definition or declaration
    2 | void Init (struct st * p)
      |                   ^~
结构体传值.c: In function 'main':
结构体传值.c:21:14: warning: passing argument 1 of 'Init' from incompatible pointer type [-Wincompatible-pointer-types]
   21 |         Init(&s);
      |              ^~
      |              |
      |              struct st *
结构体传值.c:2:24: note: expected 'struct st *' but argument is of type 'struct st *'
    2 | void Init (struct st * p)
      |            ~~~~~~~~~~~~
-------------------------------------
*/