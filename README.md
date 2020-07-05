# online-shop-services

## About

This C++ library is intended to provide services that can be embedded in the online shop solutions

## Setup

- clone the repository:
    - `git clone https://github.com/armen-gevorgyan/online-shop-services.git`


## Build

- build:
    - `mkdir build`
    - `cd build`
    - `cmake ../`
      - to build in debug mode (`-g -O0`), add `-DCMAKE_BUILD_TYPE=Debug`
      - to enable extra warnings (`-Wno-unused -Wno-unused-parameter -Wall -Wextra -Werror`), add `-DCLEANUP_WARNINGS=1`.
    - `make all`

- clean:
  - `rm -rf build`

## Test

- Run all tests
  - `cd build`
  - `make test`

## Documentation

- Generate the documentation
  - `cd build`
  - `make doc`


## Conventions

## Porting

## Requirements

- Cmake with minimum version 3.16.3
- Doxygen with minimum version 1.8.17
- Dot - graphviz version 2.43.0

## Project tracking

Please refer to the [list_todo.md](https://github.com/armen-gevorgyan/online-shop-services/blob/master/list_todo.md) file, 
where is depicted the tasks already done, and the remaining list of tasks should be done.

## Roadmap

### Version 1.0
- 🬀 User database
    - 🬀 Properties
    - 🬀 API documentation    

### Version 1.1
- 🬀 Authentication Service
    - 🬀 Define which external modules(e.g. http) are needed and what to use
    - 🬀 Define an API interface for login
    - 🬀 Implement HTTP server to provide the sample data of username and password
    - 🬀 Implement single user authentication
    - 🬀 Implement multiple user authentication
- 🬀 API documentation

### Version 1.2
- 🬀 Item database
    - 🬀 Properties
    - 🬀 API documentation    

### Version 1.3
- 🬀 Item Search Service
    - 🬀 TODO

### Later
- 🬀 Core user activity
  - 🬀 TODO
- 🬀 Purchasing an item
  - 🬀 TODO
