#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int Ex1(int a, int b)
{
	if (a == b)
	{
		return (a + b) * 3;
	}
	else
	{
		return a + b;
	}
}
int Ex2(int n)
{
	int value = 51;
	if (n < value)
	{
		return abs(n - value);
	}
	else
	{
		return abs(n - value) * 3;
	}
}
int Ex3(int a, int b)
{
	if (a + b == 30 || a == 30 || b == 30)
	{
		return true;
	}

	return false;
}
int Ex4(int a)
{
	if (abs(a - 100) <= 10 || abs(a - 200) <= 10)
	{
		return true;
	}
	return false;
}
string Ex5(string n)
{
	string newString;
	string Slice = n.substr(0, 2);
	if (Slice == "if")
	{
		return n;
	}
	else
	{
		for (int i = 0; i <= n.length(); i++)
		{
			if (i == 0)
			{
				newString += "if ";
			}
			newString += n[i];
		}
		return newString;
	}
}
string Ex6(string n, int position)
{
	string str;
	for (int i = 0; i <= n.length() - 1; i++)
	{
		if (i == position)
		{
			continue;
		}
		else
		{
			str += n[i];
		}
	}
	return str;
}
string Ex7(string n)
{
	char strFirst, strLast;
	strFirst = n[0];
	strLast = n[n.length() - 1];
	n[0] = strLast;
	n[n.length() - 1] = strFirst;
	return n;
}
string Ex8(string n)
{
	string newStr;
	if (n.length() > 1)
	{
		int i = 0;
		while (i <= 3)
		{
			newStr += n.substr(0, 2);
			i++;
		}
		return newStr;
	}
	return n;
}
string Ex9(string n)
{
	string s = n.substr(n.length() - 1);
	return s + n + s;
}
bool Ex10(int val)
{
	if (val % 7 == 0 || val % 3 == 0)
	{
		return true;
	}
	return false;
}
string Ex11(string val)
{
	string str = val.substr(0, 3);
	return str + val + str;
}
bool Ex14(int a, int b)
{
	return (a >= 100 && a <= 200 && b >= 100 && b <= 200) ? true : false;
}
int Ex18(int a, int b, int c)
{
	int max;
	(a > b) ? max = a : max = b;
	(max < c) ? max = c : 0;
	return max;
}
int Ex19(int a, int b)
{
	const int val = 100;
	return ((val - a) == (val - b) ? 0 : ((val - a) > (val - b)) ? b: a);
}
int Ex20(int a, int b)
{
	int min{20}, max{30};
	if (a >= min && a <= max && b >= min && b <= max)
	{
		return (a > b) ? a : b;
	}
	return 0;
}
bool Ex22(string n)
{
	int i{0}, inc{0};
	for (i = 0; i < n.length(); i++)
	{
		(tolower(n[i]) == 'z') ? inc++ : inc;
	}
	return (inc >= 2 && inc <= 4) ? true : false;
}

int main()
{
	// Write a C++ program to compute the sum of the two given integer values.If the two values are the same, then return triple their sum.
	cout << Ex1(1, 2) << endl;
	cout << Ex1(3, 2) << endl;
	cout << Ex1(2, 2) << endl;
	// Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
	cout << Ex2(53) << endl;
	cout << Ex2(30) << endl;
	cout << Ex2(51) << endl;
	//  Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30
	cout << Ex3(30, 0) << endl;
	cout << Ex3(25, 5) << endl;
	cout << Ex3(20, 30) << endl;
	cout << Ex3(20, 25) << endl;
	// Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.
	cout << Ex4(103) << endl;
	cout << Ex4(90) << endl;
	cout << Ex4(89) << endl;
	cout << Ex4(50) << endl;
	// Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.
	cout << Ex5("else") << endl;
	cout << Ex5("if Else") << endl;
	// Write a C++ program to remove the character in a given position of a given string. The given position will be in the range 0..string length -1 inclusive
	cout << Ex6("Python", 1) << endl;
	cout << Ex6("Python", 0) << endl;
	cout << Ex6("Python", 4) << endl;
	// Write a C++ program to exchange the first and last characters in a given string and return the new string
	cout << Ex7("Python") << endl;
	cout << Ex7("abcd") << endl;
	cout << Ex7("a") << endl;
	cout << Ex7("xy") << endl;
	// Write a C++ program to create a new string which is 4 copies of the 2 front characters of a given string.If the given string length is less than 2 return the original string.
	cout << Ex8("C sharp") << endl;
	cout << Ex8("JS") << endl;
	cout << Ex8("a") << endl;
	//  Write a C++ program to create a new string with the last char added at the front and back of a given string of length 1 or more.
	cout << Ex9("Red") << endl;
	cout << Ex9("Green") << endl;
	cout << Ex9("1") << endl;
	// Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.
	cout << Ex10(3) << endl;
	cout << Ex10(14) << endl;
	cout << Ex10(12) << endl;
	cout << Ex10(37) << endl;
	// Write a C++ program to create a new string taking the first 3 characters of a given string and return the string with the 3 characters added at both the front and back. If the given string length is less than 3, use whatever characters are there.
	cout << Ex11("Python") << endl;
	cout << Ex11("Js") << endl;
	cout << Ex11("Code") << endl;
	// Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive
	cout << Ex14(100, 199) << endl;
	cout << Ex14(250, 300) << endl;
	cout << Ex14(105, 190) << endl;
	// Write a C++ program to check the largest number among three given integers
	cout << Ex18(1, 2, 3) << endl;
	cout << Ex18(1, 3, 2) << endl;
	cout << Ex18(1, 1, 1) << endl;
	cout << Ex18(1, 2, 2) << endl;
	// Write a C++ program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal
	cout << Ex19(78,95) <<endl;
	cout << Ex19(95,95) <<endl;
	cout << Ex19(99,70) <<endl;
	// Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.
	cout<<	Ex20(97,86) <<endl;
	cout<<	Ex20(20,30) <<endl;
	cout<<	Ex20(21,25) <<endl;
	cout<<	Ex20(28,28) <<endl;
	// Write a C++ program to check if a given string contains between 2 and 4 'z' character.
	cout << Ex22("frizz") << endl;
	cout << Ex22("zane") << endl;
	cout << Ex22("Zazz") << endl;
	cout << Ex22("false") << endl;

	return 0;
}

// https://www.w3resource.com/cpp-exercises/basic-algorithm/index.php