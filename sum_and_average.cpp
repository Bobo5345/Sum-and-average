#include <iostream>
using namespace std;
int main()
{
    // Declaring variables
    int sum, avg, count;

    // Asking user to input
    cout << "Enter how much values you have: ";
    cin >> count;

    // Creating array and inputting values into it (Adding them for sum too :D)
    int num[count];
    for (int i = 0; i < count; i++)
    {
        cout << "\nEnter value " << i+1 << ":";
        cin >> num[count];
        sum += num[count];
    }

    // Finding avg using 'sum/count'
    avg = sum / count;

    // Printing values
    cout << "\nThe sum is " << sum << " and the average is " << avg << endl;

    return 0;
}