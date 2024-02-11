#include "functions.cpp"
#include"definitions.cpp"

bool user = true;
// ******************************ERROR/QUIT-IDENTIFICATION***********************************
// Following class contains the functions to handle user-quit requests and Errors.
class Errors
{
public:
    void user_choice_error(void)
    {
        cout << "Sorry! You entered invalid Parameters..." << endl;
    }
    void system_error(void)
    {
        cout << "We are facing the bad days! Please report this issue to:" << endl
             << "hassaannonari@gmail.com" << endl
             << "We will resolve it soon...(SYSTEM_ERROR)";
             user = false;

        exit(0);
    }

    void quit(void)
    {
        cout << "Thanks for Being with us! We hope we added some value to your daily life." << endl
             << "Trignomatics Developed by Muhammad Hassaan" << endl;
             user = false;
             exit(0);
    }
};
Errors e;
//******************************************************************************************

//*******************************MAIN-MENU**************************************************
// Following is the class that defines the basic and general Processing.
class introduction
{
public:
    string dev = "Muhammad Hassaan";
    void mainMenu(void)
    {
        cout<<endl<<endl << "Please choose the category of your PROBLEM." << endl
             << "1. Related to Fundamental Laws" << endl
             << "2. Related to other Laws" << endl
             << "3. Related to Angle Identities (Half, Double, Triple)" << endl
             << "4. Related to Area" << endl
             << "5. Related to Sum-and-Product" << endl
             << "6. Related to Periods of functions"<<endl
             << "7. Related to Radii"<<endl
             << "8. Related to Basic Functions" << endl
             << "9. Finding the missing Side" << endl
             << "10. Finding the missing Angle" << endl
             <<"11. Definitions Related to Trignometry"<<endl;
        int mainChoice;
        cin >> mainChoice;

        if (mainChoice == 1)
        {
            void fundamentalLawsFunction(void);
            fundamentalLawsFunction();
        }
        else if (mainChoice == 2)
        {
            void otherLaws(void);
            otherLaws();
        }
        else if (mainChoice == 3)
        {
            void angleIdentities(void);
            angleIdentities();
        }
        else if (mainChoice == 4)
        {
            void triangleArea(void);
            triangleArea();
        }
        else if (mainChoice == 5)
        {
            void sumAndProduct(void);
            sumAndProduct();
        }
        else if (mainChoice == 6)
        {
            void functionPeriods(void);
            functionPeriods();
        }
        else if (mainChoice == 7)
        {
            void radiiOfTriangles(void);
            radiiOfTriangles();
        }
        else if (mainChoice == 8)
        {
            void baseFunctions(void);
            baseFunctions();
        }
        else if (mainChoice == 9)
        {
            void sideFunction(void);
            sideFunction();
        }
        else if (mainChoice == 10)
        {
            void angleFunction(void);
            angleFunction();
        }else if (mainChoice==11)
        {
            definitions d;
            d.defines();
        }
        
        else
        {
            e.user_choice_error();
        }
    }
};

//***********************************FUNDAMENTAL-LAWS****************************************************
// Following function uses and display the things related to the fundamental laws.
void fundamentalLawsFunction(void)
{
    cout << "We can understand that you have problem related to Fundamental Laws of Trignometry." << endl
         << "So, Provide us with some more information..." << endl
         << "1. cos(A-B)" << endl
         << "2. sin(A-B)" << endl
         << "3. tan(A-B)" << endl
         << "4. cos(A+B)" << endl
         << "5. sin(A+B)" << endl
         << "6. tan(A+B)" << endl
         << "7. Return to Main Menu" << endl
         << "8. Quit"<<endl;
    int user_choice;
    cin >> user_choice;
    if (user_choice == 1)
    {
        float A, B;
        cout << "Value of angle A: " << endl;
        cin >> A;
        cout << "Value of angle B: " << endl;
        cin >> B;
        fundamental_Laws obj;
        float value = obj.cosNegative(A, B);
        cout << "Hence, cos(" << A << " - " << B << ") = " << value << endl;
    }
    else if (user_choice == 2)
    {
        float A, B;
        cout << "Value of angle A: " << endl;
        cin >> A;
        cout << "Value of angle B: " << endl;
        cin >> B;
        fundamental_Laws obj;
        float value = obj.sinNegative(A, B);
        cout << "Hence, sin(" << A << " - " << B << ") = " << value << endl;
    }
    else if (user_choice == 3)
    {
        float A, B;
        cout << "Value of angle A: " << endl;
        cin >> A;
        cout << "Value of angle B: " << endl;
        cin >> B;
        fundamental_Laws obj;
        float value = obj.tanNegative(A, B);
        cout << "Hence, tan(" << A << " - " << B << ") = " << value << endl;
    }
    else if (user_choice == 4)
    {
        float A, B;
        cout << "Value of angle A: " << endl;
        cin >> A;
        cout << "Value of angle B: " << endl;
        cin >> B;
        fundamental_Laws obj;
        float value = obj.cosPositive(A, B);
        cout << "Hence, cos(" << A << " + " << B << ") = " << value << endl;
    }
    else if (user_choice == 5)
    {
        float A, B;
        cout << "Value of angle A: " << endl;
        cin >> A;
        cout << "Value of angle B: " << endl;
        cin >> B;
        fundamental_Laws obj;
        float value = obj.sinPositive(A, B);
        cout << "Hence, sin(" << A << " + " << B << ") = " << value << endl;
    }
    else if (user_choice = 6)
    {
        float A, B;
        cout << "Value of angle A: " << endl;
        cin >> A;
        cout << "Value of angle B: " << endl;
        cin >> B;
        fundamental_Laws obj;
        float value = obj.tanPositive(A, B);
        cout << "Hence, tan(" << A << " + " << B << ") = " << value << endl;
    }
    else if (user_choice == 7)
    {
        introduction obj;
        obj.mainMenu();
    }
    else if (user_choice == 8)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}
