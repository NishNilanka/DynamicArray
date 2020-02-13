#include <iostream>

using namespace std;
 
class Student
{
    private:
        int id;
        string name;
        int age;

    public:
        Student();
        Student(int id, string name, int age);
        void setId(int id);
        int getId();
        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();

};