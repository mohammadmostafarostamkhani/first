#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,sum,av,ma,mi,z=1;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    ma=mi=a;
    sum=a+b+c+d;
    z=a*b*c*d;
    av=sum/4;
    if(ma<b)
        ma=b;
    if(ma<c)
        ma=c;
    if(ma<c)
        ma=c;
    if(ma<d)
        ma=d;





    if(mi>b)
        mi=b;
    if(mi>c)
        mi=c;
    if(mi>c)
        mi=c;
    if(mi>d)
        mi=d;



    printf("Sum : %.6lf\n",sum);
    printf("Average : %.6lf\n",av);
    printf("Product : %.6lf\n",z);
    printf("MAX : %.6lf\n",ma);
    printf("MIN : %.6lf",mi);
    return 0;
}
