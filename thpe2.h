/** **********************************************************************
* @file
************************************************************************/
#pragma once
#include <cctype>
#include <cmath>
#include <string>
using namespace std;

//Constant Terms

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* The maximum number of times the Trignometric Series should be repeated
************************************************************************/
const int TERMS = 10;

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Contains the value of PI
************************************************************************/
const double PI = atan(1.0) * 4;

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Error value tolerable for sqrt, cbrt and log
************************************************************************/
const double ERRORVALUE = 0.000000000001;

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Maximum number of times a sqrt, cbrt and log loop should run
************************************************************************/
const int ITERATIONMAX = 5000;

/** **********************************************************************
* @author Steve N. de Sa
*
* @par Description
* Error value tolerable for Trignometric functions
************************************************************************/
const double ERRORTOLERANCE = 0.000001;

//Function Declarations

double mySqrt (double num);

double myCbrt (double num);

double myLog (double x, int base);

double mySin (double radians);
double mySinD (double degrees);

double myCos (double radians);
double myCosD (double degrees);

double myTan (double radians);
double myTanD (double degrees);

double factorial(int x);

void copyArray (double destination[], double source[], int size);

void initialArray (double source[], int size, double value);

double sumArray (double source[], int size);

double averageArray (double source[], int size);

int minLocation (double source[], int size);
double minValue (double source[], int size);

int maxLocation (double source[], int size);
double maxValue (double source[], int size);

int countIf (double source[], int size, double element);

void mySort (double source[], int size, string order);

int linearSearch (double source[], int size, double item);

int binarySearch (double source[], int size, double item);