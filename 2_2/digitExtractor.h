#ifndef DIGITEXTRACTOR_H_INCLUDED
#define DIGITEXTRACTOR_H_INCLUDED

#include <iostream>
#include <vector>
using namespace std;

class digitExtractor {

    public:
        int digit1, digit2;
        vector<int> digitExtract();

};

vector<int> digitExtractor::digitExtract() {

    vector<int> vec;

    cout << "Enter the first number: " << endl;
    cin >> digit1;
    cout << "Enter the second number" << endl;
    cin >> digit2;
    cout << endl;

    // Extract single digit from two digit.
    while(digit1 && digit2 > 0) {
        vec.push_back(digit1/10);
        vec.push_back(digit1%10);
        vec.push_back(digit2/10);
        vec.push_back(digit2%10);
        cout << "saved digts: " << endl;
        for ( auto saved_digits = vec.begin(); saved_digits != vec.end(); saved_digits++ ) {
            cout << *saved_digits << endl;
        }
        cout << endl;
        break;
    }

    cout << "  " << digit1 << endl;
    cout << " *" << digit2 << endl;
    cout << "-------" << endl;

    return vec;
}

#endif // DIGITEXTRACTOR_H_INCLUDED
