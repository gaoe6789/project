
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void addition(double n1,double n2);
void subtraction(double n1,double n2);
void multi(double n1,double n2);
void division(double n1,double n2);

int main(int nNumberofArgs,char* pszArgs[])
{
    double n1,n2;
    int choice;

    cout << "Welcome to the math games!" << endl;

    for(;;)
    {
        cout << "Enter a number choice: " << endl;
        cout << "1 - Addition" << endl;
        cout << "2 - Subtraction" << endl;
        cout << "3 - Multiplication" << endl;
        cout << "4 - Division" << endl;
        cout << "5 - Exit" << endl;
        cout << endl << "Choice: ";
        cin >> choice;

        if(cin.fail())
        {
            cout << "Invalid answer, now quitting to prevent crash..." << endl;
            system("PAUSE");
            return 0;
        }

        srand((unsigned)time(0));
        n1 = rand() % 100 + 1;
        n2 = rand() % 100 + 1;

        switch(choice)
        {
        case 1:
            addition(n1,n2);
            break;
        case 2:
            subtraction(n1,n2);
            break;
        case 3:
            multi(n1,n2);
            break;
        case 4:
            division(n1,n2);
            break;
        case 5:
            cout << "Thank you for playing please come again!" << endl;
            system("PAUSE");
            return 0;
        default:
            cout << "Invalid Number!" << endl;
            system("PAUSE");
            return 0;
        }
    }
}

void addition(double n1,double n2)
{
    double answer;
    cout << "What is " << n1 << " + " << n2 << "?" << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == n1 + n2)
    {
        cout << endl << "Correct!" << endl << endl;
    }
    else
    {
        cout << endl << "Wrong! The right answer was " << n1 + n2 << endl << endl;
    }
}

void subtraction(double n1,double n2)
{
    double answer;
    cout << "What is " << n1 << " - " << n2 << "?" << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == n1 - n2)
    {
        cout << endl << "Correct!" << endl << endl;
    }
    else
    {
        cout << endl << "Wrong! The right answer was " << n1 * n2 << endl << endl;
    }
}

void multi(double n1,double n2)
{
    double answer;
    cout << "What is " << n1 << " * " << n2 << "?" << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == n1 * n2)
    {
        cout << endl << "Correct!" << endl << endl;
    }
    else
    {
        cout << endl << "Wrong! The right answer was " << n1 * n2 << endl << endl;
    }
}

void division(double n1,double n2)
{
    double answer;
    double r = n1 / n2;
    cout << "What is " << n1 << " / " << n2 << "?" << endl;
    cout << "Remember that your answer must only have 6 numbers in it, round" << endl;
    cout << "0 does not count as a number, remember to do 0.123 etc." << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == r)
    {
        cout << endl << "Correct!" << endl << endl;
    }
    else
    {
        cout << endl << "Wrong! The right answer was " << r << endl << endl;
    }
}
