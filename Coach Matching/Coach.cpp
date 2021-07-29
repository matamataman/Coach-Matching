#include "Coach.h"

Coach::Coach(std::string in_name, std::string in_gender, std::string in_timezone)
{
    name = in_name;
    gender = in_gender;
    timezone = in_timezone;
}

std::string Coach::GetName()
{
    return name;
}

std::string Coach::GetGender()
{
    return gender;
}

std::string Coach::GetTimezone()
{
    return timezone;
}
