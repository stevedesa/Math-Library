#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "thpe2.h"

//TEST CASES FOR MYSQRT

TEST_CASE ("mySqrt - To find square root of number")
{
    SECTION ("To find Sqrt of 144")
    {
        double num = 144.0;
        REQUIRE ( Approx(mySqrt(num)) == 12.0 );
    }
    SECTION ("To find Sqrt of 12.25")
    {
        double num = 12.25;
        REQUIRE ( Approx(mySqrt(num)) == 3.5 );
    }
    SECTION ("To find Sqrt of -81")
    {
        double num = -81.0;
        REQUIRE ( Approx(mySqrt(num)) == 0 );
    }
    SECTION ("To find Sqrt of 4.0")
    {
        double num = 4.0;
        REQUIRE ( Approx(mySqrt(num)) == 2.0 );
    }
    SECTION ("To find Sqrt of 8.5")
    {
        double num = 8.5;
        REQUIRE ( Approx(mySqrt(num)) == 2.9154759 );
    }
    SECTION ("To find Sqrt of 0.50")
    {
        double num = 0.50;
        REQUIRE ( Approx(mySqrt(num)) == 0.70710678 );
    }
}

//TEST CASES FOR MYCBRT

TEST_CASE ("myCbrt - To find cube root of number")
{
    SECTION ("To find Cbrt of 10")
    {
        double num = 10;
        REQUIRE ( Approx(myCbrt(num)) == 2.15443469 );
    }
    SECTION ("To find Sqrt of 729")
    {
        double num = 729;
        REQUIRE ( Approx(myCbrt(num)) == 9.0 );
    }
    SECTION ("To find Cbrt of -27")
    {
        double num = -27.0;
        REQUIRE ( Approx(myCbrt(num)) == 0 );
    }
    SECTION ("To find Cbrt of 8.0")
    {
        double num = 8.0;
        REQUIRE ( Approx(myCbrt(num)) == 2.0 );
    }
    SECTION ("To find Cbrt of 42.875")
    {
        double num = 42.875;
        REQUIRE ( Approx(myCbrt(num)) == 3.5 );
    }
    SECTION ("To find Cbrt of 0.015625")
    {
        double num = 0.015625;
        REQUIRE ( Approx(myCbrt(num)) == 0.25 );
    }
}

//TEST CASES FOR MYLOG

TEST_CASE ("myLog - To find log of a number")
{
    SECTION ("To find Log of x=28 and base=3")
    {
        double x = 28.0;
        int base = 3;
        REQUIRE ( Approx(myLog(x, base)) ==  3.0331032563 );
    }
    SECTION ("To find Log of x=14.5 and base=2")
    {
        double x = 14.5;
        int base = 2;
        REQUIRE ( Approx(myLog(x, base)) ==  3.8579809951 );
    }
    SECTION ("To find Log of x=99.9 and base=11")
    {
        double x = 99.9;
        int base = 11;
        REQUIRE ( Approx(myLog(x, base)) ==  1.9200878945 );
    }
    SECTION ("Extra Test Cases")
    {
        REQUIRE ( Approx(myLog( 64, 8 )) == 2.0 );
        REQUIRE ( Approx(myLog( 16, 8 )) == 1.33333 );
        REQUIRE ( Approx(myLog( 1024, 2 )) == 10.0 );
        REQUIRE ( Approx(myLog( 8, 10 )) == 0.903089 );
    }
}

//TEST CASES FOR MYSIN

