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
	int correctanswer;
	int wronganswer;
	int constant;
        int a = rand() % 12;
        int b = rand() % 12;
        printf("\n%d * %d = ",a ,b);
        scanf("%d", &answer);
        if((a * b) == answer)
{
            printf("\nYay You are correct!\n");
	printf("\nYou should be proud\n");
	printf("You are a math genius\n");
            correct++;
        }
        else
{
            printf("Sorry you were incorrect!\n");
		printf("\nYou are kind of dumb\n");
		printf("\nYou need work\n");
            incorrect++;
        }
          }
FILE* outFile;

outFile = fopen("testfile.out", "w");
  if (outFile == NULL) {
    printf("error - failed to open file for writing\n");
    return 1;
  }
  {
    fprintf(outFile, "\n\nYour Results:\n\n\n");
    fprintf(outFile, "Number Incorrect: %d\n", incorrect);
    fprintf(outFile, "Number Correct: %d\n", correct);
    if(100*correct/number >= usrpercentage){
        fprintf(outFile, "You Passed!\nGood work!\n\n");
	fprintf(outFile, "Play Again!\n");
    }
    else{
        fprintf(outFile, "You did not pass!\nYou need more work!\n\n");
    	fprintf(outFile, "Play Again!\n");
    }
    percentage = 100*correct/number;
    fprintf(outFile, "%f", percentage);

    fclose(outFile);
    return 0;
}
}
}
