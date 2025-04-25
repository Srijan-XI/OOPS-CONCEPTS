#include <iostream>
#include <string>

class Student {
private:
    std::string name;  // Private data members
    int age;

public:
    // Constructor to initialize data
    Student(std::string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for name
    void setName(const std::string& newName) {
        name = newName;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int newAge) {
        if (newAge > 0) {  // Validation logic
            age = newAge;
        } else {
            std::cout << "Invalid age!" << std::endl;
        }
    }

    // Display method
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating an object of Student
    Student student1("Alice", 20);

    // Accessing and modifying data through getter and setter
    student1.display();
    student1.setName("Bob");
    student1.setAge(25);
    student1.display();

    // Attempting to set an invalid age
    student1.setAge(-5);

    return 0;
}
