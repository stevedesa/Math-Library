/** **********************************************************************
* @file
************************************************************************/

#include "thpe2.h"

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Square Root of a number using Newton's Bisection Method.
* The function approximates the square root, by bisection and returns 
* it to the user.
*
* @param[in] num double containing the number whose square root is to be 
* found
*
* @returns The approximate Square Root of the number
*
* @par Example
* @verbatim
double result;
result = Approx(mySqrt(144.0)); //Result would be 12.0 (sqrt of 144)
result = Approx(mySqrt(12.25)); //Result would be 3.5 (sqrt of 12.25)
result = Approx(mySqrt(-81.0)); //Result would be 0 (invalid)
result = Approx(mySqrt(8.5)); //Result would be 2.9154759 (sqrt of 8.5)
@endverbatim
************************************************************************/
double mySqrt (double num)
{
    int i=0; 
    double high;

    if ( num < 0 )
    {
        return 0;
    }
    else
    {
        if ( num >= 1 )
        {
            high = num;
        }
        else 
        {
            high = 1;
        }

        double low = 0;
        double mid = (high + low)/2.0;

        for (i=0; ( fabs( pow(mid, 2.0) - num ) > ERRORVALUE ) && ( i<ITERATIONMAX ); i++)    
        {
            if( pow(mid, 2.0) > num )
            {
                high = mid;
            }
            else 
            {
                low = mid;
            }
            mid = (high + low)/2.0;
        }

        return mid;
    }
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Cube Root of a number using Newton's Bisection Method.
* The function approximates the cube root, by bisection and returns 
* it to the user.
*
* @param[in] num double containing the number whose cube root is to be 
* found
*
* @returns The approximate Cube Root of the number
*
* @par Example
* @verbatim
double result;
result = Approx(myCbrt(729.0)); //Result would be 9.0 (cbrt of 729.0)
result = Approx(myCbrt(42.875)); //Result would be 3.5 (cbrt of 42.875)
result = Approx(myCbrt(-27.0)); //Result would be 0 (invalid)
result = Approx(myCbrt(10.0)); //Result would be 2.15443469 (cbrt of 10.0)
@endverbatim
************************************************************************/
double myCbrt (double num)
{
    int i=0; 
    double high;

    if ( num < 0 )
    {
        return 0;
    }
    else
    {
        if ( num >= 1 )
        {
            high = num;
        }
        else 
        {
            high = 1;
        }

        double low = 0;
        double mid = (high + low)/2.0;

        for (i=0; ( fabs( pow(mid, 3.0) - num ) > ERRORVALUE ) && ( i<ITERATIONMAX ); i++)    
        {
            if( pow(mid, 3.0) > num )
            {
                high = mid;
            }
            else 
            {
                low = mid;
            }
            mid = (high + low)/2.0;
        }

        return mid;
    }
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Log of a number using Newton's Bisection Method.
* The function approximates the log, by bisection and returns 
* it to the user.
*
* @param[in] x double containing the x value of the log function
* @param[in] base double containing the base part of the log function 
*
* @returns The approximate Log of the number
*
* @par Example
* @verbatim
double result;
result = Approx(myLog(28.0, 3)); //Result would be 3.0331032563 (28.0 = x, 3 = base)
result = Approx(myLog(14.5, 2)); //Result would be 3.8579809951 (14.5 = x, 2 = base)
result = Approx(myLog(99.9, 11)); //Result would be 1.9200878945 (99.9 = x, 11 = base)
result = Approx(myLog(64.0, 8)); //Result would be 2.0 (64.0 = x, 8 = base)
@endverbatim
************************************************************************/
double myLog (double x, int base)
{
    int i;
    double high;

    for( high=1; pow( base, high ) <= x ; high++ )
    {}

    double low = high - 1;
    double mid = (high + low)/2.0;

    for (i=0; ( fabs( pow(base, mid) - x ) > ERRORVALUE ) && ( i<ITERATIONMAX ); i++)    
    {
        if( pow(base, mid) > x )
        {
            high = mid;
        }
        else 
        {
            low = mid;
        }
        mid = (high + low)/2.0;
    }

    return mid;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Sin value of a number without using the library function.
* The function approximates the Sin of the number, by using the MacLaurin 
* Series designed to approximate the value of Sin.
*
* @param[in] radians double containing the Sin angle in radians
*
* @returns The approximate Sin value of the number
*
* @par Example
* @verbatim
double result;
result = mySin(0.785398); //Result would be very close to sin value of 0.785398 radians
result = mySin(1.0472); //Result would be very close to sin value of 1.0472 radians
result = mySin(0.523599); //Result would be very close to sin value of 0.523599 radians
result = mySin(0); //Result would be very close to sin value of 0 radians
@endverbatim
************************************************************************/
double mySin (double radians)
{
    int i;
    double sum=0;
    for( i=1; i<TERMS; i++ )
    {
        if(i%2==0)
        {
            sum -= pow(radians, i*2-1)/factorial(i*2-1);
        }
        else
        {
            sum += pow(radians, i*2-1)/factorial(i*2-1);
        }
    }
    return sum;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Sin value of a number without using the library function.
* The function approximates the Sin of the number, by using the MacLaurin 
* Series designed to approximate the value of Sin.
* It first converts degrees to radians and then proceeds.
*
* @param[in] degrees double containing the Sin angle in degrees
*
* @returns The approximate Sin value of the number
*
* @par Example
* @verbatim
double result;
result = mySinD(90); //Result would be very close to sin value of 90 degrees
result = mySinD(60); //Result would be very close to sin value of 60 degrees
result = mySinD(30); //Result would be very close to sin value of 30 degrees
result = mySinD(0); //Result would be very close to sin value of 0 degrees
@endverbatim
************************************************************************/
double mySinD (double degrees)
{
    int i;
    double sum=0;

    double radians = (degrees*PI)/180.0;

    for( i=1; i<=TERMS; i++ )
    {
        if(i%2==0)
        {
            sum -= pow(radians, i*2-1)/factorial(i*2-1);
        }
        else
        {
            sum += pow(radians, i*2-1)/factorial(i*2-1);
        }
    }
    return sum;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Cosine value of a number without using the library function.
* The function approximates the Cos of the number, by using the MacLaurin 
* Series designed to approximate the value of Cos.
*
* @param[in] radians double containing the Cos angle in radians
*
* @returns The approximate Cosine value of the number
*
* @par Example
* @verbatim
double result;
result = myCos(0.785398); //Result would be very close to cos value of 0.785398 radians
result = myCos(1.0472); //Result would be very close to cos value of 1.0472 radians
result = myCos(0.523599); //Result would be very close to cos value of 0.523599 radians
result = myCos(0); //Result would be very close to cos value of 0 radians
@endverbatim
************************************************************************/
double myCos (double radians)
{
    int i;
    double sum=0;
    for( i=0; i<TERMS; i++ )
    {
        if(i%2==0)
        {
            sum += pow(radians, i*2)/factorial(i*2);
        }
        else
        {
            sum -= pow(radians, i*2)/factorial(i*2);
        }
    }
    return sum;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Cosine value of a number without using the library function.
* The function approximates the Cos of the number, by using the MacLaurin 
* Series designed to approximate the value of Cos.
* It first converts degrees to radians and then proceeds.
*
* @param[in] degrees double containing the Cos angle in degrees
*
* @returns The approximate Cos value of the number
*
* @par Example
* @verbatim
double result;
result = myCosD(90); //Result would be very close to sin value of 90 degrees
result = myCosD(60); //Result would be very close to sin value of 60 degrees
result = myCosD(30); //Result would be very close to sin value of 30 degrees
result = myCosD(0); //Result would be very close to sin value of 0 degrees
@endverbatim
************************************************************************/
double myCosD (double degrees)
{
    int i;
    double sum=0;

    double radians = (degrees*PI)/180.0;

    for( i=0; i<TERMS; i++ )
    {
        if(i%2==0)
        {
            sum += pow(radians, i*2)/factorial(i*2);
        }
        else
        {
            sum -= pow(radians, i*2)/factorial(i*2);
        }
    }
    return sum;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Tangent value of a number without using the library function.
* The function divides the Sine value by Cosine value of the particular angle.
*
* @param[in] radians double containing the Tan angle in radians
*
* @returns The approximate Tan value of the number
*
* @par Example
* @verbatim
double result;
result = myTan(0.785398); //Result would be very close to tan value of 0.785398 radians
result = myTan(1.0472); //Result would be very close to tan value of 1.0472 radians
result = myTan(0.523599); //Result would be very close to tan value of 0.523599 radians
result = myTan(0); //Result would be very close to tan value of 0 radians
@endverbatim
************************************************************************/
double myTan (double radians)
{
    return mySin(radians)/myCos(radians);
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the Tangent value of a number without using the library function.
* The function divides the Sine value by Cosine value of the particular angle.
* It first converts degrees to radians and then proceeds.
*
* @param[in] degrees double containing the Tan angle in degrees
*
* @returns The approximate Tan value of the number
*
* @par Example
* @verbatim
double result;
result = myTanD(90); //Result would be very close to tan value of 90 degrees
result = myTanD(60); //Result would be very close to tan value of 60 degrees
result = myTanD(30); //Result would be very close to tan value of 30 degrees
result = myTanD(0); //Result would be very close to tan value of 0 degrees
@endverbatim
************************************************************************/
double myTanD (double degrees)
{
    double radians = (degrees*PI)/180.0;
    
    return mySin(radians)/myCos(radians);
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the factorial of a number and returns the factorial as a double
*
* @param[in] x integer containing x value
*
* @returns The factorial of x (input)
*
* @par Example
* @verbatim
double result;
result = factorial(90); //Result would be 5040
result = factorial(4); //Result would be 24
result = factorial(1); //Result would be 1
result = factorial(0); //Result would be 1
@endverbatim
************************************************************************/
double factorial(int x)
{
    int i;
    double fact=1;
    if( x > 0 )
    {
        for( i=1; i<=x; i++ )
        {
            fact *= i;
        }
        return fact;
    }
    else
    {
        return 1;
    }
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To copy the contents of one array into another array
*
* @param[out] destination[] double array which copies the data from source[]
* @param[in] source[] double array which is the input source of the elements
* @param[in] size integer containing the size of both arrays
*
* @par Example
* @verbatim
const int size = 4;
double source[size] = { 1.1, 2.2, 3.3, 4.4 };

copyArray (destination, source, size);
double destination[size] = { 1.1, 2.2, 3.3, 4.4 };
@endverbatim
************************************************************************/
void copyArray (double destination[], double source[], int size)
{
    int i;
    for( i=0; i<size; i++ )
    {
        destination[i] = source[i];
    }
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To initialize all elements of an array to a particular value
*
* @param[in,out] source[] double array which sets all values of source[] to
* element 'value' 
* @param[in] size integer containing the size of the array
* @param[in] value double containing the element that all source array 
* should be set to
*
* @par Example
* @verbatim
const int size = 4;
double source[size];;

initialArray ( source, size, 1.1 ); //Set all values of array to 1.1
double source[size] = { 1.1, 1.1, 1.1, 1.1 };
@endverbatim
************************************************************************/
void initialArray (double source[], int size, double value)
{
    int i;
    for( i=0; i<size; i++ )
    {
        source[i] = value;
    }
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the sum of all the values in an array
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
*
* @returns Returns double value of Sum of elements of the array
*
* @par Example
* @verbatim
const int size = 5;
double source [size] = { 1.2, 2.3, 3.4, 4.5, 5.6 };

double result = sumArray(source, size); //Result would be 17.0
@endverbatim
************************************************************************/
double sumArray (double source[], int size)
{
    int i;
    double sum=0;
    for( i=0; i<size; i++ )
    {
        sum += source[i];
    }
    return sum;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the average of all the values in an array
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
*
* @returns Returns the average of all elements of the array
*
* @par Example
* @verbatim
const int size = 5;
double source [size] = { 1.2, 2.3, 3.4, 4.5, 5.6 };

double result = averageArray(source, size); //Result would be 3.4
@endverbatim
************************************************************************/
double averageArray (double source[], int size)
{
    int i;
    double sum=0;
    for( i=0; i<size; i++ )
    {
        sum += source[i];
    }
    return sum/size;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the location of the smallest element in an array
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
*
* @returns Returns the location of the smallest element
*
* @par Example
* @verbatim
const int size = 6;
double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

double result = minLocation(source, size); //Result would be 3
@endverbatim
************************************************************************/
int minLocation (double source[], int size)
{
    int i;
    int location = 0;
    double min = source[0];
    for( i=0; i<size; i++ )
    {
        if( source[i] < min )
        {
            min = source[i];
            location = i;
        }
    }
    return location;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the value of the smallest element in an array
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
*
* @returns Returns the value of the smallest element
*
* @par Example
* @verbatim
const int size = 6;
double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

double result = minValue(source, size); //Result would be 0.7
@endverbatim
************************************************************************/
double minValue (double source[], int size)
{
    int i;
    double min = source[0];
    for( i=0; i<size; i++ )
    {
        if( source[i] < min )
        {
            min = source[i];
        }
    }
    return min;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the location of the largest element in an array
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
*
* @returns Returns the location of the largest element
*
* @par Example
* @verbatim
const int size = 6;
double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

double result = maxLocation(source, size); //Result would be 1212.5
@endverbatim
************************************************************************/
int maxLocation (double source[], int size)
{
    int i;
    int location = 0;
    double max = source[0];
    for( i=0; i<size; i++ )
    {
        if( source[i] > max )
        {
            max = source[i];
            location = i;
        }
    }
    return location;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the value of the largest element in an array
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
*
* @returns Returns the value of the largest element
*
* @par Example
* @verbatim
const int size = 6;
double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

double result = maxValue(source, size); //Result would be 1212.5
@endverbatim
************************************************************************/
double maxValue (double source[], int size)
{
    int i;
    double max = source[0];
    for( i=0; i<size; i++ )
    {
        if( source[i] > max )
        {
            max = source[i];
        }
    }
    return max;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the number of times a particular element is repeated in an array
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
* @param[in] element double containing the required element
*
* @returns Returns the number of time the element is repeated
*
* @par Example
* @verbatim
const int size = 10;
double source [size] = { 1.2, 2.3, 3.4, 1.2, 5.6, 1.2, 1.6, 2.3, 4.3, 3.4 };

double element = 1.2;
double result = countIf(source, size, element); //Result would be 3
@endverbatim
************************************************************************/
int countIf (double source[], int size, double element)
{
    int i, count=0;
    for( i=0; i<size; i++ )
    {
        if( source[i] == element )
        {
            count++;
        }
    }
    return count;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To sort elements of an array in ascending or descending order as specified
* by the user
*
* @param[in,out] source[] double array containing elements of value, will be 
* returned as a sorted array
* @param[in] size integer containing the size of the array
* @param[in] order string containing the order ("ASC" or "DSC")
*
* @par Example
* @verbatim
const int size = 3;
double source [size] = { 21.3, 444.9, 2.4 };
string order = "ASC";

mySort( source, size, order );
double source [size] = { 2.4, 21.3, 444.9 }; //Result
@endverbatim
************************************************************************/
void mySort (double source[], int size, string order)
{
    int i,j;
    for( i=0; i<size-1; i++ )
    {
        for( j=0; j<size-1-i; j++ )
        {
            if( order == "ASC" && (source[j] > source[j+1]) )
            {
                swap( source[j], source[j+1] );
            }

            if( order == "DSC" && (source[j] < source[j+1]) )
            {
                swap( source[j], source[j+1] );
            }
        }
    }
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the location of a particular element in an array using the linear 
* search algorithm (will return -1 if element isn't found)
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
* @param[in] item double containing the element to be found
*
* @returns Returns the location of the element
*
* @par Example
* @verbatim
const int size = 6;
double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

double item = 2.4;
int location = linearSearch( source, size, item ); //Location would be 2
@endverbatim
************************************************************************/
int linearSearch (double source[], int size, double item)
{
    int i;
    for( i=0; i<size; i++ )
    {
        if( source[i] == item )
        {
            return i;
        }
    }
    return -1;
}

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* To find the location of a particular element in an array using the binary 
* search algorithm (will return -1 if element isn't found).
* Binary search algorithm is much fast than the Linear search algorithm for
* arrays of many values (the array has to be sorted first though).
*
* @param[in] source[] double array containing elements of value
* @param[in] size integer containing the size of the array
* @param[in] item double containing the element to be found
*
* @returns Returns the location of the element
*
* @par Example
* @verbatim
const int size = 6;
double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };
mySort( source, size, "ASC" );

double item = 2.4;
int location = binarySearch( source, size, item ); //Location would be 2
@endverbatim
************************************************************************/
int binarySearch (double source[], int size, double item)
{
    int low = 0;
    int high = size-1;
    int mid;

    while( low <= high )
    {
        mid = (low+high)/2;
        if( source[mid] == item )
        {
            return mid;
        }
        else if( source[mid] < item )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}