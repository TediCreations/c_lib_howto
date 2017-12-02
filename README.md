### C static library build and Link

### Description

> Two sub-projects. One creates a static library and the other links to it.

- The sub-project *build_lib* creates an executable and a library.
- The sub-project *link2lib* creates an executable with *build_lib*'s library.

The library *libsolver.a* is already copied in the *lib* folder of *link2lib* sub-project.

### Dependencies:

Makefile targeted for GNU/Linux and not tested on Windows.

### How to build

For each of the two sub-projects go to their folder:

```sh
make
```

### Maintainer

[Kanelis Ilias](mailto:hkanelhs@yahoo.gr)

### License

[GPL](LICENSE) © Kanelis Ilias