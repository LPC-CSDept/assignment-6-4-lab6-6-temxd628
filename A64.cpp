//		Make a program that find the prime numbers according to two user inputs [begin, end]
//		begin and end must be positive integers.
//			if begin == end, getListprime(int) function is called with default arguments [begin, 100]
//			if begin > end,  getListprime(  ) function is called with default arguments [0, 100]
//			if begin < end, getListprime(int, int) fuction is called with the range from begin to end.
//		example)
//			user input = 20, 20 , call getListprime( 20 ) // the second parameter is default.[20,100]
//			user input = 40, 20 , call getListprime(   ) // the both parameters are default. [0,100]
//			user input = 20, 50,  call getListprime(20, 50) // call the function with actual arguments

#include <iostream>
#include <iomanip>
using namespace std;

void getListprime(int = 2, int = 100);

int main()
{
	int begin, end;
	cout << "Enter your input (two integer for range ) \n";
	cin >> begin >> end;
	if (begin < end)
		getListprime(begin, end);
	else if (begin > end)
		getListprime();
	else
		getListprime(begin);
}

void getListprime(int begin, int end)
{
	int i, j;
	for (i = begin; i <= end; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0){
				break;
			}
		}
		if (j == i) {
			cout << i << " ";
		}
	} 
	cout << endl;
}
