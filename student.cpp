#include "student.h"

 Student::Student(int id, string name, int age)
{
    this->id = id;
    this->name = name;
    this->age = age;
} 

Student::Student()
{

}
void Student::setId(int id)
{
    this->id = id;
}
int Student::getId()
{
    return id;
}
void Student::setName(string name)
{
    this->name = name;
}
string Student::getName()
{
    return name;
}
void Student::setAge(int age)
{
    this->age = age;
}
int Student::getAge()
{
    return age;
}