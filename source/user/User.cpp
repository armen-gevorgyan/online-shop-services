
/// Headers from standard libraries
#include <iostream>

/// Headers from current project
#include <user/User.hpp>

/// Headers from other projects


std::string oss::User::getName()
{
    return m_name;
}

void oss::User::setName(const std::string& name)
{
    m_name.assign(name);
}