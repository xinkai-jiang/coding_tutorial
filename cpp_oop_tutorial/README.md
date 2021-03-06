# jiangxkjohn tutorial

这个教程是jiangxkjohn的代码练习草稿和总结，
我将会加入代码论述这些源码是如何工作的。
你可以使用git的分支切换功能来换成不同的主题，
比如C++，python和ROS等

## CPP OOP TUTORIAL

这个项目是为具有一定面向过程编程经验的人阅读的C++教程。
C++是当今世界上最流行的编程语言之一，
在高性能计算、服务器开发、游戏引擎等方面得到了广泛的应用，
在科学计算方面，许多著名的项目比如ROOT需要用到C++开发的。

C++最重要的特点是OOP（面向对象编程），
它是在计算机中构造抽象世界的有力工具，
也使编码和维护变得容易。
本教程通过示例和注释演示了面向对象编程方法是如何使用的，
以便您可以阅读和运行它们。

### 教程使用方法与代码编译方法

教程中有若干章节，
你可以首先阅读```.md```文件来对将要学习的知识有一个大致的了解。
之后你可以阅读代码和注释来了解每种方法的具体使用。
为了加深对于面向程序编程的认识，
强烈推荐自己编译并且运行代码。

在教程中，每个章节单独成为一个工程，
每个工程使用CMake和make进行编译。
使用CMake的时候需要新建一个```build```文件夹，
然后再运行```cmake ..```生成makefile和其他编译文件。

### 教程基本目录
1. struct的构造与多文件C++工程
2. 基于对象的C++编程方法
3. 常用的STL容器的基本使用方法
4. Eigen与Sophus的基本使用方法
5. 面向对象的C++编程方法

