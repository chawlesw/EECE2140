/*
FileWriter.cpp
OOP based file writing program with menu driven interface.
Demostrates writing, appending, reading, and clearing files.

By: Charles Wan
EECE 2140 - Professor Nafa
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// Q1 - FileWriter class
class FileWriter {
private:
    string fileName;

public:
    // constructor to initalize file name
    FileWriter(string fileName) {
        this->fileName = fileName;
    }

    // write to file (overwrites exisitng content by default)
    void writeToFile(string text) {
        if (text.empty()) {        // empty string check
            cout << "Nothing to write." << endl;
            return;
        }
        ofstream file(fileName);   // ios::out + truncate by default
        if (!file.is_open()) {     // invalid file check
            cout << "Error: Could not open file." << endl;
            return;
        }
        file << text;
        file.close();
        cout << "File written sucessfully." << endl;
    }

    // Q4: append to file without deleting existing content
    void appendToFile(string text) {
        if (text.empty()) {       // empty string check
            cout << "Nothing to append." << endl;
            return;
        }
        ofstream file(fileName, ios::app);  // ios::app preserves exisiting data
        if (!file.is_open()) {
            cout << "Error: Could not open file." << endl;
            return;
        }
        file << text;
        file.close();
        cout << "Content appended succesfully." << endl;
    }

    // Q5: prepend text to file
    // ofstream cant write at the beginning directly
    // ios::out truncates, ios::app only adds to the end
    // workaround: read existing content, rewrite file with new text first
    void prependToFile(string text) {
        string existing = "";
        ifstream inFile(fileName);      // read existing content
        if (inFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                existing += line + "\n";
            }
            inFile.close();
        }
        ofstream outFile(fileName);    // rewrite: new text + old content
        if (!outFile.is_open()) {
            cout << "Error: Could not open file." << endl;
            return;
        }
        outFile << text << existing;
        outFile.close();
        cout << "Content prepended succesfully." << endl;
    }

    // display file content
    void readFile() const {
        ifstream file(fileName);
        if (!file.is_open()) {
            cout << "Error: Could not open file." << endl;
            return;
        }
        string line;
        cout << "--- File Content ---" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
        cout << "--------------------" << endl;
        file.close();
    }

    // clear file content
    void clearFile() {
        ofstream file(fileName, ios::trunc);   // trunc deletes all content
        if (!file.is_open()) {
            cout << "Error: Could not open file." << endl;
            return;
        }
        file.close();
        cout << "File cleared." << endl;
    }

    // check if file exists
    bool fileExists() const {
        ifstream file(fileName);
        return file.is_open();
    }
};


int main() {

    FileWriter fw("Mydata.txt");

    // Q2 - write to new/empty file
    cout << "=== Q2: Writing to file ===" << endl;
    fw.writeToFile("Hello, this is a sample text written to the file.\nThis is the second line.\n");
    fw.readFile();

    // Q3 - write to a file that already has content
    // old content does NOT remain, ofstream truncates by default (ios::out)
    cout << "\n=== Q3: Writing again (overwrites existing content) ===" << endl;
    fw.writeToFile("This is new content. The old content is gone.\n");
    fw.readFile();

    // Q4 - append to file
    cout << "\n=== Q4: Appending to file ===" << endl;
    fw.appendToFile("This line was appended.\n");
    fw.appendToFile("This line was also appended.\n");
    fw.readFile();

    // Q5 - write at begining of file
    // ofstream cant seek to the begining and insert, it can only truncate or append
    // prepending requires reading and rewriting
    cout << "\n=== Q5: Prepending to file ===" << endl;
    fw.prependToFile("This line is now at the top.\n");
    fw.readFile();

    // Q6 - edge cases
    cout << "\n=== Q6: Edge cases ===" << endl;

    fw.writeToFile("");      // empty string
    fw.appendToFile("");     // empty append

    string large(10000, 'X');   // very large string
    fw.writeToFile(large);
    cout << "Large string (10000 chars) written." << endl;

    fw.clearFile();
    for (int i = 1; i <= 5; i++) {    // write in a loop
        fw.appendToFile("Line " + to_string(i) + "\n");
    }
    fw.readFile();

    // Q7 - fileExists() and clearFile()
    cout << "\n=== Q7: Utility methods ===" << endl;
    cout << "File exists: " << (fw.fileExists() ? "Yes" : "No") << endl;
    fw.clearFile();
    fw.readFile();

    /*
    Q8 - Conceptual Questions

    1. ios::out - opens file for writing, truncates (erases) existing content
       ios::app - opens file for appending, adds to end without erasing

    2. classes keep code organized and reusable. main() stays clean,
       it just creates objects and calls methods insted of managing
       file logic directly.

    3. encapsulating file operations means open/close/error logic lives
       in one place. changes only need to be made once, not everywhere
       the file is used.

    4. forgeting to close a file can cause data loss (buffered data may
       never be written to disk) and resource leaks (file stays locked).
    */

    // Q9 - menu driven program
    cout << "\n=== Q9: Menu ===" << endl;

    int choice;
    do {
        cout << "\n1. Write to file\n2. Append to file\n3. Read file\n4. Clear file\n5. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();    // discard newline before getline

        if (choice == 1) {
            string text;
            cout << "Enter text: ";
            getline(cin, text);
            fw.writeToFile(text + "\n");
        } else if (choice == 2) {
            string text;
            cout << "Enter text to append: ";
            getline(cin, text);
            fw.appendToFile(text + "\n");
        } else if (choice == 3) {
            fw.readFile();
        } else if (choice == 4) {
            fw.clearFile();
        } else if (choice != 5) {
            cout << "Invalid choice." << endl;
        }

    } while (choice != 5);

    cout << "Goodbye!" << endl;
    return 0;
}
