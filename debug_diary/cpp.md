# C++ Debug Log

## 2021.1.17

一个A对象有一个成员为B对象，A，B共享一个指针，
两个对象的析构函数都把这个指针删掉了，
这个指针指向的是堆内存的空间，在上面删掉两次是非法的。

## 2021.2.28

Eigen中的Matrix的维度一旦大于4，
好像使用```std::vector<Eigen::Matrix4d> trans```的内存分配就有问题。
此时必须使用```trans.reserve(10)```来限制vector的大小，
不然就会出现segmentation fault (core dump)
这个还不知道为什么。

继承一个类的时候，
注意虚函数必须要声明一下。（再看看Essential C++的书）






