
/// Headers from standard libraries
#include <iostream>
#include <cassert>

/// Headers from current project
#include <user/User.hpp>

/// Headers from other projects

int main()
{
    oss::User user;
    assert(user.getPassword().empty());
    std::cout << "Check passed: Default user Password is empty" << std::endl;

    const std::string str("HelloWorld!");
    user.setPassword(str);
    assert(! str.compare(user.getPassword()));
    std::cout << "Check passed: Set Password is equal to the get Password" << std::endl;

    return 0;
}