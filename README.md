# raylib-starter-project

Just a quick boilerplate for a working setup of raylib with CMake.

raylib is included as a submodule, so you'll need to clone with `--recursive` or run `git submodule update --init` after cloning.

NB: This started as a raylib template but it pretty much works for anything that uses CMake in a relatively standard way. It is however mostly intended as an *executable* project, not a library, as it does not handle installing the library or proper header structure.
