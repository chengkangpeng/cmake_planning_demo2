project(show_result)

add_library(${PROJECT_NAME}
SHARED
show_result.cpp
)

# target_include_directories(${PROJECT_NAME}
# PUBLIC
# ${PROCESS_DIR}
# )

# target_link_libraries(${PROJECT_NAME}
# PUBLIC
# process
# )

target_link_libraries(${PROJECT_NAME}
PUBLIC
easyx
)