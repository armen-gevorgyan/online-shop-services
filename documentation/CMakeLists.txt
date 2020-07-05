
option(BUILD_DOC "Build documentation" ON)

find_package(Doxygen)
if (DOXYGEN_FOUND)
    # set input and output files
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)
    set(DOXYGEN_LOG ${CMAKE_CURRENT_BINARY_DIR}/doxygen.log)

    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
  
    # Build the documentation
    add_custom_target(doc
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT} > ${DOXYGEN_LOG}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
    )

else (DOXYGEN_FOUND)
    message(STATUS "Doxygen need to be installed to generate the documentation")
endif (DOXYGEN_FOUND)
