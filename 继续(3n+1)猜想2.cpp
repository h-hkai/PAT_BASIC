#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
 int a[300],c[9999],d[9999];
 void check(int a)
 {  if(a==1 || a==0) return ;
     if(a%2==1)
     {
         a=(a*3+1)/2;
         c[a]=1;
         check(a);
     }
     else {
        a=a/2;
        c[a]=1;
        check(a);
     }
     return ;
 }
 bool cmp(int a,int b)
 {
     return a<b;
 }
int main()
{
    int n,maxs=0,t=1,num=0,num1=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        check(a[i]);
        maxs=max(a[i],maxs);
    }
    maxs=max(n,maxs);
    sort(a+1,a+n+1,cmp);
    for(int i=maxs;i>=1;i--)
    {   if(a[i]!=0 && c[a[i]]==0)
        {
            d[t]=a[i];
            t++;
        }
    }
    if(n==1)
    {
        printf("%d",a[1]);
    }
    else{
    printf("%d",d[1]);
    for(int i=2;i<t;i++)
    {
        printf(" %d",d[i]);
    }
    }
    return 0;
}

