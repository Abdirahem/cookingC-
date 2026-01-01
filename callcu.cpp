#include<iostream>
#include<fstream>
#include<string>
#include<sstream> // For stringstream to split the input

int main()
{
    std::ofstream file; // Writing
    std::ifstream file2; // Reading

    // ------------------------------------- WRITE ----------------------
    file.open("example.txt");
    if (file.is_open())
    {
        file << "3 + 5 + 8 + 12" << std::endl; // Write a sample addition expression
        file.close();
    }
    else
    {
        std::cerr << "Failed to write to the file" << std::endl;
        return 1;
    }

    // ----------------------------------------- READ ------------------
    std::string line;
    int result = 0;
    char op = '+'; // Start with addition

    if (file2.is_open())
    {
        std::cout << "File is open to read..." << std::endl;
        
        // Read the expression from the file
        while (std::getline(file2, line))
        {
            std::cout << "Expression: " << line << std::endl;

            // Use a stringstream to process the line and split by spaces ------
            std::stringstream ss(line);
            int currentNum;
            char currentOp;

            ss >> currentNum; // Read the first number
            result = currentNum; // Initialize result with the first number

            while (ss >> currentOp) // Read operator
            {
                ss >> currentNum; // Read the next number

                if (currentOp == '+') {
                    result += currentNum; // Add the number to result
                }
                else {
                    std::cerr << "Unsupported operator: " << currentOp << std::endl;
                    return 1;
                }
            }
        }
        
        file2.close();

        // Output the result of the calculation
        std::cout << "The result of the addition is: " << result << std::endl;
    }
    else
    {
        std::cerr << "Failed to read the file" << std::endl;
        return 1;
    }

    return 0;

}
