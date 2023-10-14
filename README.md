![Build](https://github.com/andreymasloboev/code_coverage/actions/workflows/build.yml/badge.svg)
![Tests](https://github.com/andreymasloboev/code_coverage/actions/workflows/tests.yml/badge.svg)
![Code Coverage](https://img.shields.io/badge/Code%20Coverage-80%25-success?style=flat)

# Sample how-to build code coverage (lcov and gcov reports) in cmake projects with GoogleTest

# Dependencies

Packages gcc compiler, gcovr, lcov, cmake, google test

## How to use:

1. git clone https://github.com/andreymasloboev/code_coverage.git
2. cd code_coverage
3. mkdir build
4. cd build
5. cmake ..
6. cmake --build .
7. cmake --build . --target coverage-gcov
8. cmake --build . --target coverage-lcov
9. open file build/coverage-lcov/index.html

![Alt text](coverage.png?raw=true "Optional Title")
