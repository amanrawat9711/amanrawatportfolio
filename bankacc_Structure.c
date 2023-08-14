#include<stdio.h>
typedef struct BankAccount{
    int accnumber;
    float balance;
    char accholdername[25];
    char bankacctype; // saving or current account
}ba;
void displayBankAccount(ba acc){
    
    printf("account number is %d\n", acc.accnumber);
    printf("balance is %f\n", acc.balance);
    printf("account holder name is %s\n", acc.accholdername);


      if(acc.bankacctype =='s' || acc.bankacctype =='S'){
    printf("bank account type is saving account\n");
      }
      else if(acc.bankacctype =='c' || acc.bankacctype =='C'){
            printf("bank account type is current account\n");
      }
      else{
        printf("invalid account type\n");
      }
}
int main()
{
ba acc1,acc2;
printf("enter account detail 1\n");
printf("enter the account number\n");
scanf("%d",&acc1.accnumber);
printf("enter the balance\n");
scanf("%f",&acc1.balance);
getchar();
printf("enter the account holder name\n");
gets(acc1.accholdername);
getchar();
printf("enter bank account type (savings or current) type s for saving and c for current\n");
scanf(" %c",&acc1.bankacctype);
getchar();
displayBankAccount(acc1);

printf("\n");




printf("enter account detail 2\n");
printf("enter the account number\n");
getchar();
scanf("%d",&acc2.accnumber);
printf("enter the balance\n");
getchar();
scanf("%f",&acc2.balance);
getchar();
printf("enter the account holder name\n");
gets(acc2.accholdername);
printf("enter bank account type (savings or current) type s for saving and c for current\n");
scanf(" %c",&acc2.bankacctype);
getchar();
displayBankAccount(acc2);
return 0;
}