
/// Headers from standard libraries
#include <iostream>
#include <cassert>

/// Headers from current project
#include <user/User.hpp>

/// Headers from other projects

int main()
{
    oss::User user;
    assert(user.getName().empty());
    std::cout << "Check passed: Default user name is empty" << std::endl;

    const std::string str("Arnold");
    user.setName(str);
    assert(! str.compare(user.getName()));
    std::cout << "Check passed: Set name is equal to the get name" << std::endl;

    return 0;
}