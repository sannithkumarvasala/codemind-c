#include<stdio.h>
void main(){
int select;
float transferamount;
float balance = 100.25;
printf("\n\t ATM\n");
printf("\n1\t Deposit funds\n");
printf("\n2\t withdraw funds\n");
printf("\n enter your selection: ");
scanf("%d", & select);
if(select == 1){
printf("\n enter fund amount to deposit: ");
scanf("%f", & transferamount);
printf("\n your new balance is:\$%.2f", balance+transferamount);
}
if(select == 2){
printf("\n enter fund amount to withdraw: ");
scanf("%f", & transferamount);
if(transferamount > balance)
printf("\n insufficient funds in your account");

else
printf("\n your new balance is \$%.2f", balance - transferamount);


}
}
