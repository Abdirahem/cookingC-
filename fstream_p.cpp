#include <iostream>
#include <fstream>  // Required for file I/O operations
using namespace std;

int main() {
    // Create an object of fstream for output
    ofstream outFile("example.txt");

    // Check if the file opened successfully
    if (!outFile) {
        cerr << "File could not be opened for writing!" << endl;
        return 1;
    }

    // Write data to the file
    outFile << "Hello, this is a test file!" << endl;
    outFile << "C++ file handling using fstream." << endl;

    // Close the file
    outFile.close();

    cout << "Data written to file successfully!" << endl;

    return 0;
}
