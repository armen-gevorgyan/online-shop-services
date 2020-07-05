
/** @file User.hpp
 * 
 * @brief User type definition
 * 
 * @author Armen Gevorgyan
 * Contact: armen.gevorgyan.yerevan@gmail.com
 */

#ifndef OSS_USER_HPP
#define OSS_USER_HPP

/// oss stands for online shop services
namespace oss
{
    /** User class
     * 
     * @b Description
     * The class is intended to define the properties and associated functionality of the User type.
     * 
     * @todo
     * 
     */
    class User
    {
        public:

        /**
         * @Default constructor
         */
        User();
        
        /**
         * @Parametrized constructor
         * 
         * @param name is used to update the name of the user
         * @param surname is used to update the surname of the user
         * @param password is used to update the password of the user
         * @param authorization is used to update the authorization of the user 
         */
        User(const std::string& name,
             const std::string& surname,
             const std::string& password,
             bool authorization
            );

        /**
         * Get the name of the user
         * 
         * @retval The name of the user
         */
        std::string getName();

        /**
         * Set the name of the user
         * 
         * @param name is used to update the name of the user
         * 
         * @todo Add safety checkings and error reporting through the specific
         * exceptions to cover the minimum requirements of the property, i.e.
         *  - To not fail behind the minimum length of the name
         *  - To not exceed the maximum length of the name
         *  - To not include the special symbols
         */
        void setName(const std::string& name);

        /**
         * Get the surname of the user
         * 
         * @retval The surname of the user
         */
        std::string getSurname();

        /**
         * Set the surname of the user
         * 
         * @param surname is used to update the surname of the user
         * 
         * @todo Add safety checkings and error reporting through the specific
         * exceptions to cover the minimum requirements of the property, i.e.
         *  - To not fail behind the minimum length of the surname
         *  - To not exceed the maximum length of the surname
         *  - To not include the special symbols
         */
        void setSurname(const std::string& surname);
        
        /**
         * Get the password of the user
         * 
         * @retval The password of the user
         */
        std::string getPassword();

        /**
         * Set the password of the user
         * 
         * @param password is used to update the password of the user
         * 
         * @todo Add safety checkings and error reporting through the specific
         * exceptions to cover the minimum requirements of the property, i.e.
         *  - To not fail behind the minimum length of the password
         *  - To not exceed the maximum length of the password
         *  - To include at least one special symbols
         *  - To include at least one uppercase symbol
         *  - To include at least one lowercase symbol
         *  - To include at least one numeric symbol
         */
        void setPassword(const std::string& password);
          
        /**
         * Get the authorization of the user. If it's true then the user
         * successfully logged in into the system, otherwise no.
         * 
         * @retval The authorization of the user
         */
        bool getAuthorization();

        /**
         * Set the authorization of the user
         * 
         * @param authorization is used to update the authorization of the user
         */
        void setAuthorization(bool authorization);

        protected:

        private:
        /** Name of the user */
        std::string m_name;

        /** Surname of the user */
        std::string m_surname;

        /** Password of the user */
        std::string m_password;
        
        /** Authorization of the user */
        bool m_authorize;
    };
}

#endif 