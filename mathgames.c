 #include <stdio.h>
   #include <stdlib.h>
   int main (void)

    {
    int i;
    int response;
    float usrpercentage;
    float percentage = 0.0;
    int correctAnswers = 0;
    int incorrectAnswers = 0;

    printf("\nMath Quiz\n");
    printf("Please enter # of problems you would wish to try:");
    scanf("%d", &response);
    printf("Please enter the minimum percentage of the problems you want to get correct: ");
    scanf("%f", &usrpercentage);
    if(response == 0)
    {
        printf("\nThanks for playing!\n");
        return 0;
    }
while (percentage<usrpercentage)
{
    for(i=0; i<response; i++)
    {
        int answer = 0;
        int a = rand() % 12;
        int b = rand() % 12;
        printf("\n%d * %d = ",a ,b);
        scanf("%d", &answer);
        if((a * b) == answer){
            printf("\nCongratulations You are correct!\n");
            correctAnswers++;
        }
        else{
            printf("Sorry you were incorrect!\n");
            incorrectAnswers++;
        }
          }
    
    printf("\n\nYour Results:\n\n\n");
    printf("Number Incorrect: %d\n", incorrectAnswers);
    printf("Number Correct: %d\n", correctAnswers);
    if(100*correctAnswers/response >= usrpercentage){
        printf("You Passed!\nGood work!\n\n");
    }
    else{
        printf("You did not pass!\nYou need more work!\n\n");
    }  
    percentage = 100*correctAnswers/response;
    printf("%f", percentage);

}


    return 0;
}
