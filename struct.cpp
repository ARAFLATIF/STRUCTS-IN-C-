//struct skeleton
struct StructName {
    // Member variables
    // Member functions (optional)
};

//basic struct
#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person p1;
    p1.name = "Alice";
    p1.age = 30;

    std::cout << p1.name << " is " << p1.age << " years old." << std::endl;

    return 0;
}

//struct with constructor

#include <iostream>
#include <string>

struct Point {
    int x, y;

    // Constructor
    Point(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}

    // Member function
    void display() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p1(5, 10);
    p1.display();

    Point p2; // Uses default values
    p2.display();

    return 0;
}

// nested structs

#include <iostream>
#include <string>

struct Date {
    int day, month, year;
};

struct Employee {
    std::string name;
    int id;
    Date joinDate;
};

int main() {
    Employee emp;
    emp.name = "Bob";
    emp.id = 12345;
    emp.joinDate = {15, 8, 2023}; // Day, Month, Year

    std::cout << emp.name << " (ID: " << emp.id << ") joined on "
              << emp.joinDate.day << "/" << emp.joinDate.month << "/" << emp.joinDate.year
              << std::endl;

    return 0;
}

//struct with array

#include <iostream>

struct Rectangle {
    double width, height;

    double area() {
        return width * height;
    }
};

int main() {
    Rectangle rects[3] = {{3.0, 4.0}, {2.5, 6.0}, {5.0, 5.0}};

    for (int i = 0; i < 3; ++i) {
        std::cout << "Rectangle " << i+1 << " area: " << rects[i].area() << std::endl;
    }

    return 0;
}

// struct with function parameter

#include <iostream>

struct Complex {
    double real, imag;
};

Complex add(Complex a, Complex b) {
    return {a.real + b.real, a.imag + b.imag};
}

void display(Complex c) {
    std::cout << c.real << " + " << c.imag << "i" << std::endl;
}

int main() {
    Complex c1 = {3.0, 4.0};
    Complex c2 = {1.5, 2.5};

    Complex sum = add(c1, c2);
    display(sum);

    return 0;
}
