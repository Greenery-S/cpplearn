# Learn cpp
> This is a repository for learning C++ programming language. the link of the website is [here](https://www.learncpp.com/)
```zsh
# Only for learn cpp
# www.learncpp.com
export LEARNCPP_BIN_PATH=/Users/bytedance/Desktop/Projects/cpplearn/bin
export LEARNCPP_SRC_PATH=/Users/bytedance/Desktop/Projects/cpplearn/src

function runcpp() {
  local chapter="$1"
  local name="$2"
  mkdir -p "$LEARNCPP_BIN_PATH/$chapter"
  mkdir -p "$LEARNCPP_SRC_PATH/$chapter"
  g++ -Weffc++ -Wextra -Wconversion -Wsign-conversion -Wall -pedantic-errors -std=c++17 -o "$LEARNCPP_BIN_PATH/$chapter/$name" "$LEARNCPP_SRC_PATH/$chapter/$name".cpp && "$LEARNCPP_BIN_PATH/$chapter/$name"
}

function runcpps(){
  local chapter="$1"
  local name="$2"
  mkdir -p "$LEARNCPP_BIN_PATH/$chapter"
  mkdir -p "$LEARNCPP_SRC_PATH/$chapter"
  g++ -Weffc++ -Wextra -Wconversion -Wsign-conversion -Wall -pedantic-errors -std=c++17 -o "$LEARNCPP_BIN_PATH/$chapter/$name" "$LEARNCPP_SRC_PATH/$chapter/$name"/*.cpp && "$LEARNCPP_BIN_PATH/$chapter/$name"
}

```
## structure
- /src: contains the source code of the examples
- /bin: contains the compiled code
- /doc: contains the documentation
- /tmp: contains the temporary files
- ...

## content
- [x] chapter 0 Introduction 12/12
- [x] chapter 1 basics 12/12
- [x] chapter 2 Basics: Functions and Files 14/14
- [x] chapter 3 Debugging
- [x] chapter 4 Fundamental Data Types
- [ ] chapter 5 Constants and Strings


