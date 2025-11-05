#include<iostream>
#include<fstream>
#include<string>

int main()
{
    std::ofstream file; // writting 
    std:: ifstream file2; // reading




    // ------------------------------------- WRITE -------------------------------
    
    // ----------------------------------------- READ ------------------------------

    file2.open("example.txt");
    std::string line;
    char op = '+';

    if(file2.is_open())
    {
        std::cout<<"File is open to read .."<<std::endl;
        while (std::getline(file2, line))
        {
            std::cout<<line<<std::endl;

           
        }
        file2.close();
        
    }
    else
    {
        std::cerr<<"Failed to read the file"<<std::endl;
    }


    return 0;
}