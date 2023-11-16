#include <iostream>

using namespace std;

int seqsum(int n1, int n2)
{
    // if ((n1 < 0 && n2 > 0) || (n1 > 0 && n2 < 0) || (n1 < 0 && n2 < 0))
    if (n1 < 0 || n2 < 0)
    {
        cout << "   Error: Positive numbers only" << endl;
    }
    else
    {

        int lastNum = 0;
        if ((n1 >= 0 && n1 <= 1000) && (n2 >= 0 && n2 <= 1000))
        {
            for (int i = n1; i <= n2; i++)
            {
                lastNum += i;
                // cout<< lastNum << endl; // Debug purpose
            }
            cout << "Sum of Sequence is : " << lastNum << endl;
        }
    }
    return 0;
}

int main()
{

    while (true)
    {
        int userN1, userN2 = 0;
        cout << "Enter your n1 number: ";
        cin >> userN1;
        cout << "Enter your n2 number: ";
        cin >> userN2;

        seqsum(userN1, userN2);
    }
}