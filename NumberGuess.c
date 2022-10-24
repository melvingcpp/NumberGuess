#include <stdio.h>

//prompt user to input a number between 1-3
int main(){
    int playing = 1;
    int guessing = 1;
    int changing = 1;
    int firstinput;
    int secondinput;
    int number = 5;

    while (playing == 1){
        printf("Input a number between 1-3:\n");
        printf("1 = Play game\n");
        printf("2 = change number\n");
        printf("3 = quit\n");

        scanf("%d", &firstinput);
//if 1 is selected, prompt user to enter a number to guess
        if (firstinput == 1){
            while (guessing == 1){
                printf("Enter your guess!\n");
                scanf("%d", &secondinput);
                if (secondinput > number){
                    printf("Too high!\n");
                }
                else if (secondinput < number){
                    printf("Too low!\n");
                }
                else if (secondinput == number){
                    printf("Correct!Congrats!\n");
                    guessing = 0;
                }
                else if (secondinput == 'q'){
                    printf("Program exited\n");
                    guessing = 0;
                }
            }
        }
        //if 2 is selected, promt user to enter a value
        else if (firstinput == 2){
            while (changing == 1){
                printf("Enter new number. Cannot be negative or greater than 10\n");
                scanf("%d", &number);
                if(number > 0 && number <= 10){
                    changing = 0;
                }
            }
        }
        //if 3 is selected, end program
        else if (firstinput == 3){
            playing = 0;
        }
        guessing = 1;
        changing = 1;
    }
    //playing = 1;
    return 0;
}