//*******************************************************************************************************

//*************************************OTHER-LAWS********************************************************
// Following function contains the laws other than the fundamental laws.
void otherLaws(void)
{
    cout << "Oh! So you chose the laws other than fundamental laws. Please tell us more:" << endl
         << "1. For Laws of Cosine" << endl
         << "2. For Laws of Sine" << endl
         << "3. For Laws of Tangents" << endl
         << "4. Main Menu"<<endl
         << "5. Quit" << endl;
    int opt;
    cin >> opt;
    if (opt == 1)
    {
        void cosineLaws(void);
        cosineLaws();
    }
    else if (opt == 2)
    {
        void sineLaws(void);
        sineLaws();
    }
    else if (opt == 3)
    {
        void tangentLaws(void);
        tangentLaws();
    }
    else if (opt == 4)
    {
        introduction i;
        i.mainMenu();
    }
    else if (opt == 5)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}

// Following function deals with the input and output for user using the laws of cosine and will be used in otherLaws().
void cosineLaws(void)
{
    lawsOfCosine l1;
    cout << "Please provide us that what things are given:" << endl
         << "1. Sides 'b' and 'c'and Angle Given" << endl
         << "2. Sides 'a' and 'c' and Angle Given" << endl
         << "3. Sides 'a' and 'b'and Angle Given" << endl
         << "4. All sides are and Angle Given" << endl
         << "5. Main Menu" << endl
         << "6. Quit" << endl;
    int user_choice2;
    cin >> user_choice2;
    if (user_choice2 == 1)
    {
        float b, c, A;
        cout << "Enter value of side 'b':" << endl;
        cin >> b;
        cout << "Enter value of side 'c':" << endl;
        cin >> c;
        cout << "Enter value of Angle A: " << endl;
        cin >> A;
        float a = l1.bcIsGiven(b, c, A);
        cout << "Hence, a = " << a << endl;
    }
    else if (user_choice2 == 2)
    {
        float a, c, B;
        cout << "Enter value of side 'a':" << endl;
        cin >> a;
        cout << "Enter value of side 'c':" << endl;
        cin >> c;
        cout << "Enter value of Angle B: " << endl;
        cin >> B;
        float b = l1.acIsGiven(b, c, B);
        cout << "Hence, b = " << b << endl;
    }
    else if (user_choice2 == 3)
    {
        float a, b, C;
        cout << "Enter value of side 'a':" << endl;
        cin >> a;
        cout << "Enter value of side 'b':" << endl;
        cin >> b;
        cout << "Enter value of Angle C: " << endl;
        cin >> C;
        float c = l1.abIsGiven(a, b, C);
        cout << "Hence, c = " << c << endl;
    }
    else if (user_choice2 == 4)
    {
        cout << "Wow! If you have all sides so please tell me about the angle you wanna find:" << endl;
        cout << "1. cosA: " << endl
             << "2. cosB"
             << "3. cosC" << endl;
        int user_choice3;
        cin >> user_choice3;
        if (user_choice3 == 1)
        {
            float a, b, c;
            cout << "Enter value of side 'a':" << endl;
            cin >> a;
            cout << "Enter value of side 'b':" << endl;
            cin >> b;
            cout << "Enter value of side 'c':" << endl;
            cin >> c;
            l1.cosAlpha(a, b, c);
        }
        else if (user_choice3 == 2)
        {
            float a, b, c;
            cout << "Enter value of side 'a':" << endl;
            cin >> a;
            cout << "Enter value of side 'b':" << endl;
            cin >> b;
            cout << "Enter value of side 'c':" << endl;
            cin >> c;
            l1.cosBeta(a, b, c);
        }
        else if (user_choice3 == 3)
        {
            float a, b, c;
            cout << "Enter value of side 'a':" << endl;
            cin >> a;
            cout << "Enter value of side 'b':" << endl;
            cin >> b;
            cout << "Enter value of side 'c':" << endl;
            cin >> c;
            l1.cosGamma(a, b, c);
        }
        else
        {
            e.user_choice_error();
        }
    }
    else if (user_choice2 == 5)
    {
        introduction i;
        i.mainMenu();
    }
    else if (user_choice2 == 6)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}

