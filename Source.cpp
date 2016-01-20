#include <iostream>

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
    cout << "Calculator\n";
    cout << "1. Add\n";
    cout << "2. Sub\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Square\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
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
        cout << "Enter the number you want squared: ";
        cin >> a;
        answer = a * a;
        cout << "The square is: " << answer << endl;
    }
    
    return 0;
}