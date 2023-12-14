#include "studentInfo.h"

studentInfo::studentInfo()
{

}

studentInfo::studentInfo(int id)
{
    id = id;
}

studentInfo::studentInfo(int id, string name, double cgpa)
{
    id = id;
    name = name;
    cgpa = cgpa;
}

bool studentInfo::operator == (studentInfo student)
{
    if(id == student.id)
        return true;
    else
        return false;
}

bool studentInfo::operator != (studentInfo student)
{
    if(id != student.id)
        return true;
    else
        return false;
}

istream& operator >> (istream& is, studentInfo& student)
{
    is >> student.id >> student.name >> student.cgpa;
    return is;
}

ostream& operator << (ostream& os, studentInfo& student)
{
    os << student.id << ", " << student.name << ", " << student.cgpa;
    return os;
}
