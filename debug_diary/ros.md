# Ubuntu Debug Log

## 2021.1.18

在消息类型中定义大小的变量都为```const```

```msg
# xxx.msg
--------------
int8 angle = 10
```

这个```angle = 10```不是默认值，也不可以在消息发布的时候修改。

## 2021.06.14

leg_detector这个包里面设置的scan还有其他的frame不对，
在```/opt/ros/melodic/```下改不方便，
最好还是源码编译然后用

