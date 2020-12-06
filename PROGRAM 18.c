#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
    int num;
    printf("ENTER A NUMBER : ");
    scanf("%d",&num);
    int r;int temp;
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        temp=temp/10;
        switch(r)
        {
            case 1:
            a++;
            break;
            case 2:
            b++;
            break;
            case 3:
            c++;
            break;
            case 4:
            d++;
            break;
            case 5:
            e++;
            break;
            case 6:
            f++;
            break;
            case 7:
            g++;
            break;
            case 8:
            h++;
            break;
            case 9:
            i++;
            break;
            case 0:
            j++;
            break;
        }
    }
        printf("THE ORIGINAL NUMBER IS : %d\n ",num);
       if(a>0)
       printf("THE FREQUENCY OF 1 IS : %d\n",a);
       if(b>0)
       printf("THE FREQUENCY OF 2 IS : %d\n",b);
       if(c>0)
       printf("THE FREQUENCY OF 3 IS : %d\n",c);
       if(d>0)
       printf("THE FREQUENCY OF 4 IS : %d\n",d);
       if(e>0)
       printf("THE FREQUENCY OF 5 IS : %d\n",e);
       if(f>0)
       printf("THE FREQUENCY OF 6 IS : %d\n",f);
       if(g>0)
       printf("THE FREQUENCY OF 7 IS : %d\n",g);
       if(h>0)
       printf("THE FREQUENCY OF 8 IS : %d\n",h);
       if(i>0)
       printf("THE FREQUENCY OF 9 IS : %d\n",i);
       if(j>0)
       printf("THE FREQUENCY OF 0 IS : %d\n",j);
       
    return 0;
}