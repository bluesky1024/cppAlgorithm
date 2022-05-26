cmake_minimum_required(VERSION 3.14)

set(this blue-src)
project(${this})

# 源文件
aux_source_directory(array array_src)
aux_source_directory(str str_src)
aux_source_directory(tree tree_src)
aux_source_directory(dp dp_src)

add_library(${this} STATIC ${array_src} ${str_src} ${tree_src} ${dp_src})