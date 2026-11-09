
# Link test for the Kokkos library.
add_executable(test_kokkos test_kokkos.cpp)
target_link_libraries(test_kokkos PRIVATE Kokkos::kokkos)
add_test(NAME test_kokkos COMMAND ${CMAKE_CURRENT_BINARY_DIR}/test_kokkos)