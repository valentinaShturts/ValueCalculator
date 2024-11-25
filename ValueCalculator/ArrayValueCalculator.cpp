#include "ArrayValueCalculator.h"
#include "ArrayDataException.h"
#include "ArraySizeException.h"

#include <stdexcept>
int ArrayValueCalculator::doCalc(const string* arr, int rows, int cols)
{
	if (rows != 4 || cols != 4) throw ArraySizeException("Array size exception. Size must be 4x4");

    int sum = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            try 
            {
                sum += stoi(arr[i * cols + j]); 
            }
            catch (const invalid_argument&)
            {
                throw ArrayDataException("Array data exception at [" + to_string(i) + "][" + to_string(j) + "]" );
            }
            catch (const out_of_range&)
            {
                throw ArrayDataException("Array data exception. Data out of range");
            }
        }
    }
    return sum;
}
