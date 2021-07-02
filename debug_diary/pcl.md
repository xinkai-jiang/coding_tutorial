# PCL Debug Diary

## 2021.05.08

### 安装pcl的注意事项
1. 安装PCL的时候其实不太需要下源码安装，编译时间太长了
2. 使用```sudo apt-get install libpcl-dev```就可以了
3. 一般来说pcl的include文件在```/usr/include/```下面
4. pcl的库文件在```/usr/x86...```的下面
5. 有个pcd文件的阅读器用```sudo apt-get install pcl-tools```安装就可以了

函数```pcl::fromROSMsg()```里面的参数有一个是```const std::string```，
注意一下这个好像必须把```std::string```输入进去，
输进去```char*```会有问题，
总是不可以生成pcd文件还不报错


