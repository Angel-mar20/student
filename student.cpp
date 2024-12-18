#include <iostream>
#include <vector>
#include <string>

class Student
{
public:
    std::string name;
    int age;
    std::string studentID;

    Student(std::string n, int a, std::string id) : name(n), age(a), studentID(id) {}
};

class StudentManagementSystem
{
private:
    std::vector<Student> students;

public:
    void addStudent(std::string name, int age, std::string studentID)
    {
        students.emplace_back(name, age, studentID);
    }

    