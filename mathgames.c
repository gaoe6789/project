

   #include <stdio.h>
   #include <stdlib.h>
   int main (void)

    {
    int i;
    int number;
    float usrpercentage;
    float percentage = 0.0;
    int correct = 0;
    int incorrect = 0;

    printf("\nMath Game\n");
    printf("Please enter # of problems you want to answer:");
    scanf("%d", &number);
    printf("Please enter the minimum percentage of the problems you want to get correct: ");
    scanf("%f", &usrpercentage);
    if(number == 0)
    {
        printf("\nBye!\n");
        return 0;
    }
while (percentage<usrpercentage)
{
    for(i=0; i<number; i++)
    {
        int answer = 0;
        int a = rand() % 12;
        int b = rand() % 12;
        printf("\n%d * %d = ",a ,b);
        scanf("%d", &answer);
        if((a * b) == answer){
            printf("\Yay You are correct!\n");
            correct++;
        }
        else{
            printf("Sorry you were incorrect!\n");
            incorrect++;
        }
          }
    
    printf("\n\nResults:\n\n\n");
    printf("Number Incorrect: %d\n", incorrect);
    printf("Number Correct: %d\n", correct);
    if(100*correct/number >= usrpercentage){
        printf("You got your percentage!\nGood work!\n\n");
    }
    else{
        printf("You did not pass!\nYou need more work!\n\n");
    }  
    percentage = 100*correct/number;

}


    return 0;
}
