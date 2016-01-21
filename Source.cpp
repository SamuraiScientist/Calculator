#include <iostream>
#include <cmath>

using namespace std;

float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
float input;
float answer;

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
    if (input == 1)
    {
        cout << "First variable: ";
        cin >> a;
        cout << "Second variable: ";
        cin >> b;
        answer = a + b;
        cout << "The sum is: " << answer << endl;
    }
    else if (input == 2)
    {
        cout << "First variable: ";
        cin >> a;
        cout << "Second variable: ";
        cin >> b;
        answer = a - b;
        cout << "The difference is: " << answer << endl;
    }
    else if (input == 3)
    {
        cout << "First variable: ";
        cin >> a;
        cout << "Second variable: ";
        cin >> b;
        answer = a * b;
        cout << "The product is: " << answer << endl;
    }
    else if (input == 4)
    {
        cout << "First variable: ";
        cin >> a;
        cout << "Second variable: ";
        cin >> b;
        answer = a / b;
        cout << "The divident is: " << answer << endl;
    }
    else if (input == 5)
    {
        cout << "Enter the base number: ";
        cin >> a;
        cout << "Enter the power: ";
        cin >> b;
        answer = pow(a, b);
        cout << "The square is: " << answer << endl;
    }
    else if (input == 6)
    {
        cout << "Enter A: ";
        cin >> a;
        cout << "Enter B: ";
        cin >> b;
        cout << "Enter C: ";
        cin >> c;
        answer = (-b + sqrt(pow(b, 2) - (4 * a * c)))/(2 * a);
        cout << "x: " << answer << endl;
        answer = (-b - sqrt(pow(b, 2) - (4 * a * c)))/(2 * a);
        cout << "x: " << answer << endl;
    }
    else
    {
        cout << "ERROR: Not a valid operation";
    }
    goto head;
    
    return 0;
}