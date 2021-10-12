#include <stdio.h>
int fun(int z, int o , int t)
{
    if(z==0 && o!=0 && t!=0)
        return 0;
    if(z!=0 && t==0 && o==0)
        return 0;
    if(t+o+1<z)
        return 0;
    return 1;

}
void  main()
{
    int time,n,a,z,o,t;
    scanf("%d",&time);
    while(time--)
    {
        scanf("%d",&n);
        z=0;
        o=0;
        t=0;
        while(n--)
        {
            scanf("%d",&a);
            if(a%3==0)
                z++;
            else if(a%3==1)
                o++;
            else
                t++;
        }
        if(fun(z,o,t)==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
    

