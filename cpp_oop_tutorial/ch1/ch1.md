# Chapter 1

在这个章节中，我们会学习如何使用struct去实现速度，与粒子的类
以及实现多个文件的CMake编译

## How to run this code

You should compile the code first. To seperate the build file and source file, we are supposed to create a build folder to contain our build and binary files. Then we can compile the soure code in this build folder.

```bash
cd ./ch_1
mkdir build
cmake ..
make -j4
```

Then, run the code
```bash
./tb_struct
```
