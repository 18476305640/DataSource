cmake_minimum_required(VERSION 3.17)
project(DataSource C)

set(CMAKE_C_STANDARD 99)

add_executable(DataSource main.c _1_LineList/LineList_impl.c _2_LinkList/LinkList_impl.c _3_Queue/queue.h _3_Queue/queue_impl.c _4_Tree/tree.c _4_Tree/tree.h)