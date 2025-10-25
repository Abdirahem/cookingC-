#include <iostream>

#include "mtools.h"




class Profile{
    private:
        std::string name;
        std::string imf_src;
        bool profile_status = false;
    
    public:

        Profile(std::string n)
        {
            if(name==" ")
            {

                name = "Unknown";
            }
            else
            {
                name = n;
            }
        }

        void post()
        {
            std::cout<<"You are posting.."<<name<<newLine;
          

        }

        void deletePost()
        {
            std::cout<<"Deleting post.."<<name<<newLine;
           
        }

};



int main()
{
    Profile p("John Doe");
    p.deletePost();
    p.post();
    return 0;
}