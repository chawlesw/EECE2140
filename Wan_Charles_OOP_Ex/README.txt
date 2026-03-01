Name: Charles Wan
Course: EECE 2140 - Computing Fundamentals for Engineers
Professor: Dr. Fatema Nafa
Date: February 27, 2026

=====================================
COMPILATION COMMANDS
=====================================

Exercises 1-5 (Employee):
  g++ -std=c++11 Employee.cpp main.cpp -o build/employee
  ./build/employee

Exercise 6 (Square):
  g++ -std=c++11 Square.cpp Square_main.cpp -o build/square
  ./build/square

Exercise 7 (Cat):
  g++ -std=c++11 Cat.cpp Cat_main.cpp -o build/cat
  ./build/cat

Exercise 8 (TV):
  g++ -std=c++11 TV.cpp TV_main.cpp -o build/tv
  ./build/tv

=====================================
FILE DESCRIPTIONS
=====================================

Employee.h      - Declares the Employee class, including private data members,
                  public constructors, getter/setter methods, and the display method.

Employee.cpp    - Implements the Employee class methods defined in Employee.h,
                  including accessors, input validation, salary calculation, and output.

main.cpp        - Test program that creates Employee objects and demonstrates
                  the Employee class functionality.

Square.h        - Declares the Square class with a private side member, constructor,
                  getter/setter methods, and area/perimeter calculations.

Square.cpp      - Implements the Square class methods defined in Square.h,
                  including accessors, input validation, and geometric calculations.

Square_main.cpp - Test program that creates Square objects and demonstrates
                  the Square class functionality.

Cat.h           - Declares the Cat class with private age, weight, and name members,
                  constructors, getter/setter methods, and utility methods.

Cat.cpp         - Implements the Cat class methods defined in Cat.h, including
                  accessors, input validation, and cat behavior and display functionality.

Cat_main.cpp    - Test program that creates Cat objects and demonstrates
                  the Cat class functionality.

TV.h            - Declares the TV class with a private station member, constructors,
                  getter/setter methods, and channel navigation functionality.

TV.cpp          - Implements the TV class methods defined in TV.h, including input
                  validation, station display, and channel up/down functionality.

TV_main.cpp     - Test program that creates TV objects and demonstrates
                  the TV class functionality.

=====================================
DESIGN DECISIONS
=====================================

- All data members are private with public getter/setter methods for encapsulation.
- Input validation is included in all setter methods to maintain object integrity.
- Both default and parameterized constructors are provided for all classes.
- Getter methods are marked const to indicate they do not modify the object.
- TV channel navigation (channelUp/channelDown) respects the valid station range (1-999).

=====================================
KNOWN ISSUES
=====================================

- Salary output is not formatted with commas (e.g. $75000.00 instead of $75,000.00).
  This is due to not yet covering iomanip formatting in class.