// Following function deals with the input and output for the user using the laws of sine.
void sineLaws(void)
{
    lawsOfSine l2;
    cout << "Its Great! Please tell us more about the Given Data: " << endl
         << "1. Side 'a' and Angle 'A' and 'B' Given" << endl
         << "2. Side 'b' and Angle 'A' and 'B' Given" << endl
         << "3. Side 'b' andAngle 'B' and 'C' Given" << endl
         << "4. Side 'c' and Angle 'B' and 'C'Given" << endl
         << "5. Side 'a' and Angle 'A' and 'C' Given" << endl
         << "6. Side 'c' and Angle 'A' and 'C' Given" << endl
         << "7. Main Menu" << endl
         << "8. Quit" << endl;
    int user_choice;
    cin >> user_choice;
    if (user_choice == 1)
    {
        float a, A, B;
        cout << "Enter value of side 'a':" << endl;
        cin >> a;
        cout << "Enter value of Angle A:" << endl;
        cin >> A;
        cout << "Enter value of Angle B" << endl;
        cin >> B;
        float b = l2.asinABIsGiven(a, A, B);
        cout << "Hence, b = " << b << endl;
    }
    else if (user_choice == 2)
    {
        float b, A, B;
        cout << "Enter value of side 'b':" << endl;
        cin >> b;
        cout << "Enter value of Angle A:" << endl;
        cin >> A;
        cout << "Enter value of Angle B" << endl;
        cin >> B;
        float a = l2.bsinABIsGiven(b, A, B);
        cout << "Hence, a = " << a << endl;
    }
    else if (user_choice == 3)
    {
        float b, B, C;
        cout << "Enter value of side 'b':" << endl;
        cin >> b;
        cout << "Enter value of Angle B" << endl;
        cin >> B;
        cout << "Enter value of Angle C:" << endl;
        cin >> C;
        float c = l2.bsinBCIsGiven(b, B, C);
        cout << "Hence, c = " << c << endl;
    }
    else if (user_choice == 4)
    {
        float c, B, C;
        cout << "Enter value of side 'c':" << endl;
        cin >> c;
        cout << "Enter value of Angle B" << endl;
        cin >> B;
        cout << "Enter value of Angle C:" << endl;
        cin >> C;
        float b = l2.csinBCIsGiven(c, B, C);
        cout << "Hence, b = " << b << endl;
    }
    else if (user_choice == 5)
    {
        float a, A, C;
        cout << "Enter value of side 'a':" << endl;
        cin >> a;
        cout << "Enter value of Angle A:" << endl;
        cin >> A;
        cout << "Enter value of Angle C" << endl;
        cin >> C;
        float c = l2.asinACIsGiven(a, A, C);
        cout << "Hence, c = " << c << endl;
    }
    else if (user_choice == 6)
    {
        float c, A, C;
        cout << "Enter value of side 'c':" << endl;
        cin >> c;
        cout << "Enter value of Angle A:" << endl;
        cin >> A;
        cout << "Enter value of Angle C" << endl;
        cin >> C;
        float b = l2.csinACIsGiven(c, A, C);
        cout << "Hence, b = " << b << endl;
    }
    if (user_choice == 7)
    {
        introduction i;
        i.mainMenu();
    }
    else if (user_choice == 8)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}

// Following function deals with the input and output for the user using the laws of tangent.
void tangentLaws(void)
{
    lawsOfTangent l3;
    cout << "Oh Wow! For Tangent laws provide us some information: " << endl
         << "1. Angle 'A' and 'B' Given" << endl
         << "2. Angle 'A' and 'C' Given" << endl
         << "3. Angle 'B' and 'C' Given" << endl;
    int user_choice;
    cin >> user_choice;
    if (user_choice == 1)
    {
        float A, B;
        cout << "Enter value of Angle 'A':" << endl;
        cin >> A;
        cout << "Enter value of Angle 'B':" << endl;
        cin >> B;
        l3.angleABIsGiven(A, B);
    }
    else if (user_choice == 2)
    {
        float A, C;
        cout << "Enter value of Angle 'A':" << endl;
        cin >> A;
        cout << "Enter value of Angle 'C':" << endl;
        cin >> C;
        l3.angleACIsGiven(A, C);
    }
    else if (user_choice == 3)
    {
        float B, C;
        cout << "Enter value of Angle 'B':" << endl;
        cin >> B;
        cout << "Enter value of Angle 'C':" << endl;
        cin >> C;
        l3.angleABIsGiven(B, C);
    }
    else if (user_choice == 4)
    {
        introduction i;
        i.mainMenu();
    }
    else if (user_choice == 5)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}
