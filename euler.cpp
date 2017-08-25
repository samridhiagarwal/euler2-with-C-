//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	
	//3 variables to create the Fibonacci sequence from 0 to 4000000
	int a = 0;
	int b = 1;
	int c = 0;
	
	while (b <= 4000000)
	{
		c = a + b;
		if (b % 2 == 0)      //check for even number
			total += b;
		a = b;
		b = c;
	}
 
	cout << sum <<endl;
	return 0;
}
