#include "Student.h"

Student::Student(std::string in_name, std::string in_genderPref, int in_genderValue, std::string in_timezonePref, int in_timezoneValue)
{

    name = in_name;
    genderPrefType = in_genderPref;
    genderPrefValue = in_genderValue;
    timezonePrefType = in_timezonePref;
    timezonePrefValue = in_timezoneValue;
}


std::string Student::GetName()
{
    return name;
}

std::string Student::GetGenderPrefType()
{
    return genderPrefType;
}

int Student::GetGenderPrefValue()
{
    return genderPrefValue;
}

std::string Student::GetTimezonePrefType()
{
    return timezonePrefType;
}

int Student::GetTimezonePrefValue()
{
    return timezonePrefValue;
}
