#ifndef JOINTWODIGITS_H_INCLUDED
#define JOINTWODIGITS_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class joinTwoDigits
{

public:
    int letsJoin(int first_digit, int second_digit);
    int joinedDigits();
};

int joinTwoDigits::letsJoin(int first_digit, int second_digit)
{

    string first_digit_to_string = to_string(first_digit);
    string second_digit_to_string = to_string(second_digit);

    string concat = first_digit_to_string + second_digit_to_string;

    // remake them to int

    int converted = stoi(concat);

    return converted;
}

int joinTwoDigits::joinedDigits()
{
    cout << "Enter digits: " << endl;
    int first_one;
    int second_one;

    cin >> first_one;
    cin >> second_one;

    cout << letsJoin(first_one, second_one);
}


#endif // JOINTWODIGITS_H_INCLUDED
