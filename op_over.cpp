#include<iostream>
#include<vector>

class Age {
    int participants;
    std::vector<int> ages;

public:
    // Constructor to initialize participants and ages
    Age(int p, const std::vector<int>& ag) : participants(p), ages(ag) {}

    // Overloading + operator to combine two Age objects
    Age operator+(const Age& other) {
        int totalParticipants = this->participants + other.participants;
        std::vector<int> combinedAges = this->ages;

        // Combining the ages from both objects
        combinedAges.insert(combinedAges.end(), other.ages.begin(), other.ages.end());

        return Age(totalParticipants, combinedAges);
    }

    // Overloading the << operator to output Age details
    friend std::ostream& operator<<(std::ostream& os, const Age& obj) {
        os << "Total Participants: " << obj.participants << "\nAges: ";
        for (int age : obj.ages) {
            os << age << " ";
        }
        return os;
    }
};

int main() {
    // Creating two Age objects
    Age obj1(5, {10, 20, 30, 40, 50});
    Age obj2(3, {15, 25, 35});

    // Adding obj1 and obj2 using the overloaded + operator
    Age obj3 = obj1 + obj2;

    // Printing the combined result using the overloaded << operator
    std::cout << obj3 << std::endl;

    return 0;
}
