#include <stdio.h>

double calculateWhiteBallProbability();
void calculateIntegerOperations();
void calculateGPA();
void charInputAndPrint();
void calculateExpectedSalary();
void calculateArrivalTime();

int main() {

	//assigment number 1:

	double probability = calculateWhiteBallProbability();

    printf("The probability to get a white ball is: %.3lf\n\n", probability);

	//assigment number 2:


    calculateIntegerOperations();

	//assigment number 3:

    calculateGPA();

    //assigment number 4:

    charInputAndPrint();

	//assigment number 5:

    calculateExpectedSalary();

	//assigment number 6:

    calculateArrivalTime();

	return 0;
}


double calculateWhiteBallProbability()
{
    double whiteBalls;
    double redBalls;
    printf("Please enter your desired number of white balls\n");
    scanf("%lf", &whiteBalls);
    while(whiteBalls < 0)
    {
        printf("Error! Please enter a non-negative integer for the number of white balls:\n");
        scanf("%lf", &whiteBalls);
    }

    printf("Please enter your desired number of red balls\n");
    scanf("%lf", &redBalls);
    while(redBalls < 0)
    {
        printf("Error! Please enter a non-negative integer for the number of red balls:\n");
        scanf("%lf", &redBalls);
    }

    return (whiteBalls / (whiteBalls + redBalls));
}
void calculateIntegerOperations()
{
    int firstNo;
    int secondNo;

    printf("Please enter your first integer number \n");
    scanf("%d", &firstNo);
    while(firstNo < 0)
    {
        printf("Error! Please enter a non-negative number:\n");
        scanf("%d", &firstNo);
    }

    printf("Please enter your second integer number \n");
    scanf("%d", &secondNo);
    while(secondNo < 0)
    {
        printf("Error! Please enter a non-negative number:\n");
        scanf("%d", &secondNo);
    }

    int sum = firstNo + secondNo;
    int subtraction = firstNo - secondNo;

    printf("\nSum of the numbers: %d\n", sum);
    printf("First number minus second number = %d \n\n", subtraction);
}
void calculateGPA()
{
    float mathGrade;
    float englishGrade;
    float historyGrade;
    float geographyGrade;

    printf("Please enter your Math grade:\n");
    scanf("%f", &mathGrade);
    while(mathGrade < 0 || mathGrade > 100)
    {
        printf("Error! Please enter number between 0 to 100:\n");
        scanf("%f", &mathGrade);
    }

    printf("Please enter your English grade:\n");
    scanf("%f", &englishGrade);
    while(englishGrade < 0 || englishGrade > 100)
    {
        printf("Error! Please enter number between 0 to 100:\n");
        scanf("%f", &englishGrade);
    }

    printf("Please enter your History grade:\n");
    scanf("%f", &historyGrade);
    while(historyGrade < 0 || historyGrade > 100)
    {
        printf("Error! Please enter number between 0 to 100:\n");
        scanf("%f", &historyGrade);
    }

    printf("Please enter your Geography grade:\n");
    scanf("%f", &geographyGrade);
    while(geographyGrade < 0 || geographyGrade > 100)
    {
        printf("Error! Please enter number between 0 to 100:\n");
        scanf("%f", &geographyGrade);
    }

    float gpa = (mathGrade + englishGrade + historyGrade + geographyGrade) / 4;

    printf("\nYour GPA is: %.2f\n\n\n", gpa);

}
void charInputAndPrint()
{
    char c;

    printf("Please enter a character: ");
    scanf(" %c", &c);

    printf("\nYour character is: %c\n", c);
    printf("The ASCII value of your character is: %d\n\n", c);

    char letter1, letter2, letter3, letter4, letter5;

    printf("Please enter a 5-letter word: ");
    scanf(" %c %c %c %c %c", &letter1, &letter2, &letter3, &letter4, &letter5);
    while(getchar() != '\n')
    {
        printf("Error! Please enter 5 letters only\n");
        scanf(" %c %c %c %c %c", &letter1, &letter2, &letter3, &letter4, &letter5);
    }

    printf("Your word is: %c%c%c%c%c\n", letter1, letter2, letter3, letter4, letter5);
}

void calculateExpectedSalary()
{
    double hoursInMonth;
    double hourlyEarnings;

    printf("\n\nPlease enter your monthly working hours\n");
    scanf("%lf", &hoursInMonth);

    while(hoursInMonth < 0)
    {
        printf("Error! Please enter a valid number of hours:\n");
        scanf("%lf", &hoursInMonth);
    }

    printf("\nPlease enter your hourly wage\n");
    scanf("%lf", &hourlyEarnings);

    while(hourlyEarnings < 0)
    {
        printf("Error! Please enter a valid number of wage:\n");
        scanf("%lf", &hourlyEarnings);
    }

    printf("\nYour expected salary is: %.2lf", hourlyEarnings * hoursInMonth);
}
void calculateArrivalTime()
{
    double distance;
    double speed;

    printf("\n\nPlease enter the distance you need to travel (in kilometers):\n");
    scanf("%lf", &distance);
    while(distance < 0)
    {
        printf("Error! Please enter a valid number of distance:\n");
        scanf("%lf", &distance);
    }

    printf("\nPlease enter your average speed (in kilometers per hour):\n");
    scanf("%lf", &speed);
    while(speed < 0)
    {
        printf("Error! Please enter a valid number of speed:\n");
        scanf("%lf", &speed);
    }

    double timeInMinutes = (distance / speed) * 60;
    printf("\nYou'll arrive in: %.1lf minutes",timeInMinutes);
}