#include<iostream>
using namespace std;
int main() {

	//task 1
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "enter marks of first subject :";
	cin >> n1;
	cout << "enter marks of second subject :";
	cin >> n2;
	cout << "enter marks of third subject :";
	cin >> n3;
	if ((n1 + n2 + n3) / 3 > 80)
	{
		cout << "you are above standard!" << endl;
		cout << "admission granted!" << endl;
	}
	return 0;
	//task3
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "enter first number:";
	cin >> n1;
	cout << "enter second number:";
	cin >> n2;
	cout << "enter third number :";
	cin >> n3;
	cout << "output :" << endl;
	if (n1>n2&&n3)
	{
		cout << "the maximum number is:"<<n1 << endl;

	}
	if (n2 > n3 && n1)
	{
		cout << "the maximum number is:" << n2 << endl;

	}
	if (n3 > n2 && n1)
	{
		cout << "the maximum number is:" << n3 << endl;

	}
	//task5
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "input:" << endl;
	cout << "enter your score:";
	cin >> n1;
	if (n1 > 50)
	{
		cout << "you passed." << endl;
	}
	else
	{
		cout << "you failed" << endl;
	}
	//task6
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "input:"<<endl;
	cout << "enter first integer:";
	cin >> n1;
	cout << "enter second second:";
	cin >> n2;
	cout << "output:"<<endl;
	if (n2 % n1 == 0)
	{
		cout <<n1<< "is the multiple of " << endl<<n2;

	}
	else
	{
		cout<<n1 << " is not the multiple of "<<n2 << endl;

	}








	return 0;







}