// *******************************************************************************************************

//****************************ANGLE-IDENTITIES*************************************************************
// Following function is used to find the angle identities output
void angleIdentities(void)
{
    cout << "Really a Good Approach! Please tell us more: " << endl
         << "1. Half Angle Identities" << endl
         << "2. Double Angle Identities" << endl
         << "3. Triple Angle Identities" << endl
         << "4. Main Menu" << endl
         << "5. Quit" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        void halfAngle(void);
        halfAngle();
    }
    else if (input == 2)
    {
        void doubleAngle(void);
        doubleAngle();
    }
    else if (input == 3)
    {
        void tripleAngle(void);
        tripleAngle();
    }
    else if (input == 4)
    {
        introduction i;
        i.mainMenu();
    }
    else if (input == 5)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}

// Following is used to find half angle identities and is used in angleIdentities function.
void halfAngle(void)
{
    cout << "Tell us more:" << endl;
    cout << "1. Cos Half Angle" << endl
         << "2. Sine Half Angle" << endl
         << "3. Tangent Half Angle" << endl;
    int input;
    cin >> input;
    angle_Identities obj;
    if (input == 1)
    {
        cout << "Oh we See! Please enter the value of Alpha 'A'" << endl;
        int a;
        cin >> a;
        float cosHalfAngle = obj.cosHalfAngleId(a);
        cout << "Here, cos(A/2) = " << cosHalfAngle << endl;
    }
    else if (input == 2)
    {
    }
    else if (input == 3)
    {
        cout << "Oh we See! Please enter the value of Alpha 'A'" << endl;
        int a;
        cin >> a;
        float tanHalfAngle = obj.tanHalfAngleId(a);
        cout << "Here, tan(A/2) = " << tanHalfAngle << endl;
    }
    else
    {
        e.user_choice_error();
    }
}

// Following function is used to find the Double Angle identities and is also used in angleIdentities function.
void doubleAngle(void)
{
    angle_Identities i;
    cout << "Oh Great! Choose one of the following: " << endl
         << "1. Cos Double Angle" << endl
         << "2. Sine Double Angle"
         << "3. Tangent Double Angle" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        cout << "We See! Please enter value of Alpha 'A': " << endl;
        int A;
        cin >> A;
        float cosDoubleAngle = i.cosDoubleAngleId(A);
        cout << "Hence, Cos2A = " << cosDoubleAngle << endl;
    }
    else if (input == 2)
    {
        cout << "We See! Please enter value of Alpha 'A': " << endl;
        int A;
        cin >> A;
        float sinDoubleAngle = i.sinDoubleAngleId(A);
        cout << "Hence, Sin2A = " << sinDoubleAngle << endl;
    }
    else if (input == 3)
    {
        cout << "We See! Please enter value of Alpha 'A': " << endl;
        int A;
        cin >> A;
        float tanDoubleAngle = i.tanDoubleAngleId(A);
        cout << "Hence, Tan2A = " << tanDoubleAngle << endl;
    }
    else
    {
        e.user_choice_error();
    }
}

// Following Function is used to find the triple angle identities output and is used in angleIdentities Function.
void tripleAngle(void)
{
    angle_Identities i;
    cout << "Great! Please provide us with something more: " << endl;
    cout << "1. Cos Triple Angle" << endl
         << "2. Sine Triple Angle" << endl
         << "3. Tangent Triple Angle" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        cout << "Please Enter the value of Alpha 'A'" << endl;
        int A;
        cin >> A;
        float cosTripleAngle = i.cosTripleAngleId(A);
        cout << "Hence, Cos3A = " << cosTripleAngle << endl;
    }
    else if (input == 2)
    {
        cout << "Please Enter the value of Alpha 'A'" << endl;
        int A;
        cin >> A;
        float sinTripleAngle = i.sinTripleAngleId(A);
        cout << "Hence, Sin3A = " << sinTripleAngle << endl;
    }
    else if (input == 3)
    {
        cout << "Please Enter the value of Alpha 'A'" << endl;
        int A;
        cin >> A;
        float tanTripleAngle = i.tanTripleAngleId(A);
        cout << "Hence, Tan3A = " << tanTripleAngle << endl;
    }
    else
    {
        e.user_choice_error();
    }
}
//*********************************************************************************************************

