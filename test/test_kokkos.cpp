
#include <Kokkos_Core.hpp>
#include <cstdio>

int main(int argc, char* argv[]) {
    Kokkos::initialize(argc, argv);
    {
        Kokkos::parallel_for(
            "hello",
            Kokkos::RangePolicy<>(0, 1),
            KOKKOS_LAMBDA(int) {
                std::printf("Hello from Kokkos on device!\n");
            });
    }
    Kokkos::finalize();
    return 0;
}