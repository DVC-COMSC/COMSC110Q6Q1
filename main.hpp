//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************
#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end)
{
	while (1){
		cin >> begin >> end;
		if (begin <= end) break;
	}
}
int isPrime(int n)
{
	if (n <= 1) return 0;
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) return 0;
	}
	return 1;
}
int getNextPrime(int n)
{
	int i = n + 1;
	while (1){
		if (isPrime(i)) return i;
		i++;
	}
}
int getPrevPrime(int n)
{
	int i = n - 1;
	while (1){
		if (isPrime(i)) return i;
		i--;
	}
}