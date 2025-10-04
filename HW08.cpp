#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>

template <typename T>
T discriminant(T a, T b, T c)
{
    T result = (b * b) - (4.0 * a * c);
    if(result < 0)
    {
        throw std::exception();
    }
    
    return result;
}

int main()
{
    char again;

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double discriminantValue = 0.0;

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
            std::cout << std::endl << std::fixed << std::setprecision(2);
            std::cout << "Value of the discriminant: " << discriminantValue << std::endl;
        }
        catch(const std::exception&)
        {
            std::cout << std::endl;
            std::cout << "Discriminant(a, b, c): Negative Discriminant Encountered" << std::endl;
        }

        do
        {
            std::cout << std::endl << "Calculate another discriminant? [Y/N]: ";
            std::cin >> again;
            again = toupper(again);
        } while(again != 'N' && again != 'Y');

    } while(again != 'N');

    std::cout << std::endl << "Exiting program..." << std::endl;
        

    return 0;
}
