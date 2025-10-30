#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>  // For additional functions like sqrt, etc.

using namespace std;

// Function to evaluate simple arithmetic expressions
double evaluateExpression(const string& expr) {
    double result = 0.0;
    double num;
    char op = '+';
    stringstream ss(expr);
    while (ss >> num) {
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else if (op == '*') {
            result *= num;
        } else if (op == '/') {
            if (num != 0) {
                result /= num;
            } else {
                throw runtime_error("Error: Division by zero.");
            }
        }

        ss >> op;  // Read the next operator
    }
    return result;
}

int main() {
    ifstream inputFile("input.txt");  // Open the input file
    ofstream outputFile("result.txt");  // Open the output file

    if (!inputFile.is_open()) {
        cerr << "Could not open file.txt!" << endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        cerr << "Could not open result.txt!" << endl;
        return 1;
    }

    string expression;
    while (getline(inputFile, expression)) {  // Read each line from the file
        try {
            double result = evaluateExpression(expression);  // Calculate the result
            outputFile << "Expression: " << expression << "\n";
            outputFile << "Result: " << result << "\n\n";
        } catch (const exception& e) {
            outputFile << "Error: " << e.what() << "\n\n";
        }
    }

    inputFile.close();  // Close the input file
    outputFile.close();  // Close the output file

    cout << "Calculation complete. Results saved in result.txt." << endl;
    return 0;
}
