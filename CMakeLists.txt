cmake_minimum_required(VERSION 2.8.3)

FIND_PACKAGE(PythonInterp "3")
FIND_PACKAGE(PythonLibs "3")
FIND_PACKAGE(Boost COMPONENTS python3 numpy3)

ENABLE_TESTING()
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})
LINK_LIBRARIES(${Boost_LIBRARIES} ${PYTHON_LIBRARIES}) # Deprecated but so convenient!

PYTHON_ADD_MODULE(hello hello.cpp)
