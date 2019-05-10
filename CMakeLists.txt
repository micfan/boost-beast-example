cmake_minimum_required (VERSION 3.3)

project (beast)

set_property (GLOBAL PROPERTY USE_FOLDERS ON)

set (CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_STANDARD_REQUIRED ON)

set (THREADS_PREFER_PTHREAD_FLAG ON)
find_package (Threads REQUIRED)

####################### Boost ##########################
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_RUNTIME ON)

find_package(Boost 1.69 COMPONENTS system filesystem)
IF(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
ENDIF(Boost_FOUND)


###################### JSON ############################
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party/json)

###################### Protobuf ########################
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/protobufs)


add_subdirectory (third_party EXCLUDE_FROM_ALL)
include_directories(${THIRD_PARTY_INCLUDE_PATH})
message(STATUS THIRD_PARTY_INCLUDE_PATH: ${THIRD_PARTY_INCLUDE_PATH})



add_subdirectory (app)
