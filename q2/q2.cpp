#include <iostream>
#include "q2-isTriangle.h"
#include "q2-isRightAngleTriangle.h"
#include "q2-isSequence.h"

using namespace std;

int main()
{

    while (true)
    {
        int a, b, c = 0;
        int userA, userB, userC = 0;
        // Asks the user to enter 3 positive numbers a, b, c.

        cout << "Enter your a number: ";
        cin >> userA;
        cout << "Enter your b number: ";
        cin >> userB;
        cout << "Enter your c number: ";
        cin >> userC;

        // make sure no negative numbers

        if (a < 0 || b < 0 || c < 0)
        {
            cout << "Positive numbers only" << endl;
        }
        cout << isSequence(userA, userB, userC) << endl;
    }
}