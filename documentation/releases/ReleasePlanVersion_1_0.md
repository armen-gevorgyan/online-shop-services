# Define the list of tasks mandatory for version 1.0 release.

## Documentation
- ✔️ Generate Doxygen configuration
- ✔️ User
- 🬀 User database
- 🬀 Authentication service
- 🬀 Gateway service
- 🬀 The database schema/s for the Authentication and Gateway services
    
## User database implementation
- ✔️ Define user properties
  - ✔️ The [Properties.md](https://github.com/armen-gevorgyan/online-shop-services/blob/master/documentation/user/Properties.md) file has been added with the list of properties of the user's that are needed for the online shop services.
- ✔️ Implement an initial version of the User type
- ✔️ Finalize the User type definition for the mandatory fields(i.e. Name, Surname, Password and Authorized)
- 🬀 Define user database
- 🬀 Create hardcoded user database for testing samples till later on sign up will be implemented 
  - 🬀 Dependent on what type of database would be selected maybe would be needed to have this database in the human-readable format also so that it can be used for the testing purposes.
- 🬀 Implement an initial database of the users
- 🬀 Finalize the User type definition for the secondary fields

## Build environment setup
- ✔️ Create a skeleton of the source hierarchy 
- ✔️ Generate a new library of the user type by providing CMake files for the user type implementation
- ✔️ Generate a new test executable for the implemented basic functionality testing of the User type
- ✔️ Enable the testing and run the available tests
- ✔️ Enable the Doxygen documentation generation 
- ✔️ Implement build clean 
- ✔️ Integrate the CPR project from https://github.com/whoshuu/cpr as an external module in order to have the
easy interfaces for the HTTP protocol.
- 🬀 Include the MySQL database libraries
- 🬀 Include a crypto library for the temporary token generation used in the Authorization service
- 🬀 Generate a new library of the user database by providing CMake files for the user database implementation
- 🬀 Generate a new test executable for the implemented basic functionality testing of the User database

## Testing
- ✔️ Implement the basic testing of the User type
- ✔️ Extended testing of the finalized User type implementation
- ✔️ Implement the basic testing of the HTTP get request test from the newly integrated project
- 🬀 Implement the basic testing of the User database

## Web/Mobile Interface
- 🬀 Build a “Login” UI using a JS framework for providing the username and password

## Gateway service implementation
- 🬀 Define which external modules(e.g. http) are needed and what to use
- 🬀 Implement HTTP client to receive the request data(e.g. username and password) provided from the WEB interface
- 🬀 Implement a state machine that depends on the request type will forward the request to the appropriate service
- 🬀 Define an API interface for login
- 🬀 Construct the request for the authentication service and send via internal sockets
- 🬀 Implement a data receive, from the Authentication request
- 🬀 Parse the received data and forward it back to the Web/Interface

## Authentication service implementation
- 🬀 Implement a data receive, from the Gateway service request
- 🬀 Parse and extract the received data by initialzing a temporary user.
- 🬀 Check whether the provided user name is presented in the user database.
- 🬀 Check whether the provided password is the same compared with the one that was stored in the user database
- 🬀 Generate a temporary token for the successful authorization.
- 🬀 Run task to reset the generated token in case if specified timeout will expire.
- 🬀 Construct the answer data including the status, generated data, etc. and forward it to the Gateway service.

## Deploy the product into the cloud
- 🬀 Construct the Docker image containing the services
- 🬀 Deploy the constructed image to AWS, Google Cloud or Azure.