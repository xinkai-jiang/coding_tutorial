# Chapter 3

这一章节我们将讨论有关STL的常用容器的使用方法

## How to compile the code

You should compile the code first. To seperate the build file and source file, we are supposed to create a build folder to contain our build and binary files. Then we can compile the soure code in this build folder.

```bash
cd ./ch3
mkdir build
cmake ..
make -j4
```

## ex1 basic vector

The file is "constructor.cpp". This experiment illustrates constructor and disconstructor function of class in both non-pointer and pointer way.

You can see the difference between public members and private members.

You should do:
1. read the source code and comments firstly
2. run the code by yourself
