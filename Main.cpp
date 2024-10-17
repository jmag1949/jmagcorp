#include<iostream>
#include<string>
#include<vector>

class card {
public:
    char suit;
    int val, cardID;
    
    std::string printCard(int cID) {
        std::string printedval = “”;
        printedval += suit;
        printedval += cID%13;
        return printedval;
    }
};

class deck : public card {
public:
     std::vector<std::string> deck;

     std::vector<std::string> makeRandDeck() {
         
     }

};


int main()
{
        return 0;
}
