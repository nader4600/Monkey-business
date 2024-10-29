#include<iostream>
using namespace std;
int main()
{
		const int total_monkey = 3, total_days = 5;
		int array[total_monkey][total_days], least = INT_MAX, greatest = INT_MIN, sum=0;
		double average;
		for (int i = 0; i < total_monkey; i++)//for loop for rows
		{
			for (int a = 0; a < total_days; a++)//for loop for column
			{
				cout << "Monkey  " << i + 1 ;//monkey daily eating
				cout << " Day  " << a + 1<<endl ;
				cin >> array[i][a];
				while (array[i][a] < 1)
				{
					cout << "Input a valid number : " << endl;
					cin >> array[i][a];//0+0
				}
				sum = sum + array[i][a];//0+(0+0)
				if (least > array[i][a])//smallest number finding
				{
					least = array[i][a];
				}
				if (greatest < array[i][a])//largest number finding
				{
					greatest = array[i][a];
				}
			}
		}
		average = sum / (total_days * total_monkey);//finding average
		cout << "The Average of Numbers is : " << average << endl;
		cout << "The least number is : " << least << endl;//cout least number
		cout << "The Greatest number is : " << greatest << endl;//cout largest number
}