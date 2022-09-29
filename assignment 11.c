/* 1
#include<stdio.h>
int lcm(int , int);
int main()
{
    int x,y,s;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    s=lcm(x,y);
    printf("lcm is %d",s);
    return 0;
}
int lcm(int a , int b)
{
    int i;
    for(i=a>b?a:b;i<=a*b;i=i+(a>b?a:b))
         if(i%a==0 && i%b==0)
            break;
         return i;
}*/
/* 2
#include<stdio.h>
int hcf(int , int);
int main()
{
    int x,y,s;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    s=hcf(x,y);
    printf("hcf is %d",s);
    return 0;
}
int hcf(int a , int b)
{
    int i;
    for(i=a>b?a:b;i>=1;i--)
        if(a%i==0 && b%i==0)
            break;
    return i;
}*/
/* 3
#include<stdio.h>
int prime(int);
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=prime(n);
    printf("%d",s);
    return 0;
}
int prime(int a)
{
    int i;
    for(i=2;i<=a;i++)
        if(a%i==0)
        break;
    if(a==i)
        return 1;
    else
        return 0;
}*/
/* 5
#include<stdio.h>
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=2;j<=i;j++)
            if(i%j==0)
            break;
        if(i==j)
            printf("%d  ",j);
    }
}*/
/* 6
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}
void prime(int x , int y)
{
    int i,j;
    for(i=x;i<=y;i++)
    {
        for(j=2;j<=i;j++)
            if(i%j==0)
            break;
        if(i==j)
            printf("%d  ",j);
    }

}*/
/* 7
#include<stdio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int x)
{
    int a=-1,b=1,c=0,i;
    for(i=1;i<=x;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
}*/
/* 9
#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int a)
{
    int i;
    for(i=1;i<=a;i++)
    printf("%d*%d=%d\n",i,i,i*i);
}*/


/* 8
#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int combi(int n , int r)
{
    int a;
    a=fact(n)/(fact(n-r)*fact(r));
    return a;
}
void pascal(int n)
{
    int i,j,k,r;
    for(i=1;i<=n;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>n+1-i && j<=n-1+i &&k)
                {
                    printf("%d",combi(i-1,r));
                    k=0;
                    r++;
                }
            else
              {
                  printf(" ");
                  k=1;

        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    pascal(n);
    return 0;
}*/

#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int main()
{
    int n,i,sum=0;
    printf("enetr a numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(fact(i)/i);
    }
    printf("%d",sum);
    return 0;

}



