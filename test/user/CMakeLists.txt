
set(EXECUTABLE_EXTENSION .exe)
set(SOURCE_EXTENSION .cpp)

macro(add_user_test SOURCE)
    set(SOURCE_FILE ${SOURCE}${SOURCE_EXTENSION})
    string(TOLOWER "${SOURCE}" TARGET_NAME)
    set(TARGET ${TARGET_NAME}${EXECUTABLE_EXTENSION})

    add_executable(${TARGET} ${SOURCE_FILE})
    target_link_libraries(${TARGET} oss_user)

    target_include_directories(${TARGET} PUBLIC
        ${PROJECT_SOURCE_DIR}/include
    )

endmacro(add_user_test)

add_user_test(Name)
add_user_test(Surname)
add_user_test(Password)
add_user_test(Authorization)