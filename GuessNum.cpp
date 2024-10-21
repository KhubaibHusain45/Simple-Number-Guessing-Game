#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int GuessNum()
{
    int RandomNumber = rand() % 10 + 1;
    int guess = 0;
    int UserNum;
    do
    {
        cout << "Enter a Number: " << endl;
        cin >> UserNum;

        if (UserNum == RandomNumber)
        {
            cout << "You guessed the correct number in " << guess + 1 << " attempts" << endl;
        }
        else if (UserNum < RandomNumber)
        {
            cout << "Enter a Higher number" << endl;
        }
        else if (UserNum > RandomNumber)
        {
            cout << "Enter a Lower Number " << endl;
        }
        guess += 1;
    } while (UserNum != RandomNumber);
}
int main()
{
    GuessNum();
}