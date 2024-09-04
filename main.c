#include<stdio.h>

int main()
{
   char card;
   int n;
   int p;
   int a;
   int b;
   int diff;
   int i;
   char cad;
   printf("Welcome to ATM\n");
   printf("please insert your card\n");
   scanf("%c",&card);
   if(card=="k")
{ 
printf("Hello Ken Keneki\n\n");
printf(">Press 1 to withdrawal the money from your account\n\n");
printf(">Press 2 to check the balance\n\n");
b = 50000;
scanf("%d", &n);
if(n==1)
{
printf("Please enter your 4-digit pin: \n");
scanf("%d", &p);
if(p==1234) {
printf("Enter the amount to be withdrawal : \n"); 
scanf("%d", &a);
if(a>b)
{
printf("insufficient");
}
else {
printf("Collect the money\n\n");
 diff = b-a;
printf("Now, your bank balance is %d", diff);
}
} else {
printf("incorrect pin\n\n");
printf("please try again\n\n");  
scanf("%d", &p);
if(p==1234)
{
printf("enter the amunt to be withdrawal : \n"); scanf("%d", &a);
if(a>b)
{
printf("insufficient");
}
else {
printf("collect the money\n\n");
diff = b-a;
printf("now, your bank balance is %d", diff);
}}
else
{
printf("your request has been blocked\n");
printf("so please try again");
}
}
}
else if(n==2)  
{
printf("please enter your 4-digit pin: \n"); scanf("%d", &p);
if(p!=1234) {
printf("please try again\n\n");
scanf("%d", &p);
if(p!=1234)
{
printf("your request has been blocked\n");
print("so, please try again");
   
   
return 0;
}
