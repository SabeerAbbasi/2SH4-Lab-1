
#include "Questions.h"


int Q1_for(){

	//initializing variables
	int sum = 0;
	int i = 30;
	
	// calculate your sum below..this has to use for loop
	
	for(i=30; i <= 1000; i++) //sets range for the for loop
	{
		if (i % 4 == 0) // checks to see if our number has a remainder when divided by 4
		{
			sum = sum + i;
		}
		else
		{
			continue;  //if there is a remainder, then continue without any action
		}
	}
	
	
	// here, we return the calculated sum:
	return sum;
}
int Q1_while(){
	int sum = 0;
	int i = 30;

	// calculate your sum below..this has to use while loop
	
	while (i <= 1000)
	{
		if (i % 4 == 0)
		{
			sum = sum + i;
		}

		i++;
	}
	return sum;
}
int Q1_do(){

	int sum = 0;
	int i = 30;
	
	// calculate your sum below..this has to use do-while loop
	
	do {
		if (i % 4 == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	while (i <= 1000);

	return sum;
}

//===============================================================================================
int Q2(int Q2_input){
	
	// this is the flag that is holding whether the input number is 5-digit or not
	int IsFiveDigit;
	int dig_length = 0;
	// Do your coding below to check
	
	while (Q2_input != 0)
	{
		Q2_input /= 10;

		dig_length++;
	}
	if (dig_length == 5)
	{
		IsFiveDigit = 1;
	}
	else
	{
		IsFiveDigit = 0;
	}
	            
	//finally, we must return IsFiveDigit, which must be 1 is the number is five digits and 0 otherwise
	return IsFiveDigit;
}

//===============================================================================================
int Q3(float Q3_input){
	
	/* Question 3: 
	Write a program that takes a student's Q3_input as an input, which is a floating point value,
	and returns:
	4 if the Q3_input is in the range 90-100,
	3 if it is in the range 80-89, 
	2 if it is in the range 70-79,
	1 if it is in the range 60-69 and
	0 if the Q3_input is between 0 and 59.
	If the Q3_input is not in the range 0-100, the program shouldreturn -1
*/	
	// this is the varaible that holds the out value to return
	float GPA;
	
	
	// Do your coding below to calculate the GPA variable value
	if (Q3_input >= 90 && Q3_input <= 100){
			GPA = 4;
	}
	if (Q3_input >= 80 && Q3_input <= 89){
			GPA = 3;
		}
	if (Q3_input >= 70 && Q3_input <= 79){
			GPA = 2;
		}
	if (Q3_input >= 60 && Q3_input <= 69){
			GPA = 1;
		}
	if (Q3_input >= 0 && Q3_input <= 59){
			GPA = 0;
		}
	if (Q3_input < 0 || Q3_input > 100){
			GPA = -1;
		}
	 
	// finally, we return the GPA
	return GPA;	
}

//===============================================================================================
double Q4(int Q4_input){
	
	// this is the variable that holds the pi value to return
	double pi=0;
	int term = 1; //term initialization
	double den = 1.0; //denominator initialization
	double num = 4.0; //numerator initialization
	
	// Do your coding below to calculate the pi value
	if (Q4_input >= term)
	{
		while (term <= Q4_input)
		{
			pi = pi + num/den;
			den = den + 2.0;
			num = num * -1;
			term++;
		}
	}
	else
	{
		pi = 0;
	}
	// finally, we return the pi value
	return pi;	
}

//===============================================================================================
int Q5(){
	
	// this is the variable that holds and the total number of triples to return at the end of the function
	int totNumTribles=0;
	
	
	/* Do your coding below
		Use a triple-nested for loop that simply tries all possibilities
		and update the total number of triples if needed
	*/
	
	for (int x = 1; x <= 400; x++)
	{
		for (int y = 1; y < x; y++)
		{
			for (int z = y; z < x; z++)
			{
				if((y*y) + (z*z) == (x*x))
					totNumTribles++;
			}
		}
	}

	//finally you should return the total number of tribles.
	return totNumTribles;
}

//===============================================================================================
int Q6(int Q6_input, int perfect[]){
	
		//counts is the variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	    int counts=0;
	    int position = 0;
	    int i;
	    int term;
	    int x;
		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*autmoatically reflect in the main calling function.
		*/
	    //for loop designed to iterate as many times as Q6_input
	    for (i=1; i < Q6_input; i++)
	    {
	    	term = 0; //sets term to 0 after each iteration

	    	//creating for loop to iterate through each number and check if it is a factor or not
	    	for (x = 1; x < i; x++)
	    	{
	    		if (i % x == 0)
	    		{
	    			term = term + x;
	    		}
	    	}
	    	//check to see if the factors added up correctly, to their iterated numbers
	    	if (i == term)
	    	{
	    		counts++;
	    		perfect[position] = term; // append the perfect numbers to an array
	    		position++; //increment the index
	    	}
	    }

	   return counts;

	
}
//===============================================================================================
int Q7a(int Q7_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	int i;
	int divide_by = 10;
	
	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//in this part you can assume the knowledge of the number of digits: seven-digit positive integer
	
	for (i = 0; i <7; i++)
	{
		reversedInt += (Q7_input % divide_by/(divide_by/10));
		reversedInt *= 10;
		divide_by *= 10;
	}
	reversedInt /= 10;
	
		return reversedInt;
	
}

int Q7b(int Q7b_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	

	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//this part should be generalized for any number of allowed digits
	
	while(1)
	{
		reversedInt += Q7b_input%10;
		Q7b_input /= 10;

		if (Q7b_input == 0)
		{
			break;
		}
		reversedInt *= 10;
	}

	return reversedInt;

	
	
	
}
