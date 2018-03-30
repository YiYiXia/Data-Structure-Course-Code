# How to debug code
Debugger调试功能介绍，使用程序的调试功能能够帮助我们快速定位、解决问题。

## 基本概念
- Breakpoint 断点：在程序代码的某行加入断点，在调试运行的时候，程序将会在执行到改行的时
候暂停下来，这个时候可以查看相应变量的当前值和调用关系等程序运行情况。
- Step over 单步执行：每次运行一行代码。
- Step into 单步进入：每次运行一行代码，但遇到函数的时候会进入到函数内部。
- Step out 跳出：跳出当前所在函数。
- 变量查看窗口：可以添加需要查看的变量，会显示变量的当前值。

## Visual Studio
[Debugging in Visual Studio](https://docs.microsoft.com/en-us/visualstudio/debugger/index)

### 添加断点，开始调试
![VS breakpoint](./pic/VS_breakpoint.png)

### 查看变量，控制程序执行
![VS debug 1](./pic/VS_Debug_1.png)

## Dev-C++
### 添加断点，开始调试
![Dev breakpoint](./pic/Dev_breakpoint.png)

### 查看变量，控制程序执行
![Dev debug 1](./pic/Dev_Debug_1.png)

## Visual C++
[Visual C++ 6.0调试功能 图解教程(1)--快速入门](http://www.blogjava.net/tidelgl/archive/2008/08/19/223051.html)
[VC++6.0 Debug单步调试简单入门](http://alorry.blog.163.com/blog/static/647257082011664510817/)

## XCode
[iOS各种调试技巧豪华套餐](http://www.cnblogs.com/daiweilai/p/4421340.html)

[Debugging with Xcode](https://developer.apple.com/library/content/documentation/DeveloperTools/Conceptual/debugging_with_xcode/chapters/about_debugging_w_xcode.html)

[Xcode概览：调试应用程序](http://www.cocoachina.com/cms/wap.php?action=article&id=10358)

## gdb
[gdb 调试利器](http://linuxtools-rst.readthedocs.io/zh_CN/latest/tool/gdb.html)

[用GDB调试程序](http://wiki.ubuntu.org.cn/%E7%94%A8GDB%E8%B0%83%E8%AF%95%E7%A8%8B%E5%BA%8F)
