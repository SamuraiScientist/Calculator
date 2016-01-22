#include <iostream>
#include <cmath>
#include <fstream>
//#include <windows.h> //Need for system("cls") on Windows

using namespace std;

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
    head:
    cout << "Calculator\n";
    cout << "1. Add\n";
    cout << "2. Sub\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Power\n";
    cout << "6. Quadratic Formula\n";
    cout << "Enter Operation Number: ";
    cin >> input;
    if (input == "1")
    {
        cout << "ADDITION\n";
        adding = true;
        while (adding == true)
        {
            cout << "First variable: ";
            cin >> a;
            cout << "Second variable: ";
            cin >> b;
            answer = a + b;
            cout << "The sum is: " << answer << endl;
            cout << "Continue adding?(y/n) ";
            cin >> input;
            if (input == "N" || input == "n")
            {
                adding = false;
                //system("cls");
            }
        }
    }
    else if (input == "2")
    {
        cout << "SUBTRACTION\n";
        subtracting = true;
        while (subtracting == true)
        {
            cout << "First variable: ";
            cin >> a;
            cout << "Second variable: ";
            cin >> b;
            answer = a - b;
            cout << "The difference is: " << answer << endl;
            cout << "Continue subtracting?(y/n) ";
            cin >> input;
            if (input == "N" || input == "n")
            {
                subtracting = false;
                //system("cls");
            }
        }
    }
    else if (input == "3")
    {
        cout << "MULTIPLYCATION\n";
        multiplying = true;
        while (multiplying == true)
        {
            cout << "First variable: ";
            cin >> a;
            cout << "Second variable: ";
            cin >> b;
            answer = a * b;
            cout << "The product is: " << answer << endl;
            cout << "Continue multiplying?(y/n) ";
            cin >> input;
            if (input == "N" || input == "n")
            {
                multiplying = false;
                //system("cls");
            }
        }
    }
    else if (input == "4")
    {
        cout << "DIVISION\n";
        dividing = true;
        while (dividing == true)
        {
            cout << "First variable: ";
            cin >> a;
            cout << "Second variable: ";
            cin >> b;
            answer = a / b;
            cout << "The divident is: " << answer << endl;
            cout << "Continue dividing?(y/n) ";
            cin >> input;
            if (input == "N" || input == "n")
            {
                dividing = false;
                //system("cls");
            }
        }
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
    else if (input == "6")
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
            cout << "Error: No real roots\n";
        }
        else
        {
            answer = (-b + sqrt(pow(b, 2) - (4 * a * c)))/(2 * a);
            cout << "x: " << answer << endl;
            answer = (-b - sqrt(pow(b, 2) - (4 * a * c)))/(2 * a);
            cout << "x: " << answer << endl;
        }
    }
    else if (input == "Exit" || input == "exit" || input == "EXIT")
    {
        goto leave;
    }
    else 
    {
        cout << "ERROR: Not a valid operation!\n";
        goto head;
    }
    
    goto head;
    
    leave:
    exit;
    
    return 0;
}