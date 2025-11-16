

# 📘 **Program Documentation: Expression File Calculator**

## **Overview**

This program reads arithmetic expressions from a text file named **expressions.txt**, identifies the operator in each expression, extracts the operands, performs the appropriate calculation, and outputs the result.
The supported operations are:

* Addition (`+`)
* Subtraction (`-`)
* Multiplication (`*`)
* Division (`/`)

Each expression must appear on a separate line (e.g., `10+5`, `20/4`, `7*9`).

---

# 📂 **File: main.cpp**

```cpp
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream file("expressions.txt");
   
    if(!file.is_open())
    {
        std::cerr<<"File is not open..."<<std::endl;
        return 1;
    }
    
    std::string line;
    while (getline(file, line))
    {
        if(line.empty()) continue;

        char op = 0;
        size_t pos = std::string::npos;

        for(char c : {'+','-','*','/'})
        {
            pos = line.find(c);
            if(pos != std::string::npos)
            {
                op = c;
                break;
            }
        }

        if(op == 0)
        {
            std::cout<<"No valid operator found in the line: "<<line<<std::endl;
            continue;
        }

        std::string left = line.substr(0, pos);
        std::string right = line.substr(pos + 1);

        int a = std::stoi(left);
        int b = std::stoi(right);
        int result = 0;

        switch (op)
        {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': 
                if (b == 0)
                {
                    std::cout << "Error: division by zero" << std::endl;
                    continue;
                }
                result = a / b;
                break;
        }

        std::cout << line << " = " << result << std::endl;
    }
    
    return 0;
}
```

---

# 📑 **Detailed Explanation**

## **1. File Handling**

```cpp
std::ifstream file("expressions.txt");
```

* Opens the input file containing arithmetic expressions.

```cpp
if(!file.is_open())
```

* Checks whether the file opened successfully.
* If not, prints an error and exits with code `1`.

---

## **2. Reading Expressions**

```cpp
while (getline(file, line))
```

* Reads the file line-by-line into the `line` string.
* Empty lines are skipped using:

```cpp
if(line.empty()) continue;
```

---

## **3. Detecting the Operator**

```cpp
char op = 0;
size_t pos = std::string::npos;
```

* `op` holds the arithmetic operator (if found).
* `pos` stores the index where the operator is located.

```cpp
for(char c : {'+','-','*','/'})
{
    pos = line.find(c);
    if(pos != std::string::npos)
    {
        op = c;
        break;
    }
}
```

* Iterates through all supported operators.
* Finds the operator’s position inside the string.
* If none is found, the line is invalid.

---

## **4. Extracting the Operands**

```cpp
std::string left = line.substr(0, pos);
std::string right = line.substr(pos + 1);
```

* Splits the string into the left and right operands.
* Converts them to integers using `std::stoi`.

---

## **5. Performing the Calculation**

```cpp
switch (op)
{
    case '+': result = a + b; break;
    case '-': result = a - b; break;
    case '*': result = a * b; break;
    case '/':
        if (b == 0) { ... }
        result = a / b;
        break;
}
```

* Uses a `switch` statement to compute the correct operation.
* Checks for division by zero.

---

## **6. Outputting the Result**

```cpp
std::cout << line << " = " << result << std::endl;
```

Example output:

```
10+5 = 15
8*4 = 32
20/4 = 5
```

---

# 📌 **Program Summary**

* Reads expressions from a file
* Identifies arithmetic operators
* Extracts numerical operands
* Performs safe calculations
* Prints results in a clear format

This program provides a simple expression parser and evaluator suitable for small-scale arithmetic processing tasks.

---