//********************************TRIANGLE-AREA***********************************************************
// Following is the function used to find the output related to area of triangle.
void triangleArea(void)
{
    // Area Always use the sine function for Angle.
    areaOfTriangle obj1;
    cout << "Welcome to calculate the Area of triangles. Please tell us more: " << endl;
    cout << "1. Side 'b' and 'c' and Angle A Given" << endl
         << "2. Side 'a' and 'c' and Angle B Given" << endl
         << "3. Side 'a' and 'b' and Angle C Given" << endl
         << "4. Side 'c' and Angle 'A', 'B', 'C' Given" << endl
         << "5. Side 'b' and Angle 'A', 'B', 'C' Given" << endl
         << "6. Side 'a' and Angle 'A', 'B', 'C' Given" << endl
         << "7. All Sides are Given (Hero's Formula)" << endl
         << "8. Find S by All Sides" << endl
         << "9. Main Menu" << endl
         << "10. Quit" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        float b, c, A;
        cout << "Enter value of side 'b': " << endl;
        cin >> b;
        cout << "Enter value of side 'c': " << endl;
        cin >> c;
        cout << "Enter value of Angle 'A': " << endl;
        cin >> A;
        float area = obj1.bcsinAIsGiven(b, c, A);
        cout << "Area = " << area << "sq. units" << endl;
    }
    else if (input == 2)
    {
        float a, c, B;
        cout << "Enter value of side 'a': " << endl;
        cin >> a;
        cout << "Enter value of side 'c': " << endl;
        cin >> c;
        cout << "Enter value of Angle 'B': " << endl;
        cin >> B;
        float area = obj1.acsinBIsGiven(a, c, B);
        cout << "Area = " << area << "sq. units" << endl;
    }
    else if (input == 3)
    {
        float a, b, C;
        cout << "Enter value of side 'a': " << endl;
        cin >> a;
        cout << "Enter value of side 'b': " << endl;
        cin >> b;
        cout << "Enter value of Angle 'C': " << endl;
        cin >> C;
        float area = obj1.absinCIsGiven(a, b, C);
        cout << "Area = " << area << "sq. units" << endl;
    }
    else if (input == 4)
    {
        float c, A, B, C;
        cout << "Enter value of side 'c': " << endl;
        cin >> c;
        cout << "Enter value of Angle 'A': " << endl;
        cin >> A;
        cout << "Enter value of Angle 'B': " << endl;
        cin >> B;
        cout << "Enter value of Angle 'C': " << endl;
        cin >> C;
        float area = obj1.csinABCIsGiven(c, A, B, C);
        cout << "Area = " << area << "sq. units" << endl;
    }
    else if (input == 5)
    {
        float b, A, B, C;
        cout << "Enter value of side 'b': " << endl;
        cin >> b;
        cout << "Enter value of Angle 'A': " << endl;
        cin >> A;
        cout << "Enter value of Angle 'B': " << endl;
        cin >> B;
        cout << "Enter value of Angle 'C': " << endl;
        cin >> C;
        float area = obj1.bsinABCIsGiven(b, A, B, C);
        cout << "Area = " << area << "sq. units" << endl;
    }
    else if (input == 6)
    {
        float a, A, B, C;
        cout << "Enter value of side 'a': " << endl;
        cin >> a;
        cout << "Enter value of Angle 'A': " << endl;
        cin >> A;
        cout << "Enter value of Angle 'B': " << endl;
        cin >> B;
        cout << "Enter value of Angle 'C': " << endl;
        cin >> C;
        float area = obj1.asinABCIsGiven(a, A, B, C);
        cout << "Area = " << area << "sq. units" << endl;
    }
    else if (input == 7)
    {
        float a, b, c;
        cout << "Enter value of Side 'a': " << endl;
        cin >> a;
        cout << "Enter value of Side 'b': " << endl;
        cin >> b;
        cout << "Enter value of Side 'c': " << endl;
        cin >> c;
        float area = obj1.herosFormula(a, b, c);
        cout << "Area = " << area << "sq. units" << endl;
    }
    else if (input == 8)
    {
        float a, b, c;
        cout << "Enter value of Side 'a': " << endl;
        cin >> a;
        cout << "Enter value of Side 'b': " << endl;
        cin >> b;
        cout << "Enter value of Side 'c': " << endl;
        cin >> c;
        float s = obj1.S(a, b, c);
        cout << "Hence, S = " << s << endl;
    }
    else if (input == 9)
    {
        introduction i;
        i.mainMenu();
    }
    else if (input == 10)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}
//********************************************************************************************************

