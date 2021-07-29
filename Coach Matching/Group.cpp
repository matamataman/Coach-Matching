#include "Group.h"
#include <iostream>
#include <fstream>
using namespace std;

Group::Group()
{
	ifstream studentData;
	ifstream coachData;

	//open excel files
	studentData.open("Student.csv");
	coachData.open("Coach.csv");	
	//count number of lines in each file(number of students/coaches + 1)
	string skip;
	while (getline(studentData, skip))
	{
		numStudent++;
	}

	while (getline(coachData, skip))
	{
		numCoach++;
	}

	numStudent--;
	numCoach--;

	//restart files 
	studentData.clear();
	studentData.seekg(0, std::ios::beg);
	coachData.clear();
	coachData.seekg(0, std::ios::beg);

	studentList = new Student[numStudent];
	coachList = new Coach[numCoach];
	finalMatch = new int[numStudent]{0};
	match = vector< vector< vector<int> > >(numStudent, vector< vector<int> >(numCoach, std::vector<int>(2)));

	studentData.clear();
	studentData.seekg(0, std::ios::beg);

	coachData.clear();
	coachData.seekg(0, std::ios::beg);

	//retrieve student data from excel file
	for (int i = 0; i < numStudentInputCol; i++)
	{
		string skip;
		getline(studentData, skip, ',');
	}
	for (int i = 0; i < numStudent; i++)
	{
		string name;
		getline(studentData, name, ',');

		string genderPref;
		getline(studentData, genderPref, ',');

		string genderValue;
		getline(studentData, genderValue, ',');

		string timezonePref;
		getline(studentData, timezonePref, ',');

		string timezoneValue;
		getline(studentData, timezoneValue, ',');
		timezoneValue = timezoneValue[0];

		studentList[i] = Student(name, genderPref, stoi(genderValue), timezonePref, stoi(timezoneValue));
	}

	for (int i = 0; i < numCoachInputCol; i++)
	{
		string skip;
		getline(coachData, skip, ',');
	}
	for (int i = 0; i < numCoach; i++)
	{
		string name;
		getline(coachData, name, ',');

		string gender;
		getline(coachData, gender, ',');

		string timezone;
		getline(coachData, timezone, ',');

		for (int i = 0; i < timezone.size(); i++)
		{
			if (timezone[i] == '\n')
			{
				timezone = timezone.substr(0, i);
				break;
			}
		}

		coachList[i] = Coach(name, gender, timezone);
	}
}

Group::~Group()
{
	studentList = NULL;
	coachList = NULL;
	finalMatch = NULL;

	delete[] studentList;
	delete[] coachList;
	delete[] finalMatch;
}

void Group::Match()
{
	for (int j = 0; j < numStudent; j++)
	{
		for (int i = 0; i < numCoach; i++)
		{
			match[j][i][0] = i;
			if (studentList[j].GetGenderPrefType() == coachList[i].GetGender())
				match[j][i][1] += studentList[j].GetGenderPrefValue();
			if (studentList[j].GetTimezonePrefType() == coachList[i].GetTimezone())
				match[j][i][1] += studentList[j].GetTimezonePrefValue();
		}
		Sort(match[j],numCoach);
	}

	for (int i = 0; i < numStudent; i++)
	{
		CutDuplicates(i);
	}
}

void Group::Sort(vector< vector<int> > & arr, int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = j+1; i < n; i++)
		{
			if (arr[j][1] < arr[i][1])
			{
				swap(arr[j], arr[i]);
			}
		}
	}
}

void Group::CutDuplicates(int index)
{
	for (int i = 0; i < numStudent; i++)
	{
		if ((match[index][finalMatch[index]][0] == match[i][finalMatch[i]][0]) && (i != index))
		{
			if (match[index][finalMatch[index]][1] >= match[i][finalMatch[i]][1])
			{
				finalMatch[i]++;
				CutDuplicates(i);
			}
			else
			{
				finalMatch[index]++;
				CutDuplicates(index);
			}
		}
	}
}

void Group::Display()
{
	
	for (int j = 0; j < numStudent; j++)
	{
		std::cout << "Student: " << studentList[j].GetName() << "   " << "Coach: " << coachList[match[j][finalMatch[j]][0]].GetName() << std::endl;
	}
}



