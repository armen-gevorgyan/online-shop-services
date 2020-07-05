
/// Headers from standard libraries
#include <iostream>

/// Headers from current project
#include <user/User.hpp>

/// Headers from other projects

oss::User::User()
    : m_name("")
    , m_surname("")
    , m_password("")
    , m_authorize(false)
{
}

oss::User::User(
    const std::string& name,
    const std::string& surname,
    const std::string& password,
    bool authorization)
    : m_name(name)
    , m_surname(surname)
    , m_password(password)
    , m_authorize(authorization)
{
}

std::string oss::User::getName()
{
    return m_name;
}

void oss::User::setName(const std::string& name)
{
    m_name.assign(name);
}

std::string oss::User::getSurname()
{
    return m_surname;
}

void oss::User::setSurname(const std::string& surname)
{
    m_surname.assign(surname);
}

std::string oss::User::getPassword()
{
    return m_password;
}

void oss::User::setPassword(const std::string& password)
{
    m_password.assign(password);
}

bool oss::User::getAuthorization()
{
    return m_authorize;
}

void oss::User::setAuthorization(bool authorize)
{
    m_authorize = authorize;
}