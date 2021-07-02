# Chapter 2

In this chapter, we are going to talk about the object-based programming(not object-oriented). To show you how class works, the explicit comments and terminal output can be found in the code. You strongly recommended to read them carefully and run it.

## How to compile the code

You should compile the code first. To seperate the build file and source file, we are supposed to create a build folder to contain our build and binary files. Then we can compile the soure code in this build folder.

```bash
cd ./ch2
mkdir build
cmake ..
make -j4
```

## ex1 Constructor And Member

The file is "constructor.cpp". This experiment illustrates constructor and disconstructor function of class in both non-pointer and pointer way.

You can see the difference between public members and private members.

You should do:
1. read the include/SimpleParticle.h firstly
2. read the main function in ConstructorAndMember.cpp
3. run the code by yourself
