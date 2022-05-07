cmake_minimum_required(VERSION 2.8.9)

add_executable(MyExec
  main.cpp
  src/adaptor.cpp
  src/executor.cpp
)

include_directories(include)

