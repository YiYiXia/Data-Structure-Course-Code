这是程序代码的参考

程序可以按照功能写在不同的.c文件中，在.h头文件中放入相应要提供给其它文件使用
的函数声明、类型定义和宏定义。在使用的时候只需要将相应的头文件包含进去就可以
了，这样就可以保持程序结构清晰明了。
大家应该还记得"#include"命令如何使用吧，它的作用就是把相应包含的文件复制到当
前的文件当中，课件中实例代码中的`#include "comlex.c"`就是如此。

大家写程序的时候要勤写注释，因为代码很多时候都是写给人看的，或许过了一阵自己
代码自己都不记得了，注释不仅帮助我们理解代码的功能和实现，也可以像大纲一样帮
助我们搭建代码的结构。不过大家也不必把注释写得太多，适当就行了。有关程序代码
风格和相关的内容，有本Brian W. Kernighan，Rob Pike写的《程序设计实践》可以参
考。

Files:
    main.cpp: 包含main函数。
    FunctionStateCode.h: 函数返回状态宏定义。
    Complex.h: 复数数据结构的头文件，包含复数数据类型的定义和函数声明。
    Complex.cpp: 复数数据结构的实现，包含具体操作函数的实现。
    Complex.dev: Dev-c++工程文件。
