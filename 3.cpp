#include<stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	printf("메뉴 1.사칙연산 2. 로그연산 3.종료 숫자입력하시오");
	scanf("%d",&x);
	

	  
	if(x==1)
	{
		
		printf("1.덧셈 2.뺼셈 3.곱셈 4.나눗셈 5.나머지연산 6.메인메뉴이동");
		scanf("%d",&x);
		if(x==1)
		{
			int a,b;
			scanf("%d %d",&a, &b);
			printf("%d + %d = %d",a,b,a+b);
		 } 
		 else if(x==2)
		 {
		 	int a,b;
			scanf("%d %d",&a, &b);
			printf("%d - %d = %d",a,b,a-b);
		 }
		  else if(x==3)
		 {
		 	int a,b;
			scanf("%d %d",&a, &b);
			printf("%d * %d = %d",a,b,a*b);
		 }
		  else if(x==4)
		 {
		 	int a,b;
			scanf("%d %d",&a, &b);
			printf("%d / %d = %d",a,b,a/b);
		 }
		  else if(x==5)
		 {
		 	int a,b;
			scanf("%d %d",&a, &b);
			printf("%d % %d = %d",a,b,a%b);
		 }
		 else
		 {	
		 //메인메뉴 돌아가 
		 } 
	}
	else if(x==2)
	{
	   printf("1.자연로그연산 덧셈 2.상용로그연산 덧셈 3 메인메뉴");
	   scanf("%d",&x);
	   int a,b;
	   if(x==1)
	   {
			scanf("%d %d",&a, &b);
			printf("ln%d + ln%d = ln%d",a,b,a*b);
	   } 
	   else if(x==2)
	   {
	   		scanf("%d %d",&a, &b);
			printf("log%d + log%d = ln%d",a,b,a*b);
		} 
       else
       {
       	//메인메뉴 
	   }
	} 
	else
	{
		printf("잘못된 숫자입니다.");
	}




}
