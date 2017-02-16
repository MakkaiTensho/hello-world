// Malika Drummond
// 10 February 2017
// Project 6.2
// Find the sum of nonnegative integers of the sequence
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int first_Input;					// First integer in
int odd = 0, even = 0, zero = 0;	// Number of integers for each type
int total_Nonneg, total_Neg;        // Total amount of nonnegative and negative numbers
float sum_Positive;                 // Sum of positive integers
float average;                      // Average of positive integers
int i;                              // For loop
int temp;                           // Temporary spot for numbers

// void output();

int main ()
{
// Declare file
ifstream myfile;
// Open the file numbers.txt
myfile.open("data1_for_average.txt");
// Take in the first number in the file
myfile >> first_Input;

// If the first number is less than 0...
if(first_Input < 0)
    {
    // ... then display the output message
    ofstream outputFile;
    outputFile.open("averageReport4.txt");
    outputFile << "Program ended. First number is "<< first_Input << endl;
    return 0;
    }

// Otherwise...
else
{
    //When the first number goes in...
	for (i = 0; i < first_Input; i++)
    {
        // ... Place the data into a temporary variable...
		myfile >> temp;
    // If the number is greater than 0...
	if (temp > 0)
	{
	    // Then the number is nonnegative
		total_Nonneg++;
		// ... and the sum of the nonnegative are determined.
		sum_Positive = sum_Positive + temp;

		// And if the number does not have a remainder
		if (temp % 2 == 0)
		{
		    // It is considered an odd number
			even++;
		}
		// Otherwise...
		else
		{
		    // It is considered odd
			odd++;
		}
	}
	// Otherwise, if the number equals 0...
	else if (temp == 0)
	{
	    // Consider it a nonnegative and a 0
		total_Nonneg++;
		zero++;
	}
	// Otherwise...
	else if (temp < 0)
	{
	    // Consider it a negative.
		total_Neg++;
	}
    }
    // determine the average.
    	average = sum_Positive / total_Nonneg;

    // Declare the output file
    ofstream outputFile;
    outputFile.open("averageReport4.txt");
    // Output into the file
	outputFile << "The average is " << average << endl;
	outputFile << even << " positive even numbers." << endl;
	outputFile << odd << " positive odd numbers." << endl;
	outputFile << total_Neg << " numbers less than zero" << endl;
	outputFile << "Zero occurs " << zero << " times in the list of integers" << endl;
}
// ... And terminate the program.
return 0;
}