//*********************************SUM-AND-PRODUCT********************************************************
void sumAndProduct(void)
{
    cout << "Oh! Really advance Step. Please tell us more: " << endl;
    cout << "1. Sum to Product" << endl
         << "2. Product to Sum" << endl
         << "3. Main Menu" << endl
         << "4. Quit" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        void sumToProduct(void);
        sumToProduct();
    }
    else if (input == 2)
    {
        void productToSum(void);
        productToSum();
    }
    else if (input == 3)
    {
        introduction i;
        i.mainMenu();
    }
    else if (input == 4)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}

// Following function manages the display of process Sum-to-Product.
void sumToProduct(void)
{
    sum_And_Product obj;
    cout << "Tell us a bit more about your problem: " << endl;
    cout << "1. Sin Sum Sin to Product" << endl
         << "2. Sin Difference Sin to Product" << endl
         << "3. Cos Sum Cos to Product" << endl
         << "4. Cos Difference Cos to Product" << endl
         << "5. Main Menu" << endl
         << "6. Quit" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        float P, Q;
        cout << "Enter value of 'P': " << endl;
        cin >> P;
        cout << "Enter value of 'Q': " << endl;
        cin >> Q;
        obj.sinSumSinToProduct(P, Q);
    }
    else if (input == 2)
    {
        float P, Q;
        cout << "Enter value of 'P': " << endl;
        cin >> P;
        cout << "Enter value of 'Q': " << endl;
        cin >> Q;
        obj.sinDifferenceSinToProduct(P, Q);
    }
    else if (input == 3)
    {
        float P, Q;
        cout << "Enter value of 'P': " << endl;
        cin >> P;
        cout << "Enter value of 'Q': " << endl;
        cin >> Q;
        obj.cosSumCosToProduct(P, Q);
    }
    else if (input == 4)
    {
        float P, Q;
        cout << "Enter value of 'P': " << endl;
        cin >> P;
        cout << "Enter value of 'Q': " << endl;
        cin >> Q;
        obj.cosDifferenceCosToProduct(P, Q);
    }
    else if (input == 5)
    {
        introduction i;
        i.mainMenu();
    }
    else if (input == 6)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}

// Following function manages the display of process related to Product-to-Sum.
void productToSum(void)
{
    sum_And_Product obj;
    cout << "Please tell us a bit more about your problem: " << endl
         << "1. Sin Product Cos to Sum" << endl
         << "2. Cos Product Sin to Sum" << endl
         << "3. Cos Product Cos to Sum" << endl
         << "4. Sin Product Sin to Sum" << endl
         << "5. Main Menu" << endl
         << "6. Quit" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        float A, B;
        cout << "Enter value of 'A': " << endl;
        cin >> A;
        cout << "Enter value of 'B': " << endl;
        cin >> B;
        obj.sinProductCosToSum(A, B);
    }
    else if (input == 2)
    {
        float A, B;
        cout << "Enter value of 'A': " << endl;
        cin >> A;
        cout << "Enter value of 'B': " << endl;
        cin >> B;
        obj.cosProductSinToSum(A, B);
    }
    else if (input == 3)
    {
        float A, B;
        cout << "Enter value of 'A': " << endl;
        cin >> A;
        cout << "Enter value of 'B': " << endl;
        cin >> B;
        obj.cosProductCosToSum(A, B);
    }
    else if (input == 4)
    {
        float A, B;
        cout << "Enter value of 'A': " << endl;
        cin >> A;
        cout << "Enter value of 'B': " << endl;
        cin >> B;
        obj.sinProductSinToSum(A, B);
    }
    else if (input == 5)
    {
        introduction i;
        i.mainMenu();
    }
    else if (input == 6)
    {
        e.quit();
    }

    else
    {
        e.user_choice_error();
    }
}
// ********************************************************************************************************

//*****************************PERIODS-OF-FUNCTIONS*******************************************************
// It just calls one function from class periodsOfFunctions to display all the periods of all trignometric Functions.
void functionPeriods(void)
{
    periodsOfFunctions f;
    f.display();
}
//********************************************************************************************************

