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

// TODO: GITHUB REPO!!!
int main()
{
    char again;

    int a;
    int b;
    int c;
    int discriminantValue;

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
            std::cout << std::endl << "Value of the discrimant: " << discriminantValue << std::endl;
        }
        catch(std::exception)
        {
            std::cout << std::endl << "Discriminant(a, b, c): Negative Discriminant Encountered" << std::endl;
        }

        do
        {
            std::cout << std::endl << "Would you like to calculate another discrimant? (Y/N): ";
            std::cin >> again;
        } while(toupper(again) != 'N' && toupper(again) != 'Y');

    } while(toupper(again) != 'N');
        

    return 0;
}
