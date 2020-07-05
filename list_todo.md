# The remaining list of tasks

## Documentation
- ✔️ Generate Doxygen configuration
- 🬀 User
- 🬀 User database
    
## User database implementation
- ✔️ Define user properties
  - ✔️ The [Properties.md](https://github.com/armen-gevorgyan/online-shop-services/blob/master/documentation/user/Properties.md) file has been added with the list of properties of the user's that are needed for the online shop services.
- ✔️ Implement an initial version of the User type
- 🬀 Finalize the User type definition for the mandatory fields
- 🬀 Define user database
- 🬀 Create hardcoded user database for testing samples till later on sign up will be implemented 
  - 🬀 Dependent on what type of database would be selected maybe would be needed to have this database in the human-readable format also so that it can be used for the testing purposes.
- 🬀 Implement an initial database of the users
- 🬀 Finalize the User type definition for the secondary fields

## Authentication service implementation
- 🬀 TODO

## Build environment setup
- ✔️ Create a skeleton of the source hierarchy 
- ✔️ Generate a new library of the user type by providing CMake files for the user type implementation
- ✔️ Generate a new test executable for the implemented basic functionality testing of the User type
- 🬀 Generate a new library of the user database by providing CMake files for the user database implementation
- 🬀 Generate a new test executable for the implemented basic functionality testing of the User database
- 🬀 Integrate the CPR project from https://github.com/whoshuu/cpr as an external module in order to have the easy interfaces for the HTTP protocol.

## Testing
- ✔️ Implement the basic testing of the User type
- 🬀 Extended testing of the finalized User type implementation
- 🬀 Implement the basic testing of the User database

## Overall improvements
- 🬀 Code coverage for the tests