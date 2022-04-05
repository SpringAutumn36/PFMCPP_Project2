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
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 
 int
 float
 double
 bool
 char
 unsigned int
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int speed = 30, volume = 10, height = 3;
    float length = 1.52f, width = 2.33f, depth = 1.14f;
    double pi = 3.14, constant = 5.5, voltage = 2.2;
    bool jobFinished = 1, isColorWhite = 1, isShapeSquare = 0;
    char mathGrade = 70, physicGrade = 80, chemistryGrade = 70; 
    unsigned int amount = 10, month = 4, date = 5;


    
    ignoreUnused(number, speed, volume, height, length, width, depth, pi, constant, voltage, jobFinished, isColorWhite, isShapeSquare, mathGrade, physicGrade, chemistryGrade, amount, month, date); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
double power(double voltage = 2.0, double current = 1.1)
{
    ignoreUnused(voltage, current);
    return {};
}

/*
 2)
 */
char studentName(int idNumber, int seatNumber = 6)
{
    ignoreUnused(idNumber, seatNumber);
    return {};
}

/*
 3)
 */
 bool connectSpeaker(int outputChannel, int inputChannel = 2)
{
    ignoreUnused(outputChannel, inputChannel);
    return {};
}

/*
 4)
 */
float totalVolume(float length, float width, float height = 1.5)
{
    ignoreUnused(length, width, height);
    return {};
}

/*
 5)
 */
bool selectACourse(int courseNumber, bool prerequisiteTaken = 1)
{
    ignoreUnused(courseNumber, prerequisiteTaken );
    return {};
}

/*
 6)
 */
double totalIncome(double extraIncome, double monthlyIncome = 6312.23)
{
    ignoreUnused(extraIncome, monthlyIncome );
    return {};
}

/*
 7)
 */
bool creatAAcount(bool emailConfirmation, bool setPassword = 1)
{
    ignoreUnused(emailConfirmation, setPassword);
    return {};  
}

/*
 8)
 */
char grade(float homeworkScore, float midtermScore, float finalScore = 89.5)
{
    ignoreUnused(homeworkScore,midtermScore,finalScore);
    return {};  
}

/*
 9)
 */
bool doubleDoubleState(int point, int rebound = 5, int assist = 12)
{
    ignoreUnused(point, rebound, assist);
    return {};    
}

/*
 10)
 */
double winRate(int win, int loss = 10)
{
    ignoreUnused(win,loss);
    return {};    
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto powerValue = power(3.0,1.5);
    //2)
    auto name = studentName(9567);
    //3)
    auto speakerConnected = connectSpeaker(2,2);
    //4)
    auto volume = totalVolume(3.7f,5.5f);
    //5)
    auto courseSelected = selectACourse(335);
    //6)
    auto income = totalIncome(3233.56);
    //7)
    auto acountCreated = creatAAcount(1,1);
    //8)
    auto calculusGrade = grade(10, 75.2f);
    //9)
    auto doubleDouble = doubleDoubleState(35);
    //10)
    auto winRatePercentage = winRate(25,15);
    
    ignoreUnused(carRented, powerValue ,name , speakerConnected, volume, courseSelected, income, acountCreated, calculusGrade, doubleDouble, winRatePercentage);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
