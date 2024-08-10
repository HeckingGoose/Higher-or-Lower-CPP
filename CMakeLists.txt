cmake_minimum_required(VERSION 3.10)

project(Higher-or-Lower-CPP)

file(GLOB_RECURSE SOURCES
	HigherOrLower.cpp
	Classes/*.h
	Classes/*.cpp
)

add_executable(Higher-or-Lower-CPP ${SOURCES})