//*****************************RADII-OF-TRIANGLES********************************************************
void radiiOfTriangles(void)
{
    radiiOfTriangle obj;
    cout << "Welcome! Please tell us more: " << endl
         << "1. To Find R" << endl
         << "2. To Find r" << endl
         << "3. To Find r1" << endl
         << "4. To Find r2" << endl
         << "5. To Find r3" << endl
         << "6. Main Menu" << endl
         << "7. Quit" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        float a, b, c;
        cout << "Please Enter value of Side 'a': " << endl;
        cin >> a;
        cout << "Please Enter value of Side 'b': " << endl;
        cin >> b;
        cout << "Please Enter value of Side 'c': " << endl;
        cin >> c;
        float R = obj.R(a, b, c);
        cout << "Hence, R = " << R << endl;
    }
    else if (input == 2)
    {
        float a, b, c;
        cout << "Please Enter value of Side 'a': " << endl;
        cin >> a;
        cout << "Please Enter value of Side 'b': " << endl;
        cin >> b;
        cout << "Please Enter value of Side 'c': " << endl;
        cin >> c;
        float r = obj.r(a, b, c);
        cout << "Hence, r = " << r << endl;
    }
    else if (input == 3)
    {
        float a, b, c;
        cout << "Please Enter value of Side 'a': " << endl;
        cin >> a;
        cout << "Please Enter value of Side 'b': " << endl;
        cin >> b;
        cout << "Please Enter value of Side 'c': " << endl;
        cin >> c;
        float r1 = obj.r1(a, b, c);
        cout << "Hence, r1 = " << r1 << endl;
    }
    else if (input == 4)
    {
        float a, b, c;
        cout << "Please Enter value of Side 'a': " << endl;
        cin >> a;
        cout << "Please Enter value of Side 'b': " << endl;
        cin >> b;
        cout << "Please Enter value of Side 'c': " << endl;
        cin >> c;
        float r2 = obj.r2(a, b, c);
        cout << "Hence, r2 = " << r2 << endl;
    }
    else if (input == 5)
    {
        float a, b, c;
        cout << "Please Enter value of Side 'a': " << endl;
        cin >> a;
        cout << "Please Enter value of Side 'b': " << endl;
        cin >> b;
        cout << "Please Enter value of Side 'c': " << endl;
        cin >> c;
        float r3 = obj.r3(a, b, c);
        cout << "Hence, r3 = " << r3 << endl;
    }
    else if (input == 6)
    {
        introduction i;
        i.mainMenu();
    }
    else if (input == 7)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}
//****************************************************************************************************

//****************************BASIC-FUNCTIONS****************************************************
void baseFunctions(void)
{
    OrderDistance d;
    basicFunctions f;
    cout << "Oh! You have claimed a bonus that you are here..." << endl
         << "1. To Find the Distance of Order" << endl
         << "2. Convert Degree to Radian" << endl
         << "3. Find All Trignometric Ratios of Angle" << endl
         << "4. Main Menu" << endl
         << "5. Quit" << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        float X1, X2, Y1, Y2;
        cout << "Great! Please provide value of 'X1:" << endl;
        cin >> X1;
        cout << "Enter value of 'Y1':" << endl;
        cin >> Y1;
        cout << "Enter value of 'X2':" << endl;
        cin >> X1;
        cout << "Enter value of 'Y2':" << endl;
        cin >> Y2;
        float distance = d.distanceForOrders(X1, Y1, X2, Y2);
        cout << "Hence, The distance is: " << distance << endl;
    }
    else if (input == 2)
    {
        float deg, rad;
        cout << "Please Enter the angle in Degree" << endl;
        cin >> deg;
        rad = f.DegToRad(deg);
        cout << "Hence, " << deg << " deg. = " << rad << " radians" << endl;
    }
    else if (input == 3)
    {
        float deg;
        cout << "Please Enter the value in Degrees" << endl;
        cin >> deg;
        cout << "1. The value of COSINE for " << deg << " degrees is: " << f.cosValue(deg) << endl;
        cout << "2. The value of SINE for " << deg << " degrees is: " << f.sinValue(deg) << endl;
        cout << "3. The value of TANGENT for " << deg << " degrees is: " << f.tanValue(deg) << endl;
        cout << "4. The value of SECANT for " << deg << " degrees is: " << f.secantValue(deg) << endl;
        cout << "5. The value of COSECANT for " << deg << " degrees is: " << f.cosecantValue(deg) << endl;
        cout << "6. The value of COTANGENT for " << deg << " degrees is: " << f.cotangentValue(deg) << endl;
    }
    else if (input == 4)
    {
        introduction i;
        i.mainMenu();
    }
    else if (input == 5)
    {
        e.user_choice_error();
    }
    else
    {
        e.user_choice_error();
    }
}
//****************************************************************************************************

//****************************SIDE-FUNCTIONS********************************************************
void sideFunction(void)
{
    cout << "Oh thats strange! Please choose the option below for Given Data: " << endl;
    cout << "1. Two sides are Given in Right Angle (Pythagoras Theorem)" << endl
         << "2. Two Sides and One Angle is Given (Laws Of Cosine)" << endl
         << "3. One Side and Two Angles are Given (Laws Of Sine)"
         << "4. Main Menu" << endl
         << "5. Quit" << endl;
    int input;
    cin>>input;
    if (input == 1)
    {
        void pythagorasTheorem(void);
        pythagorasTheorem();
    }
    else if (input == 2)
    {
        cosineLaws();
    }
    else if (input == 3)
    {
        sineLaws();
    }
    else if (input == 4)
    {
        introduction i;
        i.mainMenu();
    }
    else if (input == 5)
    {
        e.quit();
    }
    else
    {
        e.user_choice_error();
    }
}

