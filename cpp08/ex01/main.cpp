#include "Span.hpp"




int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}


// int main()
// {
//     try {
//         Span sp = Span(10000);
//         std::vector<int> numbers;
//         for (int i = 0; i < 10000; i++)
//             numbers.push_back(i);
        
//         sp.addNumber(numbers.begin(), numbers.end());  // Add all at once!
        
//         std::cout << "shortest: " << sp.shortestSpan() << std::endl;
//         std::cout << "longest: " << sp.longestSpan() << std::endl;
//     } catch (std::exception &e) {
//         std::cout << "error" << std::endl;
//     }
    
//     return 0;
// }

// int main()
// {
//     try {
//         Span sp = Span(5);
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         std::cout << "shortest: " << sp.shortestSpan() << std::endl;
//         std::cout << "longest: " << sp.longestSpan() << std::endl;
//     } catch (std::exception &e) {
//         std::cout << "error" << std::endl;
//     }

//     try {
//         Span sp2 = Span(3);
//         sp2.addNumber(1);
//         sp2.addNumber(2);
//         sp2.addNumber(3);
//         sp2.addNumber(4);  // should throw
//     } catch (std::exception &e) {
//         std::cout << "cant add more" << std::endl;
//     }

//     try {
//         Span sp3 = Span(1);
//         sp3.addNumber(5);
//         sp3.shortestSpan();  // should throw (only 1 number)
//     } catch (std::exception &e) {
//         std::cout << "not enough numbers" << std::endl;
//     }

//     try {
//         Span sp4 = Span(10000);
//         for (int i = 0; i < 10000; i++)
//             sp4.addNumber(i);
//         std::cout << "large span shortest: " << sp4.shortestSpan() << std::endl;
//         std::cout << "large span longest: " << sp4.longestSpan() << std::endl;
//     } catch (std::exception &e) {
//         std::cout << "error" << std::endl;
//     }

//     return 0;
// }