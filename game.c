#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
int main()
{
int n,ran,c=0;
int user=0,com=0;
randomize();
clrscr();
textcolor(RED+BLINK);
cprintf("================================================================================\n");
textcolor(GREEN);
cprintf("*******************  Welcome to Stone , Paper and Scissors!  *******************\n");
textcolor(RED+BLINK);
cprintf("================================================================================\n");
textcolor(YELLOW);
while(1){
printf("\nChoose your move : \n");
printf("1. Stone\n");
printf("2. Paper\n");
printf("3. Scissors\n");
printf("4. No Sound\n");
printf("5. For Sound and change the sound\n");
printf("0. Exit\n");
printf("Enter your choice (0-5) : ");
scanf("%d",&n);
switch(n){
case 5:
{
c=c+100;
sound(c);
delay(100);
continue;
}
}
if(n==4)
{
nosound();
continue;
}
else if(n==0){
printf("\nGame Over. Final Scores : \n");
printf("Your Score: %d\n",user);
printf("Computer Score : %d\n",com);
break;
}
else if(n<0&&n>=5)
{
printf("Invalid choice. Please enter a number between 0 and 5 . \n");
continue;
}
ran=random(3)%3+1;
printf("You chose : ");
switch(n){
case 1:
printf("Stone.\n");
break;
case 2:
printf("Paper.\n");
break;
case 3:
printf("Scissors.\n");
break;
}
printf("Computer chose : ");
switch(ran){
case 1:
printf("Stone.\n");
break;
case 2:
printf("Paper.\n");
break;
case 3:
printf("Scissors.\n");
break;
}
if((n==1 && ran ==3)||(n==2 && ran==1)||(n==3 && ran==2))
{
printf("Wow! You won this Round\n");
user++;
}
else if((ran==1 && n==3)||(ran==2 && n==1)||(ran==3 && n==2))
{
printf("You loss! Computer win this Round\n");
com++;
}
else
{
printf("It's a draw!\n");
}
}
getch();
return 0;
}