
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
         * Get the name of the user
         * 
         * @retval The name of the user
         */
        std::string getName();

        /**
         * Set the name of the user
         * 
         * @param name is used to update the name of the user
         */
        void setName(const std::string& name);

        protected:

        private:
        /** Name of the user */
        std::string m_name;

    };
}

#endif 