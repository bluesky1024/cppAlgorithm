cmake_minimum_required(VERSION 3.14)

set(this blue-src)
project(${this})

# 源文件
aux_source_directory(array array_src)
aux_source_directory(string string_src)

add_library(${this} STATIC ${array_src} ${string_src})