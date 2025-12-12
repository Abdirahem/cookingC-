#include <iostream>

class League
{
    int numberOfTeams;
    public:
    League(int teams) : numberOfTeams(teams) {};


   
    //Declare the operator<< as a friend function
    friend std::ostream& operator<<(std::ostream& os, const League& league);

   
};
 std::ostream& operator<<(std::ostream& os, const League& league)
    {
        os << league.numberOfTeams;
        return os;
    }   

int main()
{
    League premierLeague(20);
    std::cout << "Premier League has " << premierLeague << " teams." << std::endl;
    return 0;
}