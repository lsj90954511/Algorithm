#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	string s1, s2, s3;
	int i = 1;
	cin >> s1 >> s2 >> s3;

	if (s1 != "FizzBuzz" && s1 != "Fizz" && s1 != "Buzz") {
		int s = stoi(s1) + 3;
		if (s % 3 == 0 && s % 5 == 0)
			cout << "FizzBuzz";
		else if (s % 3 == 0)
			cout << "Fizz";
		else if (s % 5 == 0)
			cout << "Buzz";
		else
			cout << s;
	}
	else if (s2 != "FizzBuzz" && s2 != "Fizz" && s2 != "Buzz") {
		int s = stoi(s2) + 2;
		if (s % 3 == 0 && s % 5 == 0)
			cout << "FizzBuzz";
		else if (s % 3 == 0)
			cout << "Fizz";
		else if (s % 5 == 0)
			cout << "Buzz";
		else
			cout << s;
	}
	else {
		int s = stoi(s3) + 1;
		if (s % 3 == 0 && s % 5 == 0)
			cout << "FizzBuzz";
		else if (s % 3 == 0)
			cout << "Fizz";
		else if (s % 5 == 0)
			cout << "Buzz";
		else
			cout << s;
	}

	return 0;
}