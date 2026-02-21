#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {

    string inputFile = argv[1];
    string outputFile = argv[2];
    string filterType = argv[3];
    int iterations = atoi(argv[4]);  // atoi converts text to integer
    
    ifstream infile;
    infile.open(inputFile);  // open the file
    
    int rows;
    int cols;
    infile >> rows >> cols;  // Read and intializes value to row and col

    vector<vector<int>> image(rows, vector<int>(cols)); // Reads values from file and put it into image[r][c]
    for (int r = 0; r < rows; r++){     
        for (int c = 0; c < cols; c++){
            infile >> image[r][c];
        }
    }
    infile.close();

    // Mean filter: Averages each interior pixel with it's neighbors and 
    // stores each averaged pixel in a new array.
    vector<vector<int>> output(rows, vector<int>(cols)); 
    for (int r = 1; r < rows-1; r++){     
        for (int c = 1; c < cols-1; c++){
            float sum = 0;
            for (int dr = -1; dr <= 1; dr++) {
                for (int dc = -1; dc <= 1; dc++) {
                    sum += image[r + dr][c + dc];
                }
            } 
            output[r][c] = sum/9;
        }
    }
  
    // Ignoring border pixels for mean filter
    for (int c = 0; c < cols; c++){ // First row
        output[0][c] = image[0][c];
    }
    for (int c = 0; c < cols; c++){ // Last row
        output[rows-1][c] = image[rows-1][c];
    }
    for (int r = 0; r < rows; r++){ // First col     
        output[r][0] = image[r][0];
    }
    for (int r = 0; r < rows; r++){  // Last col   
        output[r][cols-1] = image[r][cols-1];
    }


    ofstream outFile;
    outFile.open(outputFile);  // open the file
    outFile << rows << " " << cols << endl;  // Write inside output file

    // Writing the matrix to the file — each row on its own line, values separated by spaces.
    for (int r = 0; r < rows; r++){     
        for (int c = 0; c < cols; c++){
            outFile << output[r][c] << " ";
        }
        outFile << endl;
    }
    outFile.close();

    return 0;
}