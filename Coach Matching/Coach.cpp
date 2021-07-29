#include "Coach.h"

Coach::Coach(std::string in_email, std::string in_firstName, std::string in_lastName,
    std::string in_gender, std::string in_international,
    std::string in_I4, std::string in_MGTEClub, std::string in_designClub,
    std::string in_residenceLife)
{
    email = in_email;
    firstName = in_firstName;
    lastName = in_lastName;
    gender = in_gender;
    international = in_international;
    I4 = in_I4;
    MGTEClub = in_MGTEClub;
    designClub = in_designClub;
    residenceLife = in_residenceLife;
}


std::string Coach::GetEmail()
{
    return email;
}

std::string Coach::GetFirstName()
{
    return firstName;
}

std::string Coach::GetLastName()
{
    return lastName;
}

std::string Coach::GetGender()
{
    return gender;
}

std::string Coach::GetInternational()
{
    return international;
}

std::string Coach::GetI4()
{
    return I4;
}

std::string Coach::GetMGTEClub()
{
    return MGTEClub;
}

std::string Coach::GetDesignClub()
{
    return designClub;
}

std::string Coach::GetResidenceLife()
{
    return residenceLife;
}
