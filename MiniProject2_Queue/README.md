# Queue Data Structure - Mini Project 2
A circular queue implementation in C++ using array-based storage with fixed capacity.

## Build/Run Commands
**Build Command**: 
``` bash
g++ -I include -o main src/main.cpp src/queue.cpp
```
**Run Command**: 
```bash
./main
```

## File Structure: 
MiniProject2_Queue/
    include/
        Queue.h         - Queue class declaration and function prototypes
    src/
        Queue.cpp       - Queue class implementation
        main.cpp        - Interactive menu program
    README.md           - Project documentation
    TESTING.md          - Test results and verification


## Example Usage:
=======MENU=======
Option 1: Enqueue
Option 2: Dequeue
Option 3: Peek
Option 4: Size
Option 0: Exit
===================
Menu Option: 1
Integer to enqueue: 10

Menu Option: 1
Integer to enqueue: 20

Menu Option: 4
Queue size: 2

Menu Option: 3
Front element: 10

Menu Option: 2
Element dequeued: 10


