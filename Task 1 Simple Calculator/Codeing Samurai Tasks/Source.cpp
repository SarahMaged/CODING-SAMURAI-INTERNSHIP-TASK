#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int num = (rand() % 100) + 1;
	int guess_num = 0;
	do
	{
		cout << "Enter your guess between (1-100)" << endl;
		cin >> guess_num;
		if (guess_num > num)
			cout << "Guess lower number" << endl;
		else if (guess_num < num)
			cout << "Guess higher number" << endl;
		else
			cout << "Congrats you Won!,You guess a correct number" << endl;

	} while (guess_num != num);
}
