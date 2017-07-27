#include <iostream>
#include <string>
#include <conio.h>

int main()
{
    int shotsNumber = 0;
    
    std::cout << "Enter number of shots: ";
    std::cin >> shotsNumber;

    std::string bangStr;
    for (int i = 0; i < shotsNumber; i++)
    {
        bangStr += "Bang! ";
    }
    
    std::cout << bangStr << std::endl;
    std::cout << "You are dead!" << std::endl;
    
    getch();

    return 0;
}