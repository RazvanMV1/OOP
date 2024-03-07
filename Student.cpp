#include<iostream>
using namespace std;


#include "Student.h"

void Student::SetName(char* name)
{
    if (this->name == 0)
        this->name = new char[100];

    int sz = strlen(name);
    for (int i = 0; i < sz; i++)
    {
        this->name[i] = name[i];
    }
}
char* Student::GetName()
{
    return this->name;
}

float Student::GetEnglishGrade()
{
    return this->englishGrade;
}
float Student::GetHistoryGrade()
{
    return this->historyGrade;
}
float Student::GetMathGrade()
{
    return this->mathGrade;
}

bool Student::SetEnglishGrade(float newGrade)
{
    if (newGrade < 0 || newGrade > 10)
        return false;
    this->englishGrade = newGrade;
    return true;
}
bool Student::SetHistoryGrade(float newGrade)
{
    if (newGrade < 0 || newGrade > 10)
        return false;
    this->historyGrade = newGrade;
    return true;
}
bool Student::SetMathGrade(float newGrade)
{
    if (newGrade < 0 || newGrade > 10)
        return false;
    this->mathGrade = newGrade;
    return true;
}
float Student::GetGradeMean()
{
    return (this->mathGrade + this->englishGrade + this->historyGrade) / 3;
}