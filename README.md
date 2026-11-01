# OpenScale
**OpenScale** is an open-source C++ library for dynamic memory management across multiple GPUs.

# Purpose
Modern GPU applications increasingly operate on dynamic, memory-bound workloads where memory requirements and data distributions evolve during execution. Efficiently managing these workloads across multiple GPU devices presents challenges in memory allocation, data distribution, and inter-device data movement.

OpenScale aims to address these challenges by providing a vendor-neutral, application-agnostic abstraction for managing GPU memory and data across multiple devices. The library seeks to provide a flexible foundation for developing scalable multi-GPU applications while leveraging existing communication frameworks for efficient inter-device data exchange.

The project draws inspiration from approaches to dynamic GPU memory management, such as those demonstrated by vLLM, and seeks to extend similar principles beyond the domain of AI inference.

# Contributing
OpenScale is an open-source project and contributions from the community are much appreciated.

Refer to the [contributing](doc/CONTRIBUTING.md) document for guidelines.

# License
OpenScale is released under the MIT License — see the [LICENSE](LICENSE.md) file for details.