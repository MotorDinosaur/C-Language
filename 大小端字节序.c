# include <stdio.h>
//ͨ��ָ�����Ϳ���ָ����ʵ��ֽ����������С��
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
        printf("С�˴洢\n");
    }
    else{
        printf("��˴洢\n");
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
        printf("С�˴洢\n");
    }
    else{
        printf("��˴洢\n");
    }

    return 0;
}