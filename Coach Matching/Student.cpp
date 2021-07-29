#include "Student.h"

Student::Student(std::string in_email, std::string in_firstName, std::string in_lastName,
                 std::string in_genderPref, std::string in_internationalPref,
                 std::string in_I4Pref, std::string in_MGTEClubPref, std::string in_designClubPref,
                 std::string in_residenceLifePref)
{
    email = in_email;
    firstName = in_firstName;
    lastName = in_lastName;
    genderPref = in_genderPref;
    internationalPref = in_internationalPref;
    I4Pref = in_I4Pref;
    MGTEClubPref = in_MGTEClubPref;
    designClubPref = in_designClubPref;
    residenceLifePref = in_residenceLifePref;
}

std::string Student::GetEmail()
{
    return email;
}

std::string Student::GetFirstName()
{
    return firstName;
}

std::string Student::GetLastName()
{
    return lastName;
}

std::string Student::GetGenderPref()
{
    return genderPref;
}

std::string Student::GetInternationalPref()
{
    return internationalPref;
}

std::string Student::GetI4Pref()
{
    return I4Pref;
}

std::string Student::GetMGTEClubPref()
{
    return MGTEClubPref;
}

std::string Student::GetDesignClubPref()
{
    return designClubPref;
}

std::string Student::GetResidenceLifePref()
{
    return residenceLifePref;
}


