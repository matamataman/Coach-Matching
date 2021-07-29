#pragma once
#include "Coach.h"
#include "Student.h"
#include <string>
#include <vector>
using namespace std;

class Group
{
public:
	Group();
	~Group();
	void Match();
	void Display();


private:
	void Sort(vector< vector<int> >& arr, int n);
	void CutDuplicates(int index);

private:
	Student * studentList; 
	Coach * coachList; 
	int* finalMatch;
	vector< vector< vector<int> > > match;

	static const int numStudentInputCol = 6; //number of columns in the input file
	static const int numCoachInputCol = 4; //number of columns in the input file
	int numStudent;
	int numCoach;
};