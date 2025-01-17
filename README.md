# online-shop-services

## About

This C++ library is intended to provide services that can be embedded in the online shop solutions. With the library, the 
following microservices are provided.
- 🬀 Authentication
  - The authentication details such as user name and password are provided from the Web/Mobile application. The service has
  been validating whether the provided user name is presented in the user database. In case if it's presented then the
  provided password is compared with the one that was stored in the DB. In case if passwords are matching a token(or some
  session data is being encrypted) is generated and is provided back to the Web/Mobile application with the status that
  authentication successfully passed. In all other cases, the token is not generated, and only failed status is being
  provided back to the Web/Mobile interface.
- 🬀 Cart
  - Add to Cart public interface is available from the Web/Mobile application. The item details alongside with the generated
  token from the Authentication service are provided from the Web/Mobile application. At first provided token is validated
  by the Authentication service. In case if the token is authorized then the Cart service has been validating whether the
  provided item is presented in the Item Database. In case if it's presented then the provided item is being added into the
  Cart database and successful status is being returned back to the Web/Mobile application. In all other cases, the failed
  status is being provided back to the Web/Mobile interface.
  - Purchase public interface is available from the Web/Mobile applications.
- 🬀 Items
  - The following public interfaces are available from the Web/Mobile.
    - Search Item
    - Get Items list
  - The request details alongside with the generated token from the Authentication service are provided from the Web/Mobile
  application. At first provided token is validated by the Authentication service. In case if the token is authorized then
  the Item service handling the request, i.e. either it's checking whether the item is presented in the Item Database or
  just collecting all the data from the DB and is providing back.
- 🬀 History
  - The request details alongside with the generated token from the Authentication service are provided from the Web/Mobile
  application. At first provided token is validated by the Authentication service. In case if the token is authorized then
  the history actions are collected from the History DB and are provided back.
Also, there is Gateway service which is responsible for getting the data from the Web/Mobile interface and redirect it to the
right service, i.e. on of the above-mentioned ones.

The [OnlineShopMicroservices](https://github.com/armen-gevorgyan/online-shop-services/blob/master/documentation/diagrams/OnlineShopMicroservices.jpg) high-level diagram is presented to depict the above-mentioned
microservices and their communications with each other as well as Web/Mobile interfaces.

## Setup

- clone the repository:
    - `git clone --recursive https://github.com/armen-gevorgyan/online-shop-services.git`
      - `--recursive` is needed to pull external modules
    - In case if `--recursive` flag has been forgotten during the clone, then following commands can be run to pull the external modules:
      - `git submodule init`
      - `git submodule update`


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

- Run all tests (including tests from external projects)
  - `cd build`
  - `make test`
- Run only tests from `online-shop-services`
  - `cd build/test`
  - `make test`

## Documentation

- Generate the documentation
  - `cd build`
  - `make doc`


## Conventions
- The 🬀 symbol means the topic is not done yet
- The ✔️ symbol means the topic is done

## Porting

## Requirements

- Cmake with minimum version 3.16.3
- Doxygen with minimum version 1.8.17
- Dot - graphviz version 2.43.0
- CPR version 1.5.0
    - Development SSL, i.e. libssl-dev

## Project tracking

Please refer to the [ReleasePlanVersion1.0](https://github.com/armen-gevorgyan/online-shop-services/blob/master/documentation/releases/ReleasePlanVersion_1_0.md) document, 
to follow and get the status of the mandatory topics to be done for the 1.0 release.

## Acknowledgements

This project uses code from
- https://github.com/whoshuu/cpr
  
## Roadmap

### Version 1.0
- 🬀 User database
  - 🬀 Properties of [each user](https://github.com/armen-gevorgyan/online-shop-services/blob/master/documentation/user/Properties.md) and overall user database
- 🬀 Authentication Service
- 🬀 Gateway Service
- 🬀 Web/Mobile interface for the login feature
- 🬀 Docker image containing the services which can be deployed to the clouds(AWS, Google, Azure, etc.)
- 🬀 API documentation

### Version 1.1
- 🬀 Items database
- 🬀 Items Service
- 🬀 Etend the Gateway Service to properly handle the requests for the Items service
- 🬀 Web/Mobile interface for the following features
  -  search item
  -  get items list
- 🬀 API documentation

### Version 1.2
- 🬀 Cart database
- 🬀 Cart Service
- 🬀 Etend the Gateway Service to properly handle the requests for the Carts service
- 🬀 Web/Mobile interface for the following features
  - add to cart
  - purchase
- 🬀 API documentation

### Version 1.3
- 🬀 History database
- 🬀 History Service
- 🬀 Etend the Gateway Service to properly handle the requests for the History service
- 🬀 Web/Mobile interface for the 'get purchased items' feature
- 🬀 API documentation

### Later
- 🬀 Core user activity
- 🬀 Purchasing an item

## Overall improvements
- 🬀 Integrate the Google init tests instead of asserts
- 🬀 Integrate the Valgrind tool to make analyses of the code memory management, threading, performance, etc.
- 🬀 Code coverage for the tests