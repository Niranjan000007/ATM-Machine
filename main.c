
#include<stdio.h>     //include Libraries.
#include<conio.h>     //include Libraries.

void main()
{
int n,i,pin;     //
int s[10];
int a=1;
char c;
int balance=10000;
int count=0, ncount=0;
int amount=0;
   
for(i=0;i<=2;i++)
   {
printf("\n enter your pin:==");
scanf("%d", &pin);
if(pin!=1234)
{
 printf("wrong pin"); ++ncount;
}
else
{

 do
{
printf("\n BANK OF INDIA");
printf("\n 1.balance inquiry");
printf("\n 2.services");
printf("\n 3.cash withdrawal");
printf("\n 4.mini statement");

printf("\n\n enter your choice:==");
 scanf("%d",&n);

switch(n)
{
case 1:
printf("\n\n\t Balance left in your account is:=%d", balance); break;
break;

case 2:
printf("\n\n\tBank services: \n 1.we provided loans upto 1 1akh at a time. \n 2.other services will be notified later
break;

case 3:
printf("\nEnter the amount to withdrawal:=="); 
printf("\n\n\tAmount should be multiple of 100 or 500 or 2000");
scanf("%d",&amount);
if(amount%100==0 || amount%500==0 || amount%2000)
{
if(balance>=amount+1000)
{
balance-balance-amount;
s[a]=amount;
count++;
a++;
}

else
printf("\nyour account balance is low therefore transaction can not proceed");
}
else
{ printf("\n amount is not the multiple of 100 or 500 or 2000");
}
break;
case 4:
printf("\nyour account mini statement is given below:=="); 
   for(i=1;i<=count; i++)
{
printf("\nIn %d transaction %d amount is deducted from your account", i,s[i]);
}
break;
default:
printf("select a correct option");
}
   //end of switch block.
printf("\n\tfor re-seen options press 'y' otherwise 'n':==");
scanf("%s", &c);
}
while(c=='y');

// end of do while loop.
break;

// break statement is use for break else statement after run one time.
}

}
// end of for Loop block.
if(ncount==3)
printf("\n you attempt your pin more than three times please re insert your card and try again");
//end of void block.
 // then save this code with name.c and compile and run the program.
