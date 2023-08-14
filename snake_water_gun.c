#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char comp_choice , char your_choice){
    // if you win return 1 if comp wins return -1 if match draws then return 0
    if(your_choice== comp_choice){
        return 0;
    }
    else if(your_choice == 'w' && comp_choice == 's'){
    return -1;
    }
     else if(your_choice == 's' && comp_choice == 'w'){
    return 1;
    }
     else if(your_choice == 'g' && comp_choice == 'w'){
    return -1;
    }
     else if(your_choice == 'w' && comp_choice == 'g'){
    return 1;
    }
     else if(your_choice == 's' && comp_choice == 'g'){
    return -1;
    }
     else if(your_choice == 'g' && comp_choice == 's'){
    return -1;
    }
}
int main()
{
char your_choice,comp_choice;
 int num;
    
    srand(time(0)); // Seed the random number generator
    
    // Generate and print 10 random numbers from 1 to 100
    printf("Random numbers from 1 to 100:\n");
    
        num = rand() % 100 + 1;

        if (num<33){
            comp_choice = 's';
        }
        
         else if (num<33){
            comp_choice = 'w';
        }
        else {
            comp_choice = 'g';
        }

printf("enter s for snake w for water g for gun\n");
scanf(" %c", &your_choice);

int result = snakewatergun(comp_choice,your_choice);

if(result == 1){
    printf("you won\n");
}
else if(result == -1){
    printf("computer won\n");
}
else {
    printf("match is draw\n");
}
printf("you chose %c and computer chose %c\n", your_choice,comp_choice);
return 0;
}