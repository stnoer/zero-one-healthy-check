# Install script for directory: D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/zero-one-healthy-check")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE DIRECTORY FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/public")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE EXECUTABLE FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/Debug/arch-demo.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE EXECUTABLE FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/Release/arch-demo.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE EXECUTABLE FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/MinSizeRel/arch-demo.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE EXECUTABLE FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/RelWithDebInfo/arch-demo.exe")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE FILE FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/public.pem")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE DIRECTORY FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/lib-common/include/fastdfs/conf")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE DIRECTORY FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/lib-oatpp/include/oatpp-swagger/res")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE FILE FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/zh-dict.yaml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE DIRECTORY FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/tpl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE DIRECTORY FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/lib-dy/lib64/release/" FILES_MATCHING REGEX "/[^/]*\\.dll$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/arch-demo" TYPE DIRECTORY FILES "D:/zero-study/zero-one-healthy-check/healthy-cpp/arch-demo/conf")
endif()

