
/// Headers from standard libraries
#include <iostream>
#include <cassert>

/// Headers from current project
#include <user/User.hpp>

/// Headers from other projects

int main()
{
    oss::User user;
    assert(user.getSurname().empty());
    std::cout << "Check passed: Default user Surname is empty" << std::endl;

    const std::string str("Einstein");
    user.setSurname(str);
    assert(! str.compare(user.getSurname()));
    std::cout << "Check passed: Set Surname is equal to the get Surname" << std::endl;

    return 0;
}