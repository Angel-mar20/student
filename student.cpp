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

    void displayStudents()
    {
        for (const auto &student : students)
        {
            std::cout << "Name: " << student.name
                      << ", Age: " << student.age
                      << ", Student ID: " << student.studentID << std::endl;
        }
    }
};

int main()
{
    StudentManagementSystem sms;
    sms.addStudent("Alice", 20, "S001");
    sms.addStudent("Bob", 22, "S002");

    std::cout << "Student List:" << std::endl;
    sms.displayStudents();

    return 0;
}
