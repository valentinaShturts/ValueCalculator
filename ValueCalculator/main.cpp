#include "ArrayDataException.h"
#include "ArraySizeException.h"
#include "ArrayValueCalculator.h"

#include <iostream>
using namespace std;

int main()
{
    string array[4][4] = 
    {
        {"1", "2", "3", "4"},
        {"5", "6", "7", "8"},
        {"9", "-9", "11", "12"},
        {"13", "14", "15", "0"}
    };
    string array1[3][4] =
    {
        {"1", "2", "3", "4"},
        {"5", "6", "7", "8"},
        {"9", "-9", "11", "12"}
    };
    string array2[4][4] =
    {
        {"1", "2", "3", "4"},
        {"5", "6", "io", "8"},
        {"9", "-9", "11", "12"},
        {"13", "14", "15", "0"}
    };
    try
    {
        int result = ArrayValueCalculator::doCalc(&array[0][0], 4, 4);
        cout << "Sum: " << result << endl;
    }

    catch (Exception& exception)
    {
        cout << exception.GetMessage() << endl;
    }
    try
    {
        int result = ArrayValueCalculator::doCalc(&array1[0][0], 3, 4);
        cout << "Sum: " << result << endl;
    }
    catch (Exception& exception)
    {
        cout << exception.GetMessage() << endl;
    }
    try
    {
        int result = ArrayValueCalculator::doCalc(&array2[0][0], 4, 4);
        cout << "Sum: " << result << endl;
    }
    catch (Exception& exception)
    {
        cout << exception.GetMessage() << endl;
    }
}