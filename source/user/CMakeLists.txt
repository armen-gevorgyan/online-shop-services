###############################################################################
# oss_user
###############################################################################

add_library(oss_user
    User.cpp
)

target_include_directories(oss_user PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)