# include <stdio.h>
# include <assert.h>
char* my_strcpy(char* dest , char* sour)
{
        assert(dest != NULL);
        assert(sour !=NULL);
        /*while(*sour !='\0')
        {
                *dest = *sour;
                dest++;
                sour++;
        }
        *dest =*sour;//将'\0'赋给dest+
        */
        while(*dest++ =*sour++) 
                ;
        return dest;
}
int main (void)
{
        char arr1[] = "abcdef";
        char arr2[] = "woc woc woc";
        my_strcpy(arr1,arr2);
        printf("%s\n",arr1);

        return 0;
}