#pragma once
#include <string>

class Student
{
public:
	Student(std::string in_email, std::string in_firstName, std::string in_lastName,
			std::string in_genderPref, std::string in_internationalPref,
			std::string in_I4Pref, std::string in_MGTEClubPref, std::string in_designClubPref,
			std::string in_residenceLifePref);
	Student() = default;

	std::string GetEmail();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetGenderPref();
	std::string GetInternationalPref();
	std::string GetI4Pref();
	std::string GetMGTEClubPref();
	std::string GetDesignClubPref();
	std::string GetResidenceLifePref();
	
private:
	std::string email;
	std::string firstName;
	std::string lastName;
	std::string genderPref;
	std::string internationalPref;
	std::string I4Pref;
	std::string MGTEClubPref;
	std::string designClubPref;
	std::string residenceLifePref;
};