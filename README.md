# c-learning

大一上学期 C 语言练习仓库。从零开始，每天一个小程序。

## 怎么编译

打开 PowerShell，用绝对路径（不用先 cd）：

    gcc -finput-charset=UTF-8 -fexec-charset=GBK C:\code\hello.c -o C:\code\hello.exe
    C:\code\hello.exe

带中文输出的程序必须加 `-finput-charset=UTF-8 -fexec-charset=GBK`，否则终端显示乱码。

## 程序清单

| 文件 | 练的是什么 | 日期 |
| --- | --- | --- |
| hello.c | 第一个程序，走通编译运行流程 | 09-14 |
| div.c | 整数除法 vs 浮点除法（5/2=2） | 09-16 |
| swap.c | 用第三个变量交换两个数 | 09-17 |
| c2f.c | scanf 输入，摄氏度转华氏度 | 09-19 |
| calc.c | switch 四则运算计算器 | 09-20 |
| circle.c | double / %lf，圆面积 | 09-21 |
| leap.c | if/else，闰年判断（== 别写成 =） | 09-21 |
| sum100.c | while 循环，1 加到 100 = 5050 | 09-21 |
| table.c | for 循环，九九乘法表 | 09-22 |
| calc_func.c | 函数定义与调用，计算器拆四个函数 | 09-23 |
| prime.c | 素数判断（i*i<=n + break） | 09-24 |
| swap_fail.c | 值传递：为什么函数里交换没用 | 09-24 |

## 环境

- 编译器：MinGW-w64 gcc 16.2.0（C:\msys64\ucrt64\bin）
- 编辑器：VS Code
- 系统：Windows
