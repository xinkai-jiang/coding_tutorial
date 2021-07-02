# Ubuntu Debug Log

## 2021.01.16

在以太网的设置里面，如果只是想建立一个局域网，那就不需要填写网关。
网关是路由器和外界沟通的一个桥梁。
如果工控机有好几个网卡，只需要其中一个连上外界的网，
那需要其他的网卡不填写网关，只有那个连外网的网卡填写网关。

## 2021.01.17

修改hostname是在```/etc/hostname```里面修改的。
但是不要忘记了还要把```/etc/hosts```加上host名称，
这个文件的作用还不是很明确

一些文件如```/etc/sudoers```或者其他比较重要的文件，
他们的权限可能是440（r-4 w-2 x-1）。
所以即使是sudo也改不了

## 2021.03.24

修改```/usr/bin/python```的指向可以修改```python```时候用的python版本和默认的执行程序的python版本以及pip的默认python安装包的版本。
使用的命令是```sudo ln -s```即创建软链接

## 2021.04.06

使用虚拟机的时候要经常备份

调节屏幕大小可以安装增强功能，
然后设置一下自动适用屏幕就可以了。

## 2021.04.08

```bash
E: Could not get lock /var/lib/dpkg/lock - open (11: Resource temporarily unavailable)
E: Unable to lock the administration directory (/var/lib/dpkg/), is another process using it?
```

可以使用

```bash
sudo rm /var/lib/dpkg/lock-frontend
sudo rm /var/lib/dpkg/lock
```

此两条的原理还需要研究一下

## 2021.05.21

VirtualBox的虚拟机上的share文件夹可以通过设置用户所在的用户组实现无密码登录

可以使用命令

```bash
sudo usermod -aG vboxsf $(whoami)
```
