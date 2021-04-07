# задаем набор исходников
set(SOURCES
    tests.cpp
)

# создаем исполняемый файл
add_executable(task_test ${SOURCES})

# подключаем библиотеки:
# 1. Тестируемая библиотека
# 2. gest
target_link_libraries(task_test PUBLIC task_lib)
target_link_libraries(task_test PUBLIC gtest_main)

# В solution эта библиотека лежит в tests/task_test
set_property(TARGET task_test PROPERTY FOLDER "tests/task_test")