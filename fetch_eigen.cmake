# Fetch Eigen
include(FetchContent)
FetchContent_Declare(
        fetch_eigen
        GIT_REPOSITORY https://gitlab.com/libeigen/eigen.git
        GIT_TAG 3.4.0
        GIT_SHALLOW ON
)
FetchContent_Populate(fetch_eigen)
set(EIGEN_INCLUDE_DIR ${fetch_eigen_SOURCE_DIR} CACHE PATH "")
message(STATUS "EIGEN_INCLUDE_DIR: ${EIGEN_INCLUDE_DIR}")