// Following function is used to find third side when two sides are given it is known as the pythagoras theorem.
void pythagorasTheorem(void)
{
    pythagoras p;
    cout << "Please tell us more: (Remember this theorem is only for Right Angle Triangles)" << endl
         << "1. To Find Side 'a': " << endl
         << "2. To Find Side 'b': " << endl
         << "3. To Find Side 'c': " << endl;
    int input;
    cin >> input;
    if (input == 1)
    {
        float a, b, c;
        cout << "Great! Enter value of side 'b': " << endl;
        cin >> b;
        cout << "Enter value of side 'c': " << endl;
        cin >> c;
        a = p.finda(b, c);
        cout << "Hence, Side a = " << a << endl;
    }
    else if (input == 2)
    {
        float a, b, c;
        cout << "Great! Enter value of side 'a': " << endl;
        cin >> a;
        cout << "Enter value of side 'c': " << endl;
        cin >> c;
        b = p.findb(a, c);
        cout << "Hence, Side b = " << b << endl;
    }
    else if (input == 3)
    {
        float a, b, c;
        cout << "Enter value of side 'a': " << endl;
        cin >> a;
        cout << "Great! Enter value of side 'b': " << endl;
        cin >> b;
        c = p.findc(a, b);
        cout << "Hence, Side c = " << c << endl;
    }
    else
    {
        e.user_choice_error();
    }
}
// *************************************************************************************************************

//****************************ANGLE-FUNCTIONS*******************************************************************
void angleFunction(void)
{
    cout << "Great! Its complex task... But tell us more: " << endl;
    cout << "1. Find Third Angle when Two Angles are Given" << endl
         << "2. Three sides are Given (Law of Cosine)" << endl
         << "3. Main Menu"<<endl
         << "4. Quit" << endl
         << "NOTE: Sorry! We are working on new update to provide you the angle by just giving the two sides and an Angle" << endl;
         int input;
         cin>>input;
         if (input==1)
         {
            void twoAnglesGiven(void);
            twoAnglesGiven();
         }else if (input==2)
         {
            void threeSidesgiven(void);
            threeSidesgiven();
         }else if (input==3)
         {
            introduction i;
            i.mainMenu();
         }else if (input==4)
         {
            e.quit();
         }else{
            e.user_choice_error();
         }
         
}

//Following function is used to find the third angle when two angles are given.
void twoAnglesGiven(void){
    basicFunctions f;
    cout<<"Oh Great! Now tell us about Angle you wanna find: "<<endl
    <<"1. Find Angle A"<<endl
    <<"2. Find Angle B"<<endl
    <<"3. Find Angle C"<<endl;
    int input;
    cin>>input;
    if (input==1)
    {
        float A,B,C;
     cout<<"Enter the value of Angle 'B': "<<endl;
     cin>>B;
     cout<<"Enter the value of Angle 'C': "<<endl;
     cin>>C;
    A = f.thirdAngleFinder(B,C);
    cout<<"Hence, Angle A = "<<A<<" deg."<<endl;
    }else if (input==2)
    {
        float A,B,C;
     cout<<"Enter the value of Angle 'A': "<<endl;
     cin>>A;
     cout<<"Enter the value of Angle 'C': "<<endl;
     cin>>C;
    B = f.thirdAngleFinder(A,C);
    cout<<"Hence, Angle B = "<<B<<" deg."<<endl;
        
    }else if (input==3)
    {
        float A,B,C;
     cout<<"Enter the value of Angle 'A': "<<endl;
     cin>>A;
     cout<<"Enter the value of Angle 'B': "<<endl;
     cin>>B;
    C = f.thirdAngleFinder(A,C);
    cout<<"Hence, Angle C = "<<C<<" deg."<<endl;
        
    }else {
        e.user_choice_error();
    }    
}

//Following function uses Law of Cosine to find the Angle when Three sides are given.
void threeSidesgiven(void){
    float a,b,c;
    cout<<"Great! Please Enter Side 'a':"<<endl;
    cin>>a;
    cout<<"Please Enter value of Side 'b':"<<endl;
    cin>>b;
    cout<<"Please Enter value of Side 'c':"<<endl;
    cin>>c;
    lawsOfCosine object;
    object.cosAlpha(a,b,c);
    cout<<endl;
    object.cosBeta(a,b,c);
    cout<<endl;
    object.cosGamma(a,b,c);
    cout<<endl;

}
//*****************************************************************************************************************

