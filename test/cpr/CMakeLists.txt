
set(TEST_SUIT CPR)
set(EXECUTABLE_EXTENSION .exe)
set(SOURCE_EXTENSION .cpp)

macro(add_cpr_test SOURCE)
    set(SOURCE_FILE ${SOURCE}${SOURCE_EXTENSION})
    string(TOLOWER "${SOURCE}" TARGET_NAME)
    set(TARGET ${TARGET_NAME}${EXECUTABLE_EXTENSION})

    add_executable(${TARGET} ${SOURCE_FILE})
    add_test("${TEST_SUIT}:${SOURCE}" ${TARGET})

    target_include_directories(${TARGET} PUBLIC
        ${PROJECT_SOURCE_DIR}/external/cpr/include/
    )

    target_link_libraries(${TARGET} PRIVATE cpr)

endmacro(add_cpr_test)

add_cpr_test(Get)