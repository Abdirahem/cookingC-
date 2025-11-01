#include <iostream>
#include <string>

class Profile {
private:
    std::string name;
    std::string imf_src;
    bool profile_status = false;

public:
    // Constructor to initialize name
    Profile(std::string n)
    {
        if (n.empty()) {
            name = "Unknown"; // Default name if input is empty
        } else {
            name = n;
        }
    }

    // Destructor (not necessary for this example, but defined here for completeness)
    ~Profile() {
        // No resources to free in this case, so we can leave it empty
        std::cout << "Profile " << name << " destroyed.\n";
    }

    void post()
    {
        std::cout << "You are posting... " << name << std::endl;
    }

    void deletePost()
    {
        std::cout << "Deleting post... " << name << std::endl;
    }
};

int main()
{
    // Create a Profile object
    Profile p("John Doe");
    
    // Call functions
    p.deletePost();
    p.post();

    // Destructor will be called automatically when 'p' goes out of scope

    return 0;
}
