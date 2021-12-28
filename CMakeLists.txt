CMAKE_MINIMUM_REQUIRED()
project(algorithm-leetcode CXX)

set(CMAKE_CXX_STANDARD 11)

#add_executable(problem-of-change ./greedy-algorithm/problem-of-change.cpp)
#add_executable(bubble-sort ./sort-algorithm/bubble-sort.cpp)
#add_executable(quick-sort ./sort-algorithm/quick-sort.cpp)
#add_executable(merge-sort ./sort-algorithm/merge-sort.cpp)
#add_executable(count-sort sort-algorithm/count-sort.cpp)
add_executable(min-heap-sort sort-algorithm/min-heap-sort.cpp)
#add_executable(max-heap-sort sort-algorithm/max-heap-sort.cpp)
#add_executable(insertion-sort sort-algorithm/insertion-sort.cpp)

# binary-tree
#add_executable(recursion-preorder-traversal binary-tree-algorithm/recursion-traversal.cpp)#前中后递归遍历
#add_executable(level-traversal binary-tree-algorithm/level-traversal.cpp)#层次遍历