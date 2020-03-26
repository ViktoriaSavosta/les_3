#include <iostream>

// 1 - Input 3 number
// 2 - Check all numbers
// 3 - If we will find 2 simillar number we will add 5
// 4 - If we will not find 2 simillar number we will show error
// 5 - Show result

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout << "Enter first number : ";
    std::cin >> a;
    
    std::cout << "Enter second number : ";
    std::cin >> b;
    
    std::cout << "Enter third number : ";
    std::cin >> c;

    if ((a == b) && (b == c))
        std::cout << " 1 : " << a + 5 << std::endl << " 2 : " << b + 5 << std::endl << " 3 : " << c + 5 << std::endl;
      
    else if (a == b)
        std::cout << " 1 : " << a + 5 << std::endl << " 2 : " << b + 5 << std::endl;
   
    else if (b == c)
        std::cout << " 2 : " << b + 5 << std::endl << " 3 : " << c + 5 << std::endl;
    
    else if (a == c)
        std::cout << " 1 : " << a + 5 << std::endl << " 3 : " << c + 5 << std::endl;
   
    else
        std::cout << " Error " << std::endl;    

    return 0;
}
