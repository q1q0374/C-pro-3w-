#include<stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	printf("�޴� 1.��Ģ���� 2. �α׿��� 3.���� �����Է��Ͻÿ�");
	scanf("%d",&x);
	

	  
	if(x==1)
	{
		
		printf("1.���� 2.�E�� 3.���� 4.������ 5.���������� 6.���θ޴��̵�");
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
		 //���θ޴� ���ư� 
		 } 
	}
	else if(x==2)
	{
	   printf("1.�ڿ��α׿��� ���� 2.���α׿��� ���� 3 ���θ޴�");
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
       	//���θ޴� 
	   }
	} 
	else
	{
		printf("�߸��� �����Դϴ�.");
	}




}
