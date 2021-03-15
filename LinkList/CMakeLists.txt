# find all source files and add them to DIR_LIB_SRCS
aux_source_directory(. DIR_LIB_SRCS)

# build link library "list"
add_library(LinkList ${DIR_LIB_SRCS})
