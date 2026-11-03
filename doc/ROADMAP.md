# DEVELOPMENT STATUS

## CURRENT
### ADMINISTRATIVE
1. The application for the "EXIST Grundstipendum" had to be put on halt due to administrative issues. 
2. The application for gaining access to the Open Math OS was successful. Now, project collaborators have access to LLM compute time. The team is registered under the name "Algorithms Research Group".
3. At the moment to access GPU hardware we need to rely on Google colab and our own personal laptops.
4. Started Discord channel for communication.

### ALGORITHMS & DATA STRUCTURES
1. We have a good starting point with the vLLM library but more literature survey is required to understand the state-of-the-art in dynamic memory management algorithms.

### SOFTWARE ENGINEERING
1. We will use C++ as the main language because we need to rely on Kokkos, NCCL and RCCL for fundamental GPU collective operations. The Rust lang maybe interesting for system programming but that needs to evaluated as we make progress.
2. We rely on Kokkos to interface with NVIDIA and AMD GPU's.

## FUTURE
### ADMINISTRATIVE
1. Contact Sebastian Donath to discuss alternative funding sources.
2. Look for funding opportunities to gain compute time on GPU clusters.
3. Look for platforms to access AMD GPU's.

### ALGORITHMS & DATA STRUCTURES
1. Work on the pseudo code to enhance the algorithms described in the vLLM paper.

### SOFTWARE ENGINEERING
1. Discuss software architecture, start with creating interface with quantum simulators and AI inference engines.
2. Develop the pipeline to deploy OpenScale on Google colab.
3. Implement CMake build scripts and add Kokkos as a dependency. Make sure Kokkos is configurable from the OpenScale CMakeLists.txt.
4. Create validation cases for AI inference to make solid argument for future funding.