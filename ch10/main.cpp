#include <iostream>
#include "list.hpp"

int main()
{
    ch10::list::double_list<int> s1,s2, uni;

    for(int i = 0; i !=10 ; ++i)
    {
        s1.insert(i);
        s2.insert(i*10);
    }

    uni = s1 + s2;

    std::cout << s1.empty() << std::endl;
    std::cout << s2 << std::endl;

    std::cout << "uni =\n" << uni << std::endl;
}

