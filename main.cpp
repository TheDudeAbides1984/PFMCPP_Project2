#include <iostream>
template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 
 int
 float
 bool
 double
 char
 unsigned int
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'

    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    float f1 = 10.1f;
    float f2 = 20.2f;
    float f3 = 30.3f;

    bool isLearning = true;
    bool isReading = true;
    bool isBored = false;

    double d1 = 10.10;
    double d2 = 20.20;
    double d3 = 30.30;

    char c1 = 'P';
    char c2 = 'F';
    char c3 = 'M';

    unsigned int u1 = 1;
    unsigned int u2 = 2;
    unsigned int u3 = 3;

    ignoreUnused(number, num1, num2, num3, f1, f2, f3, isLearning, isReading, isBored, d1,
            d2, d3, c1, c2, c3, u1, u2, u3); //passing each variable declared to the ignoreUnused() function
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

int studyCode(int hourPerDay, int challengesPerDay = 2, int currentProjects = 4)
{
    ignoreUnused(hourPerDay, challengesPerDay, currentProjects );
    return {};
}

/*
 2)
 */

bool playGuitar (bool learnedNewChords = true, bool practiceDrills = true)
{
    ignoreUnused(learnedNewChords, practiceDrills);
    return {};
}

/*
 3)
 */

bool workout(bool workedOutToday, bool didCardio, bool eatHealthy)
{
    ignoreUnused(workedOutToday, didCardio, eatHealthy);
    return {};
}

/*
 4)
 */

int studySpanish(int newWords, int newPhrases, int minutesPracticed = 20)
{
    ignoreUnused(newWords, newPhrases, minutesPracticed);
    return {};
}

/*
 5)
 */

bool playDrums(bool hasSnare, bool hasKick = true, bool hasCymbals = true, int numToms = 3)
{
    ignoreUnused(hasSnare, hasKick, hasCymbals, numToms);
    return {};
}

/*
 6)
 */

bool printPaper(bool hasPaper = true, bool usbConnected = true, bool wifiConnected = false)
{
    ignoreUnused(hasPaper, usbConnected, wifiConnected);
    return true;
}

/*
 7)
 */

auto goToWork (int hoursWorked, bool worksFreelance = true, bool stillWorking = false)
{
    ignoreUnused(hoursWorked, worksFreelance, stillWorking);
    return true;
}

/*
 8)
 */
int washDishes(int numOfPlates = 4, int numOfbows = 2, bool hasDishwasher = false)
{
    ignoreUnused(numOfPlates, numOfbows, hasDishwasher);
    return {};
}

/*
 9)
 */

int doLaundry(int quartersRequired, int minutesInWasher, int minutesInDryer )
{
    ignoreUnused(quartersRequired, minutesInWasher, minutesInDryer);
    return {};
}
/*
 10)
 */

bool orderCatFood(int cansLeft = 4, int cansToOrder = 20, bool likesFlavor = true)
{
ignoreUnused(cansLeft, cansToOrder, likesFlavor);
    return {};
}

int main()
{
   //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2);

    //1)

    auto codeStudy = studyCode(5, 3, 9);

    //2)

    bool hasPracticedGuitar = playGuitar(false, false);

    //3)

    bool exercise = workout(false, false, true);

    //4)

    int spanishCurriculum = studySpanish(10,3, 20);

    //5)

    bool drumPractice = playDrums(true, true, true, 3);

    //6)

    auto print = printPaper(true, true, false);

    //7)

    auto makeMoney = goToWork(true, false);

    //8)

    auto stateOfKitchen = washDishes(2, 4, false);

    //9)

    int cleanClothes = doLaundry(10, 30, 30);

    //10)

    auto hungryCat = orderCatFood(3, 20, true);

    ignoreUnused(carRented, codeStudy, hasPracticedGuitar, exercise, spanishCurriculum,
    drumPractice, print, makeMoney, stateOfKitchen, cleanClothes, hungryCat);
    
    std::cout << "good to go!" << std::endl;

    return 0;    
}
