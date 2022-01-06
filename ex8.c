\\Q1

#include <stdio.h>
int main()
{
  int sumz=0;
  int sumi=0;
 int a,i=1;
 scanf("%d",&a);
 while(i<=10)
 {
     if(a%2==0)
     {
         sumz+=a;
     }
         else
         {
             sumi+=a;
         }
         i++;
     scanf("%d",&a);    
 }
 printf("sum positive number is :%d\nsum unpositive numbers is:%d",sumz,sumi);

}

\\Q2
#include <stdio.h>
int main()
{
  int sumz=0;
  int sumi=0;
 int a,i=0;
 while(i<10)
 {
     scanf("%d",&a);
     if(a>=0)
     {
         sumz+=1;
     }
         else
         {
             sumi+=1;
         }
         i++;
 }
 printf("sum positive number is :%d\nsum unpositive numbers is:%d",sumz,sumi);

}

\\Q3

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int diff=0;
 int agew,agem,i=0;
 do{
      scanf("%d %d",&agew ,&agem);
     diff=abs(agew-agem);
     i++;
 printf("the age diffetent is :%d",diff);
 }
    while(i<10);
}
\\Q4

#include <stdio.h>

int main()
{
  int diff=0;
 int num1,num2,i=0;
 do{
      scanf("%d %d",&num1 ,&num2);
     if(num1>num2)
        printf("the smallest is:%d",num2);
     else if(num1==num2)
            printf("they are equal");
     else
     printf("the smallest is:%d\n",num1);
     i++;
     }
    while(i<5);
}
\\Q5

#include <stdio.h>

int main()
{
 int num,i=2,sum=0;
 scanf("%d",&num);
 for(i=2;i<num;i++){
     if(num%i==0){
         printf("%d\n",i);
         sum+=1;
     }
 }
     if(sum=0){
         printf("%d is primary number", num);
     }
 }

\\Q6

#include <stdio.h>

int main()
{
    int num1,num2, i,sum=0;
    scanf("%d %d", &num1,&num2);
    for(i=100;i<1000;i++){
        if((i%num1==0)&& (i%num2==0)){
        printf("%d\t",i);
        sum+=1;
        }
    }
 
if(sum==0){
printf("not working");
}
}

\\Q7

	int num,count=2,sum=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	while (num!=1)
	{
		if (num%count==0)
		{
		num=num/count;
		sum=count;
		printf("%d\t",sum);
		}
		else 
		{
		count++;
	    }
    }
        \\Q8

int main(){
    int n,i;
        printf("enter a num : ");
        scanf("%d",&n);
        while (n) {
            for (i=7; i>=0; i--) {
                if (n<pow(2,i))
                printf("0");
                else{
                    printf("1");
                    n = n-pow(2,i);
                }
        }
    }
    }