#include <stdio.h> 
#include <stdlib.h> 
int main()
{
int Num1,Num2;
int sum,diff,mul,div,sq;
printf("Enter the Number1: "); 
scanf("%d",&Num1); 
printf("Enter the number2: "); 
scanf("%d",&Num2); 
sum=Num1+Num2;
printf("the sum is: %d \n",sum); 
diff= Num1-Num2;
printf("the difference is: %d \n",diff); 
mul=Num1*Num2;
printf("the multiplication is: %d \n",mul); 
div=Num1/Num2;
printf("the division is: %d \n",div); 
sq=Num1*Num1;
printf("the square is: %d \n",sq); 
return 0;
}
