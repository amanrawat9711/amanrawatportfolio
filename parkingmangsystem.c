#include<stdio.h>
#include<stdlib.h>
int nob=0,noc=0,nor=0,amount=0,count=0; // number of bus rikshaw and cycle
  // amount for bus 100 , riskhaw 50 , cycle 20
  int menu(){
    int choice;
    printf("enter 1 for bus\n");
    printf("enter 2 for rikshaw\n");
    printf("enter 3 for cycle\n");
    printf("enter 4 for show status\n");
    printf("enter 5 for delete data\n");
    printf("enter 6 to exit");
    printf("\n\nenter your choice\n\n");
  scanf("%d",&choice);
  return choice;
  }
  void showdetails(){
   printf("number of cycle %d\n",noc);
   printf("number of bus %d\n",nob);
   printf("number of rikshaw %d\n",nor);
   printf("total vehicles %d\n",count);
   printf("total amount gained %d\n",amount);
  }
  void delete(){
    noc=0;
    nob=0;
    nor=0;
    count=0;
    amount=0;
  }
void bus(){
    printf("entry successfull\n");
    nob++;
    amount=amount+100;
    count++;
}
void rikshaw(){
    printf("entry successfull\n");
    nor++;
    amount=amount+50;
    count++;
}
void cycle(){
    printf("entry successfull\n");
    noc++;
    amount=amount+20;
    count++;
}
int main()
{ 
    while (1){
    int choice = menu();

  switch(choice)
  {
    case 1:
    bus();
    break;
  
  case 2:
  rikshaw();
  break;

   case 3:
  cycle();
  break;

   case 4:
  showdetails();
  break;
  

   case 5:
  delete();
  break;

   case 6:
   exit(0);


  default :
  printf("enter a valid number");
  }
 }
return 0;
}