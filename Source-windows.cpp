#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

#define PI 3.14159

float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
string input;
float answer;
float handler;
bool adding = false;
bool subtracting = false;
bool multiplying = false;
bool dividing = false;

int main()
{
    SetConsoleTitle("Calculator");
    listMain:
    cout << "CALCULATOR\n";
    cout << "1. Basic Ops.\n";
    cout << "2. Area\n";
    cout << "3. Volume\n";
    cout << "4. Formulas\n";
    cout << "5. Conversions\n";
    cout << "Enter Group Number: ";
    cin >> input;
    if (input == "?" || input == "Help" || input == "HELP" || input == "help")
    {
        cout << "This help section is of no help! Right now...\n";
    }
    else if (input == "1")
    {
        //Basic Operations
        listBas:
        cout << "BASIC OPS.\n";
        cout << "1. Addition\n";
        cout << "2. Subraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "Enter Operation Number: ";
        cin >> input;
        if (input == "Back" || input == "back")
        {
            goto listMain;
        }
        else if (input == "1")
        {
            cout << "ADDITION\n";
            cout << "Enter first variable: ";
            cin >> a;
            cout << "Enter second variable: ";
            cin >> b;
            answer = a + b;
            cout << "The sum is " << answer << endl;
        }
        else if (input == "2")
        {
            cout << "SUBTRACTION\n";
            cout << "First variable: ";
            cin >> a;
            cout << "Second variable: ";
            cin >> b;
            answer = a - b;
            cout << "The difference is: " << answer << endl;
        }
        else if (input == "3")
        {
            cout << "MULTIPLICATION\n";
            cout << "First variable: ";
            cin >> a;
            cout << "Second variable: ";
            cin >> b;
            answer = a * b;
            cout << "The product is: " << answer << endl;
        }
        else if (input == "4")
        {
            cout << "DIVISION\n";
            cout << "First variable: ";
            cin >> a;
            cout << "Second variable: ";
            cin >> b;
            answer = a / b;
            cout << "The divident is: " << answer << endl;
        }
        else if (input == "5")
        {
            cout << "POWER\n";
            cout << "Enter the base number: ";
            cin >> a;
            cout << "Enter the power: ";
            cin >> b;
            answer = pow(a, b);
            cout << "The square is: " << answer << endl;
        }
    }
    else if (input == "2")
    {
        listArea:
        cout << "AREA\n";
        cout << "1. Triangle\n";
        cout << "2. Trapezoid\n";
        cout << "3. Circle\n";
        cout << "Enter Operation Number: ";
        cin >> input;
        if (input == "Back" || input == "back")
        {
            goto listMain;
        }
        else if (input == "1")
        {
            cout << "AREA OF TRIANGLE\n";
            cout << "Enter the base: ";
            cin >> a;
            cout << "Enter the height: ";
            cin >> b;
            answer = (0.5 * a) * b;
            cout << "The area is " << answer << endl;
        }
        else if (input == "2")
        {
            cout << "AREA OF TRAPEZOID\n";
            cout << "Enter Base 1: ";
            cin >> a;
            cout << "Enter Base 2: ";
            cin >> b;
            cout << "Enter Height ";
            cin >> c;
            answer = ((a + b) * c) / 2;
            cout << "The area is " << answer << endl;
        }
        else if (input == "3")
        {
            cout << "AREA OF CIRCLE\n";
            cout << "Enter the radius: ";
            cin >> a;
            answer = PI * (pow(a, 2));
            cout << "The radius is " << answer << endl;
        }
    }
    else if (input == "3")
    {
        listVol:
        cout << "VOLUME\n";
        cout << "1. Rectangular Prisim\n";
        cout << "2. Pyramid\n";
        cout << "Enter Operation Number: ";
        cin >> input;
        if (input == "Back" || input == "back")
        {
            goto listMain;
        }
        else if (input == "1")
        {
            cout << "VOLUME OF RECTANGULAR PRISIM\n";
            cout << "Enter Length: ";
            cin >> a;
            cout << "Enter Width: ";
            cin >> b;
            cout << "Enter Height: ";
            cin >> c;
            answer = a * b * c;
            cout << "The volume is " << answer << endl;
        }
        else if (input == "2")
        {
            cout << "VOLUME OF PYRAMID\n";
            cout << "Enter Length: ";
            cin >> a;
            cout << "Enter Width: ";
            cin >> b;
            cout << "Enter Height: ";
            cin >> c;
            answer = (a * b * c) / 2;
            cout << "The volume is " << answer << endl;
        }
        
    }
    else if (input == "4")
    {
        listForm:
        cout << "FORMULAS\n";
        cout << "1. Quadratic Formula\n";
        cout << "Enter Operation Number: ";
        cin >> input;
        if (input == "Back" || input == "back")
        {
            goto listMain;
        }
        else if (input == "1")
        {
            cout << "QUADRATIC FORMULA\n";
            cout << "Enter A: ";
            cin >> a;
            cout << "Enter B: ";
            cin >> b;
            cout << "Enter C: ";
            cin >> c;
            //Squareroots cannot be negative 
            handler = pow(b, 2) - (4 * a * c);
            if (handler < 0)
            {
                cout << "Error: No real roots!\n";
            }
            else
            {
                answer = (-b + sqrt(pow(b, 2) - (4 * a * c)))/(2 * a);
                cout << "x: " << answer << endl;
                answer = (-b - sqrt(pow(b, 2) - (4 * a * c)))/(2 * a);
                cout << "x: " << answer << endl;
            }
            
        }
    }
    else if (input == "5")
    {
        listConv:
        cout << "Waiting to add stuff.\n";
    }
    else if (input == "Exit" || input == "exit" || input == "EXIT")
    {
        goto leave;
    }
    else 
    {
        cout << "ERROR: Not a valid operation!\a\n";
        system("pause");
        system("cls");
        goto listMain;
    }
    
    cout << "Make sure to copy down the information you need.\n";
    system("pause");
    system("cls");
    goto listMain;
    
    leave:
    exit;
    
    return 0;
}