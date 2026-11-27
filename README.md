# HappySay

这个项目受到了fortune的启发，若要尝试，请使用
> sudo apt install fortune
> 注：不同系统的安装命令有所不同，上面这个为Debian/Ubuntu安装方法

## 关于这个项目
这是一个有（？）趣的项目

### 程序行为
打开程序（切记要在终端运行，不然程序会一闪而过），程序会在say文件夹下随机挑选一个笑话，然后输出

### 编译方式
在项目根目录，直接使用：
> g++ -std=c++17 -O2 main.cpp -o main
> ./main

当然，你也可以使用clang++等其他编译器

一般情况，Windows下会自动加上.exe后缀

### 文件作用
```text
HappSay/
├── say/                      内包含txt笑话文件，不列举
├── main.cpp                  主程序入口
└── README.md