#pragma once
#include <string>

class Student
{
public:
	Student(std::string in_name, std::string in_genderPref, int in_genderValue, std::string in_timezonePref, int in_timezoneValue);
	Student() = default;
	std::string GetName();
	std::string GetGenderPrefType();
	std::string GetTimezonePrefType();
	int GetGenderPrefValue();
	int GetTimezonePrefValue();
private:
	std::string name;
	std::string genderPrefType;
	std::string timezonePrefType;
	int genderPrefValue;
	int timezonePrefValue;
};