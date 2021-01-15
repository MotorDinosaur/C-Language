# include <stdio.h>
//通过指针类型控制指针访问的字节数来区别大小端
/*
int text_des (void)
{
    int a=1;
    return *(char*)&a;
}
int main (void)
{
    int ret = text_des ();
    if(ret){
        printf("小端存储\n");
    }
    else{
        printf("大端存储\n");
    }
    return 0;
}*/
int text_des (void)
{
    union Un
    {
        char i;
        int k;
    }u;
    u.k=1;
    return u.i;
}
int main (void)
{
    int ret = text_des ();
    printf("%d",ret);
    if(ret){
        printf("小端存储\n");
    }
    else{
        printf("大端存储\n");
    }

    return 0;
}