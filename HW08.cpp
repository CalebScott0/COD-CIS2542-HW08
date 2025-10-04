#include <string>
#include <iostream>
#include <cctype>

template <typename T>
T discriminant(T a, T b, T c)
{
    T result = (b * b) - (4 * a * c);
    if(result < 0)
    {
        throw std::exception();
    }
    
    return result;
}

int main()
{
    char again;

    double a = 0;
    double b = 0;
    double c = 0;
    double discriminantValue = 0;

    do
    {
        std::cout << "Enter the value for a: ";
        std::cin >> a;

        std::cout << "Enter the value for b: ";
        std::cin >> b;

        std::cout << "Enter the value for c: ";
        std::cin >> c;
        try
        { 
            discriminantValue = discriminant(a, b, c);
            std::cout << std::endl;
            std::cout << "Value of the discrimant: " << discriminantValue << std::endl;
        }
        catch(std::exception)
        {
            std::cout << std::endl;
            std::cout << "Discriminant(a, b, c): Negative Discriminant Encountered" << std::endl;
        }

        do
        {
            std::cout << std::endl << "Would you like to calculate another discrimant? (Y/N): ";
            std::cin >> again;
            //TODO: make more sense to do again = toupper(again)?
        } while(std::toupper(again) != 'N' && std::toupper(again) != 'Y');

    } while(std::toupper(again) != 'N');

    std::cout << std::endl << "Exiting program..." << std::endl;
        

    return 0;
}
