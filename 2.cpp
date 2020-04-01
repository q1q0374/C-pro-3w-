#include<stdio.h>
#include<conio.h>

int main(void) {
	int x;
	x=1000;
    char c;
    while (1) {
            c = getch();   
            if (c == -32) {           
                c = getch();        
                switch (c) {           
                case 72:
                	x++;
                    printf("%d\n",x);
                    break;
                case 80:
                	x--;
                    printf("%d\n",x);
                    break;
                case 75:
                	x=x-10;
                    printf("10씩 감소됩니다  %d\n",x);
                    break;
                case 77:
                	x=x+10; 
                    printf("10씩 더해집니다%d\n",x);
                    break;
                }
            }
    }
    return 0;
}

