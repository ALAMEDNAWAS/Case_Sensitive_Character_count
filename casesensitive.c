#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],ch;
    int num,len,count=0;
    scanf("%[^\n] %n",str,&len);
    scanf("%d\n%c",&num,&ch);
    if(ch=='l' || ch=='L')
    {
        ch=num+64;
    }
    else if(ch=='u' || ch=='U')
    {
        ch=num+96;
    }
    for(int index=0;index<len;index++)
    {
        if(str[index] == ch)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("%d",count);
    }
    else
    {
        printf("-1");
    }


}
