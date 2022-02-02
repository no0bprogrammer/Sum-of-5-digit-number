/*Sum of 5-digit number*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,n1,n2,n3,n4,n5,sum=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    sum=sum+n1;
    n2=num%10;
    num=num/10;
    sum=sum+n2;
    n3=num%10;
    num=num/10;
    sum=sum+n3;
    n4=num%10;
    num=num/10;
    sum=sum+n4;
    n5=num%10;
    num=num/10;
    sum=sum+n5;
    printf("Sum is %d",sum);
    return 0;
}
