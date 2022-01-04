#include <iostream>
#include "joinTwoDigits.h"
#include "digitExtractor.h"

/* This program can be done simply using arrays but I was using C++ after a long long time!
    So to just remember the basics and stuff I made the program using what you shouldn't I guess.
*/


using namespace std;

void beginMultiplication()
{

    digitExtractor d;
    joinTwoDigits j;

    do
    {

        vector<int> digit = d.digitExtract();

        cout << endl;

        cout << "Step one: ";
        int step_one = digit[0] * digit[2] * 100;
        cout << step_one << endl;

        cout << "Step two: ";
        int first_two_digits = j.letsJoin(digit[0], digit[1]);
        int step_two = first_two_digits * digit[3];
        cout << step_two << endl;

        cout << "Step three: ";
        int second_two_digits = j.letsJoin(digit[2], digit[3]);
        int step_three = second_two_digits * digit[1];
        cout << step_three << endl << endl;

        cout << "Answer: ";
        int addAll = step_one + step_two + step_three;
        int answer = addAll - digit[1] * digit[3];
        cout << answer << endl;

        cout << endl;
    } while( true );
}

int main()
{
    /*
    int start, i;
    start = 10;

    for( i = 10; i <= 20; i++) {
        int save;
        save = start * i;
        cout << save << endl;
    }

    for ( i = 11; i <= 20; i++) {
        int eleven = 11;
        int save;
        save = eleven * i;
        cout << save << endl;
    }

    cout << endl;
    */

    beginMultiplication();
}


