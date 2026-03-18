/*
RegistrationSystem.cpp
Implements a simple University Registration System using OOP in C++.
Models student enrollment in courses through three classes: Student, Course,
and Registration. Demonstrates encapsulation, static members, and references.

By: Charles Wan
EECE 2140 - Professor Nafa
11 March, 2026
*/
#include <iostream>
#include <string>
using namespace std;

// Student: Stores student ID, name, and GPA.
// Tracks total Student objects created via a static counter.
class Student{
private:
    string name;
    int id;
    double gpa;
    static int count;

public:
    Student(string name, int id, double gpa) : name(name), id(id), gpa(gpa){
        count++;
    }

    void displayInfo() const{
        cout << "Name: " << name << endl;
        cout << "Student ID: " << id << endl;
        cout << "Student GPA: " << gpa << endl;
    }

    static int getCount(){
        return count;
    }
};

int Student::count = 0;


// Course: Stores course name, max seats, and current enrollment.
// Provides seat management and checks if the course is full.
class Course{
private:
    string courseName;
    int maxSeats;
    int currentEnrolled;
public:
// Parametisized Contructor
Course(string courseName, int maxSeats, int currentEnrolled) : courseName(courseName), maxSeats(maxSeats), currentEnrolled(currentEnrolled){}

void displayInfo() const{
    cout << "Course Name: " << courseName << endl;
    cout << "Max Seats: " << maxSeats << endl;
    cout << "Current Enrolled: " << currentEnrolled << endl;
}

void setCourseName(string courseName){
    this->courseName = courseName;
}
void setMaxSeats(int maxSeats){
    this->maxSeats = maxSeats;
}
void setCurrentEnrolled(int currentEnrolled){
    this->currentEnrolled = currentEnrolled;
}
bool isFull()const{
    if (currentEnrolled == maxSeats) {
        return true;
    } else {
        return false;
    }
}
void addSeat(){
    currentEnrolled += 1;
}
void removeSeat(){
    currentEnrolled -= 1;
}
};


// Registration: Links a Student and Course via references.
// Handles registration/drop logic with validation.
// Tracks total active registrations via a static counter.
class Registration{
private:
    Student& student;
    Course& course;
    bool status;
    static int count;

public:
Registration(Student& s, Course& c) : student(s), course(c), status(false) {}

void registerStudent(){
    if (status == false && course.isFull() == false){
        status = true;
        count++;
        course.addSeat();
        cout << "Registration successful." << endl;
    } else if (status == true) {
        cout << "Student already registered." << endl;
    } else if (course.isFull() == true) {
        cout << "Cannot register: Course is full." << endl;
    }
}

void dropStudent(){
    if (status == true){
        status = false;
        count--;
        course.removeSeat();
        cout << "Dropped successfully." << endl;
    } else {
        cout << "Student is not registered." << endl;
    }
}

void display() const {
    student.displayInfo();
    course.displayInfo();
    cout << "Status: " << (status ? "Registered" : "Not Registered") << endl;
}

static int getCount(){
    return count;
}
static void resetCount(){
    count = 0;
}

};
int Registration::count = 0;


// main: Demonstrates the system through 5 test cases covering
// successful registration, duplicate registration, full course,
// successful drop, and drop without registration.
int main(){
    cout << "===== Test Case 1 =====" << endl;
    Student s1("Smith", 1001, 3.85);
    Course c1("EECE 2140 - Computing Fundamentals", 30, 29);
    Registration r1(s1, c1);
    r1.registerStudent();
    cout << "Total Active Registrations: " << r1.getCount() << endl;
    r1.display();

    cout << "===== Test Case 2 =====" << endl;
    r1.registerStudent();
    cout << "Total Active Registrations: " << r1.getCount() << endl;

    cout << "===== Test Case 3 =====" << endl;
    Registration::resetCount();
    Student s2("Johnson", 1002, 3.40);
    Student s3("Williams", 1003, 3.10);
    Course c2("EECE 5626 - Image Processing", 1, 0);

    Registration r2(s2, c2);
    Registration r3(s3, c2);
    r2.registerStudent();
    r3.registerStudent();
    cout << "Total Active Registrations: " << r2.getCount() << endl;

    cout << "===== Test Case 4 =====" << endl;
    Registration::resetCount();
    Student s4("Brown", 1004, 3.70);
    Course c4("EECE 7205 - Advanced Algorithms", 25, 10);
    Registration r4(s4, c4);
    r4.registerStudent();
    r4.dropStudent();
    cout << "Total Active Registrations: " << Registration::getCount() << endl;
    r4.display();

    cout << "===== Test Case 5 =====" << endl;
    Registration::resetCount();
    Student s5("Davis", 1005, 2.95);
    Course c5("EECE 2160 - Embedded Design", 20, 5);
    Registration r5(s5, c5);
    r5.dropStudent();
    cout << "Total Active Registrations: " << Registration::getCount() << endl;

    return 0;
}