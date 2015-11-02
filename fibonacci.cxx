
#include <iostream>

using namespace std;

int main() {

	int N;
	int x0 = 0;		//Startwerte
	int x1 = 1;		//Startwerte
	int f = 1;			//
	
	cout << "Please insert an integer number between 0 and 46." << endl;
	cout << "N = ";	//stupid people are told what to do
	cin >> N;		//value for N is read from console


	//check if stupid people really do what they are told to do!!

if (cin.fail())			//if the inserted Number does not fullfill the previously defined restrictions (to be integer)
				//this if clause comes into effect
	cout << "I said integer number, idiot!" << endl;
else{
if (N < 0)
	cout << "N > 0"  << endl;
else {
if (N > 46)			
	cout << "N < 45 ... You really should learn how to read!" << endl;
else  {
if (N == 0)
	f = x0;
else
	{for(int i = 1; i < N; i++){
		
		f += x0;	//sum of f(i-1) and f(i-2) equals f(i)
		x0 = x1;	//for next iteration f(i-1) becomes f(i-2)
		x1 = f;		//for next iteration f becomes f(i-1)
		}

	}
		cout << "f(" << N << ") = " << f << endl;
      }
	
     }
	
    }	

	return 0;
}