TEST_CASE ("mySin - To find Sine value of an angle")
{
    SECTION ("To find Sine of angle 0.785398 (radians)")
    {
        double radians = 0.785398;
        REQUIRE ( fabs( mySin(radians) - sin(radians) ) < ERRORTOLERANCE );
    }  
    SECTION ("To find Sine of angle 1.0472 (radians)")
    {
        double radians = 1.0472;
        REQUIRE ( fabs( mySin(radians) - sin(radians) ) < ERRORTOLERANCE );
    }   
    SECTION ("To find Sine of angle 0.523599 (radians)")
    {
        double radians = 0.523599;
        REQUIRE ( fabs( mySin(radians) - sin(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Sine of angle 0 (radians)")
    {
        double radians = 0;
        REQUIRE ( fabs( mySin(radians) - sin(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Sine of angle 1.5708 (radians)")
    {
        double radians = 1.5708;
        REQUIRE ( fabs( mySin(radians) - sin(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Sine of angle 0.785398 (radians)")
    {
        double radians = 0.785398;
        REQUIRE ( fabs( mySin(radians) - sin(radians) ) < ERRORTOLERANCE );
    }
}

//TEST CASES FOR MYSIND

TEST_CASE ("mySinD - To find Sine value of an angle")
{
    SECTION ("To find Sine of angle 45 (degrees)")
    {
        double degrees = 45.0;
        REQUIRE ( fabs( mySinD(degrees) - sin( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }  
    SECTION ("To find Sine of angle 60 (degrees)")
    {
        double degrees = 60.0;
        REQUIRE ( fabs( mySinD(degrees) - sin( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }   
    SECTION ("To find Sine of angle 30 (degrees)")
    {
        double degrees = 30.0;
        REQUIRE ( fabs( mySinD(degrees) - sin( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Sine of angle 0 (degrees)")
    {
        double degrees = 0.0;
        REQUIRE ( fabs( mySinD(degrees) - sin( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Sine of angle 90 (degrees)")
    {
        double degrees = 90.0;
        REQUIRE ( fabs( mySinD(degrees) - sin( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
}

//TEST CASES FOR MYCOS

TEST_CASE ("myCos - To find Cosine value of an angle")
{
    SECTION ("To find Cosine of angle 0.785398 (radians)")
    {
        double radians = 0.785398;
        REQUIRE ( fabs( myCos(radians) - cos(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Cosine of angle 0.261799 (radians)")
    {
        double radians = 0.261799;
        REQUIRE ( fabs( myCos(radians) - cos(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Cosine of angle 0.523599 (radians)")
    {
        double radians = 0.523599;
        REQUIRE ( fabs( myCos(radians) - cos(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Cosine of angle 0 (radians)")
    {
        double radians = 0;
        REQUIRE ( fabs( myCos(radians) - cos(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Sine of angle 1.5708 (radians)")
    {
        double radians = 1.5708;
        REQUIRE ( fabs( myCos(radians) - cos(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Sine of angle 0.785398 (radians)")
    {
        double radians = 0.785398;
        REQUIRE ( fabs( myCos(radians) - cos(radians) ) < ERRORTOLERANCE );
    }
}  

//TEST CASES FOR MYCOSD

TEST_CASE ("myCosD - To find Cosine value of an angle")
{
    SECTION ("To find Cosine of angle 45 (degrees)")
    {
        double degrees = 45.0;
        REQUIRE ( fabs( myCosD(degrees) - cos( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Cosine of angle 15 (degrees)")
    {
        double degrees = 15.0;
        REQUIRE ( fabs( myCosD(degrees) - cos( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Cosine of angle 30 (degrees)")
    {
        double degrees = 30.0;
        REQUIRE ( fabs( myCosD(degrees) - cos( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Cosine of angle 0 (degrees)")
    {
        double degrees = 0.0;
        REQUIRE ( fabs( myCosD(degrees) - cos( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Cosine of angle 90 (degrees)")
    {
        double degrees = 90;
        REQUIRE ( fabs( myCosD(degrees) - cos( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
}

//TEST CASES FOR MYTAN

TEST_CASE ("myTan - To find Tan value of an angle")
{
    SECTION ("To find Tan of angle 1.0472 (radians)")
    {
        double radians = 1.0472;
        REQUIRE ( fabs( myTan(radians) - tan(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Tan of angle 0.261799 (radians)")
    {
        double radians = 0.261799;
        REQUIRE ( fabs( myTan(radians) - tan(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Tan of angle 0.523599 (radians)")
    {
        double radians = 0.523599;
        REQUIRE ( fabs( myTan(radians) - tan(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Tan of angle 0 (radians)")
    {
        double radians = 0.0;
        REQUIRE ( fabs( myTan(radians) - tan(radians) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Tan of angle 0.785398 (radians)")
    {
        double radians = 0.785398;
        REQUIRE ( fabs( myTan(radians) - tan(radians) ) < ERRORTOLERANCE );
    }
}

//TEST CASES FOR MYTAND

TEST_CASE ("myTanD - To find Tan value of an angle")
{
    SECTION ("To find Tan of angle 15 (degrees)")
    {
        double degrees = 15.0;
        REQUIRE ( fabs( myTanD(degrees) - tan( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Tan of angle 30 (degrees)")
    {
        double degrees = 30.0;
        REQUIRE ( fabs( myTanD(degrees) - tan( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Tan of angle 45 (degrees)")
    {
        double degrees = 45.0;
        REQUIRE ( fabs( myTanD(degrees) - tan( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
    SECTION ("To find Tan of angle 0 (degrees)")
    {
        double degrees = 0.0;
        REQUIRE ( fabs( myTanD(degrees) - tan( degrees * PI / 180.0 ) ) < ERRORTOLERANCE );
    }
}

//TEST CASES FOR COPYARRAY

TEST_CASE ("copyArray - To copy array from source array to destination array")
{
    const int size = 4;
    double destination [size];

    SECTION ("Copying String #1")
    {
        double source[size] = { 1.1, 2.2, 3.3, 4.4 };
        copyArray (destination, source, size);

        REQUIRE (destination[0] == 1.1);
        REQUIRE (destination[1] == 2.2);
        REQUIRE (destination[2] == 3.3);
        REQUIRE (destination[3] == 4.4);
    }

    SECTION ("Copying String #2")
    {
        double source[size] = { 901.5, 233.2, 524.0, 765.4 };
        copyArray (destination, source, size);

        REQUIRE (destination[0] == 901.5);
        REQUIRE (destination[1] == 233.2);
        REQUIRE (destination[2] == 524.0);
        REQUIRE (destination[3] == 765.4);
    }
}

//TEST CASES FOR INITIALARRAY

TEST_CASE ("initializeArray - to initialize every element in the array to provided value")
{
    const int size = 4;
    double source [size];

    SECTION ("Initializing array to 3.14")
    {
        double value = 3.14;
        initialArray (source, size, value);

        REQUIRE (source[0] == 3.14);
        REQUIRE (source[1] == 3.14);
        REQUIRE (source[2] == 3.14);
        REQUIRE (source[3] == 3.14);
    }

    SECTION ("Initializing array to 6.022")
    {
        double value = 6.022;
        initialArray (source, size, value);

        REQUIRE (source[0] == 6.022);
        REQUIRE (source[1] == 6.022);
        REQUIRE (source[2] == 6.022);
        REQUIRE (source[3] == 6.022);
    }
}
    
//TEST CASES FOR SUMARRAY

TEST_CASE ("sumArray - to find the sum of values of the array")
{
    SECTION ("#1")
    {
        const int size = 5;
        double source [size] = { 1.2, 2.3, 3.4, 4.5, 5.6 };

        REQUIRE( sumArray(source, size) == 17.0 );
    }
    
    SECTION ("#2")
    {
        const int size = 4;
        double source [size] = { 101.2, 202.3, 303.4, 404.5 };

        REQUIRE( sumArray(source, size) == 1011.4 );
    }

    SECTION ("#3")
    {
        const int size = 6;
        double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

        REQUIRE( sumArray(source, size) == 1682.8 );
    }
}

//TEST CASES FOR AVERAGEARRAY

TEST_CASE ("averageArray - to find the average value of the array values")
{
    SECTION ("#1")
    {
        const int size = 5;
        double source [size] = { 1.2, 2.3, 3.4, 4.5, 5.6 };

        REQUIRE( averageArray(source, size) == 3.4 );
    }
    
    SECTION ("#2")
    {
        const int size = 4;
        double source [size] = { 101.2, 202.3, 303.4, 404.5 };

        REQUIRE( averageArray(source, size) == 252.85 );
    }

    SECTION ("#3")
    {
        const int size = 6;
        double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

        REQUIRE( averageArray(source, size) == Approx(280.46666) );
    }
}

//TEST CASES FOR MINLOCATION & MINVALUE

TEST_CASE ("minLocation + minValue - to find the element with the least value and it's location")
{
    SECTION ("#1")
    {
        const int size = 6;
        double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

        REQUIRE( minLocation(source, size) == 3 );
        REQUIRE( minValue(source, size) == 0.7 );
    }

    SECTION ("#2")
    {
        const int size = 6;
        double source [size] = { 98.1, 822.7, 9.1, 8.1, 4.4, 4.39 };

        REQUIRE( minLocation(source, size) == 5 );
        REQUIRE( minValue(source, size) == 4.39 );
    }

    SECTION ("#3")
    {
        const int size = 8;
        double source [size] = { 998.1, 1.2, 2.3, 1.12, 1.11, 1.111, 1.1111, 1.11111 };

        REQUIRE( minLocation(source, size) == 4 );
        REQUIRE( minValue(source, size) == 1.11 );
    }
}

//TEST CASES FOR MAXLOCATION & MAXVALUE

TEST_CASE ("maxLocation + maxValue - to find the element with the greatest value and it's location")
{
    SECTION ("#1")
    {
        const int size = 6;
        double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

        REQUIRE( maxLocation(source, size) == 4 );
        REQUIRE( maxValue(source, size) == 1212.5 );
    }

    SECTION ("#2")
    {
        const int size = 6;
        double source [size] = { 98.1, 822.7, 9.1, 8.1, 4.4, 4.39 };

        REQUIRE( maxLocation(source, size) == 1 );
        REQUIRE( maxValue(source, size) == 822.7 );
    }

    SECTION ("#3")
    {
        const int size = 8;
        double source [size] = { 998.1, 1.2, 2.3, 1.12, 1.11, 1.111, 1.1111, 1.11111 };

        REQUIRE( maxLocation(source, size) == 0 );
        REQUIRE( maxValue(source, size) == 998.1 );
    }
}

//TEST CASES FOR COUNTIF

TEST_CASE ("countIf - to find the number of times an element is repeated")
{
    const int size = 10;
    double source [size] = { 1.2, 2.3, 3.4, 1.2, 5.6, 1.2, 1.6, 2.3, 4.3, 3.4 };

    SECTION ("To find how many times 1.2 is repeated")
    {
        double element = 1.2;
        REQUIRE( countIf(source, size, element) == 3 );
    }

    SECTION ("To find how many times 2.3 is repeated")
    {
        double element = 2.3;
        REQUIRE( countIf(source, size, element) == 2 );
    }

    SECTION ("To find how many times 5.6 is repeated")
    {
        double element = 5.6;
        REQUIRE( countIf(source, size, element) == 1 );
    }
}

//TEST CASES FOR MYSORT

TEST_CASE ("mySort - to sort elements in either increasing or decreasing order")
{
    SECTION("Ascending Order #1")
    {
        const int size = 6;
        double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };
        string order = "ASC";
        mySort( source, size, order );

        REQUIRE( source[0] == 0.7 );
        REQUIRE( source[1] == 1.0 );
        REQUIRE( source[2] == 2.4 );
        REQUIRE( source[3] == 21.3 );
        REQUIRE( source[4] == 444.9 );
        REQUIRE( source[5] == 1212.5 );
    }

    SECTION("Descending Order #1")
    {
        const int size = 6;
        double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };
        string order = "DSC";
        mySort( source, size, order );

        REQUIRE( source[0] == 1212.5 );
        REQUIRE( source[1] == 444.9 );
        REQUIRE( source[2] == 21.3 );
        REQUIRE( source[3] == 2.4 );
        REQUIRE( source[4] == 1.0 );
        REQUIRE( source[5] == 0.7 );
    }
}

//TEST CASES FOR LINEARSEARCH

TEST_CASE ("linearSearch - to find location of the element")
{
    const int size = 6;
    double source [size] = { 21.3, 444.9, 2.4, 0.7, 1212.5, 1.0 };

    SECTION ("to find location of 2.4")
    {
        double item = 2.4;
        int location = linearSearch( source, size, item );
        REQUIRE( location == 2 );
    }

    SECTION ("to find location of 444.9")
    {
        double item = 444.9;
        int location = linearSearch( source, size, item );
        REQUIRE( location == 1 );
    }

    SECTION ("to find location of 444.9")
    {
        double item = 1.0;
        int location = linearSearch( source, size, item );
        REQUIRE( location == 5 );
    }
}

//TEST CASES FOR BINARYSEARCH

TEST_CASE ("binarySearch - to find location of the element")
{
    const int size = 6;
    double source [size] = { 0.7, 1.0, 2.4, 21.3, 444.9, 1212.5 };
    mySort( source, size, "ASC" );

    SECTION ("to find location of 2.4")
    {
        double item = 2.4;
        int location = binarySearch( source, size, item );
        REQUIRE( location == 2 );
    }

    SECTION ("to find location of 444.9")
    {
        double item = 444.9;
        int location = binarySearch( source, size, item );
        REQUIRE( location == 4 );
    }

    SECTION ("to find location of 1.0")
    {
        double item = 1.0;
        int location = binarySearch( source, size, item );
        REQUIRE( location == 1 );
    }
}

//EXTRA TEST CASES FOR LINEAR + BINARY SEARCH & SIN, SIND, COS, COSD

TEST_CASE ("EXTRA TEST CASES")
{
    double data[10] = { 34.5, 23.4, 1.05, 7.4, 290.38, 20.7, 5.02, 1.05, 290.38, 7.4 };

    REQUIRE( linearSearch( data, 10, 23.4) == 1 );
    REQUIRE( linearSearch( data, 10, 300.54) == -1 );

    mySort( data, 10, "ASC");
    REQUIRE( binarySearch( data, 10, 5.02) == 2 );
    REQUIRE( binarySearch( data, 10, 34.5) == 7 );
    REQUIRE( binarySearch( data, 10, 0.54) == -1 );
    REQUIRE( binarySearch( data, 10, 300.54) == -1 );

    REQUIRE( fabs( mySin(PI) - sin(PI) ) < ERRORTOLERANCE );
    REQUIRE( fabs( mySin(PI/2) - sin(PI/2) ) < ERRORTOLERANCE );
    REQUIRE( fabs( mySin(PI/4) - sin(PI/4) ) < ERRORTOLERANCE );

    REQUIRE( fabs( mySinD(180) - sin(PI) ) < ERRORTOLERANCE );
    REQUIRE( fabs( mySinD(90) - sin(PI/2) ) < ERRORTOLERANCE );
    REQUIRE( fabs( mySinD(45) - sin(PI/4) ) < ERRORTOLERANCE );

    REQUIRE( fabs( myCos(PI) - cos(PI) ) < ERRORTOLERANCE );
    REQUIRE( fabs( myCos(PI/2) - cos(PI/2) ) < ERRORTOLERANCE );
    REQUIRE( fabs( myCos(PI/4) - cos(PI/4) ) < ERRORTOLERANCE );

    REQUIRE( fabs( myCosD(180) - cos(PI) ) < ERRORTOLERANCE );
    REQUIRE( fabs( myCosD(90) - cos(PI/2) ) < ERRORTOLERANCE );
    REQUIRE( fabs( myCosD(45) - cos(PI/4) ) < ERRORTOLERANCE );
}

//END