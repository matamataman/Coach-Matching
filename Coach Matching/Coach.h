#pragma once
#include <string>

class Coach
{
public:
	Coach(std::string in_name, std::string in_gender, std::string in_timezone);
	Coach() = default;

	std::string GetName();
	std::string GetGender();
	std::string GetTimezone();
private:

	std::string name;
	std::string gender;
	std::string timezone;


};