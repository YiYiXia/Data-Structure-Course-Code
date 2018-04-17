# 栈实验题目要求说明

# 迷宫求解
- 问题描述：首先生成一个随机的迷宫，再利用栈模型，对迷宫进行求解，找出迷宫的可行道路。
- 输入：迷宫大小
- 输出：该迷宫的可行道路


# 括号匹配
- 问题描述：给定一个字符串，其中的字符只包含三种括号：花括号{ }、中括号[ ]、圆括号( )，即它仅由 “( ) [ ] { }” 这六个字符组成。设计算法，判断该字符串是否有效，即字符串中括号是否匹配。括号匹配要求括号必须以正确的顺序配对，如 “{ [ ] ( ) }” 或 “[ ( { } [ ] ) ]” 等为正确的格式，而 “[ ( ] )” 或 “{ [ ( ) }” 或 “( { } ] )” 均为不正确的格式
- 输入：字符串
- 输出：该字符串是否合法

例如：

输入：`{ [ ( ) }`, 输出：`不正确格式`

# 行编辑
- 问题描述：
一个简单的行编辑程序的功能是：接收用户从终端输入的程序或数据，并存入用户的数据区。
由于用户在终端上进行输入时，不能保证不出差错，因此，若在编辑程序中，“每接收一个字
符即存入用户数据区”的做法显然不是很恰当。较好的做法是，设立一个输入缓冲区，用以接
收用户输入的一行字符，然后逐行存入用户数据区。允许用户输入出差错，并在发现有误时
可以及时更正。例如，当用户发现刚刚键入的一个字符是错的时，可补进一个退格符“#”，以
表示前一个字符无效；如果发现当前键入的行内错误较多或难以补救，则可以键入一个
退行符“@”，以表示当前行中的字符均无效。例如假设从终端接收了这样的两行字符：
```
whil##ilr#e(s#*s)
    outcha@    putchar(*s=#++);
```
则实际有效的是下列两行：
```
while(*s)
    putchar(*s++);
```

- 输入：若干行程序或者数据，每行不超过200个字符。
- 输出：经过行编辑程序处理过后的输出。

例如：

输入：`whil##ilr#e(s#*s)outcha@ putchar(*s=#++);`
, 输出：`while(*s) putchar(*s++);`

# 表达式求值
- 问题描述：一个算术表达式是由操作数(operand)、运算符(operator)和界限符(delimiter)
组成的。运算符只含加减乘除等四种运算符，界限符有左右括号和表达式起始、结束符“#”。
对于给定的算术表达式，求出该算术表达式的结果。

- 输入：表达式
- 输出：表示式计算结果

例如：

输入：`#（7+1）*（8-28/4）#`,
输出：`8`