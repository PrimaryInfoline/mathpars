#include <iostream>
#include <string>
#include <regex>

int main()
{

    std::string math_exp = "a+(b+47*(g/78))-4878/(15*h)=j";
    std::cout << math_exp << std::endl;

    std::regex regular("[(][-]?(([\\d]+|[a-z])[-+*/])+([\\d]+|[a-z])[)]");
    std::regex exp("[-]?(([\\d]+|[a-z])[-+*/])+([\\d]+|[a-z])[=][-]?([\\d]+|[a-z])");

    while (std::regex_search(math_exp.c_str(), regular))
    {
        math_exp = regex_replace(math_exp.c_str(), regular, "c");
        std::cout << math_exp << std::endl;
    }
    
    if (std::regex_match(math_exp.c_str(), exp))
    {
        std::cout << "correct\n";
    }
    else
    {
        std::cout << "incorrect\n";
    }
}
