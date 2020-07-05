
/// Headers from standard libraries
#include <iostream>
#include <cassert>

/// Headers from current project
#include <user/User.hpp>

/// Headers from other projects

int main()
{
    oss::User user;
    assert(false == user.getAuthorization());
    std::cout << "Check passed: Default user is not authorized" << std::endl;

    user.setAuthorization(true);
    assert(true == user.getAuthorization());
    std::cout << "Check passed: Set Authorization is equal to the get one" 
              << std::endl;

    return 0;
}