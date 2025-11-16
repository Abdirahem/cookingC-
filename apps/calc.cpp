#include<iostream>
#include <fstream>
#include<string>



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

        if(op==0)
        {
            std::cout<<"No valid operator found in the line: "<<line<<std::endl;
            continue;
        }

        std::string left = line.substr(0, pos);
        std::string right = line.substr(pos +1);


        int a = std::stoi(left);
        int b = std::stoi(right);
        int result =0;

        switch (op)
        {
        case '+':result = a+b; break;
        case '-':result = a-b; break;
        case '*':result = a*b; break;
        case '/': if (b == 0)
                {
                    std::cout << "Error: division by zero" << std::endl;
                    continue;
                }

                result = a/b;

                break;
        
       
        }


               std::cout << line << " = " << result << std::endl;

    }
    


    return 0;
}