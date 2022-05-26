// Project 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Salome Oumarou Wate
// Email Address: Salome.oumarou@gmail.com
// Assignment Number: 3
// Lab3_b.cpp - This program displays a calendar for a given year
// Day 1: Sunday, Day 2: Monday, Day 3: Tuesday
// Day 4: Wednesday, Day 5: Thursday, Day 6: Friday
// Day 7: Saturday
// Last Changed: September 12, 2021

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n_days, start_day, n_year;
	string name_month;

	cout << "Enter the year for which you wish to generate the calendar: ";
	cin >> n_year;
	cout << "Enter the day of the week that January first is on: ";
	cin >> start_day;
	cout << endl;
	cout << "Calendar for year "<< n_year << endl;
	cout << endl;
	
	for (int month = 1; month <= 12; month++)
	{
		switch (month)
		{
		case 1:
		{
			n_days = 31;
			name_month = "January";
			break;
		}
		case 2:
		{
			name_month = "February";
			if((n_year % 400 ==0) || ((n_year % 4 == 0) && (n_year % 100 != 0)))
			{
				n_days = 29;
			}
			else
			{
				n_days = 28;
			}
			break;
		}
		case 3:
		{
			n_days = 31;
			name_month = "March";
			break;
		}
		case 4:
		{
			n_days = 30;
			name_month = "April";
			break;
		}
		case 5:
		{
			n_days = 31;
			name_month = "May";
			break;
		}
		case 6:
		{
			n_days = 30;
			name_month = "June";
			break;
		}
		case 7:
		{
			n_days = 31;
			name_month = "July";
			break;
		}
		case 8:
		{
			n_days = 31;
			name_month = "August";
			break;
		}
		case 9:
		{
			n_days = 30;
			name_month = "September";
			break;
		}
		case 10:
		{
			n_days = 31;
			name_month = "October";
			break;
		}
		case 11:
		{
			n_days = 30;
			name_month = "November";
			break;
		}
		case 12:
		{
			n_days = 31;
			name_month = "December";
			break;
		}
		default:
			break;

		}
		cout << "\t" << name_month;
		cout << endl << "\tSun\tMon\tTue\tWed\tThr\tFri\tSat\n";
		cout << "\t";

		for (int i = 1; i < start_day; i++)
		{
			cout << " \t";
		}

		for (int j = 1; j <= n_days; j++)
		{
			if ( ( (j + start_day - 2) % 7 == 0) && (j != 1 ))
			{
				cout << endl << "\t";
			}

			cout << j << "\t";
			if (j == n_days)
			{
				int last_day_index = (j + start_day - 1) % 7;
				start_day = last_day_index + 1;
			}
		}

		cout << endl << endl;
	}

	return 0;
}
