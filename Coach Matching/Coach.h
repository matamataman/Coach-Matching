#pragma once
#include <string>

class Coach
{
	Coach(std::string in_email, std::string in_firstName, std::string in_lastName,
		std::string in_gender, std::string in_international,
		std::string in_I4, std::string in_MGTEClub, std::string in_designClub,
		std::string in_residenceLife);
	Coach() = default;

	std::string GetEmail();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetGender();
	std::string GetInternational();
	std::string GetI4();
	std::string GetMGTEClub();
	std::string GetDesignClub();
	std::string GetResidenceLife();

private:
	std::string email;
	std::string firstName;
	std::string lastName;
	std::string gender;
	std::string international;
	std::string I4;
	std::string MGTEClub;
	std::string designClub;
	std::string residenceLife;
};