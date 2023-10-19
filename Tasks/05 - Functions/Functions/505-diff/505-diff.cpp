#include <iostream>
using namespace std;

//Function prototypes
int sub(int u, int v);
int absDiff(int var1, int var2);


int main()
{
    int var1, var2;

    //Prompt the user
    cout << endl << "Enter value 1: ";
    cin >> var1;
    cout << endl << "Enter value 2: ";
    cin >> var2;

    int diff = absDiff(var1, var2);

    cout << "Absolute diff = " << diff << endl;
}

// Simple function to subtract
// return result is u-v


int absDiff(int var1, int var2)
{
    // create variables to hold the reslts of the calculation
    int diff = 0;

    // Calculate the difference
    if (var1 >= var2)               // check which variable is larger - also this covers the case where they are the same
    {
        diff = sub(var1, var2);     // do the subtraction
    }
    else
    {
        diff = sub(var2, var1);     // do the subtraction
    }

    return diff;

}





int sub(int u, int v)
{
    int y = u - v;
    return y;
}