# 作业三参考答案

## 3.8
```c
/* 将中缀表达式exp转换成逆波兰式suffix */
void Transform(char suffix[], char exp[])
{
    InitStack(S); Push(S,'#');
    p=exp; ch=*p++; k=0;
    while(ch!='#' || GetTop(S)!='#'){
        if(!isOperator(ch)) suffix[k++]=ch;  //操作数
        else{  //操作符
            GetTop(S,c);
            switch(Precede(c,ch)){  //比较算符优先级
                case '<': Push(S, ch); ch=*p++; break;
                case '=': Pop(S, e); ch=*p++; break;  // 脱括号
                case '>': Pop(S, c); suffix[k++]=c; break;
            }//switch
        }//else
    }//while
    suffix[k++] = '\0';
}// Transform
```

## 3.10
- 数据结构定义

```c
typedef struct QNode{  // 队列结点
    QElemType data;
    struct QNode *next;
}QNode, *QueuePtr;

typedef struct{  // 队列
    QueuePtr rear;  // 队尾指针
}LinkQueue;
```

- 初始化
```c
/* 初始化带头结点的单循环链表队列 */
Status InitQueue(LinkQueue &Q)
{
    Q.rear = MakeNode(sizeof(QNode));
    Q.rear->next = Q.rear;
    return OK;
}
```
初始化后的队列为

![QueueAfterInit](./pic/3.10_1.png)

- 入队
```c
/* 将元素e加入队列Q */
Status EnQueue(LinkQueue &Q, QElemType e)
{
    s = MakeNode(sizeof(QNode));
    s->data=e; 
    s->next = Q.rear->next;
    Q.rear->next = s;
    Q.rear = s;
    return OK;
}
```

- 出队
```c
/* 队列Q出队，用e返回队头 */
Status DeQueue(LinkQueue &Q, QElemType &e)
{
    if(!Q.rear || Q.rear==Q.rear->next) return ERROR;  //队列未初始化或为空
    s = Q.rear->next->next;  // 指向队头
    e = s->data;
    Q.rear->next->next = s->next;
    if(s==Q.rear) Q.rear=Q.rear->next;  // 队列只有一个元素
    free(s);
    return OK;
}
```
这里需要考虑两种特殊情况，队列为空和队列中只有一个元素。


## 3.11
- 数据结构定义
```c
#define MAXQSIZE 100  //最大队列长度
typedef struct{
    QElemType *base;       //初始化的动态分配存储空间
    unsigned int rear;     //尾指针，指向队尾元素
    unsigned int length;   //队列当前长度 
}SqQueue;
```

- 队满`length==MAXQSIZE`
- 入队
```c
/* 将元素e加入队列Q */
Status EnQueue(SqQueue &Q, QElemType e)
{
    if(Q.length==MAXQSIZE) return ERROR;  //队满
    Q.rear = (rear+1)%MAXQSIZE;
    Q.base[Q.rear] = e;
    Q.length++;
    return OK;
}
```

- 出队
```c
/* 队列Q出队，用e返回队头 */
Status DeQueue(SqQueue &Q, QElemType &e)
{
    if(Q.length==0) return ERROR; //队列为空
    front = (Q.rear-Q.length+1+MAXQSIZE) % MAXQSIZE;
    e = Q.base[front];
    Q.lenth--;
    return OK;
}
```

- 思考：在C语言中`-1%3`等于多少，`-1`还是`2`?

## 5.1
```
(0,0,0,0)->(0,0,0,1)->(0,0,0,2)->
(0,0,1,0)->(0,0,1,1)->(0,0,1,2)->
(0,0,2,0)->(0,0,2,1)->(0,0,2,2)->
...
(1,1,2,0)->(1,1,2,1)->(1,1,2,2)
```

## 5.2
1. `6×8×6=288`
2. `1000+288-6=1282`
3. `1000+2×8×6+4×6=1120`
4. `1000+4×6×6+2×6=1156`

## 5.4
`k=i+j-(i%2)-1`

## 5.5
1. 三元组表示

i | j | v
--|---|--
1 | 2 | 1
1 | 5 | 5
2 | 1 | 2
2 | 2 | 3
2 | 4 | 6
4 | 2 | 4
4 | 5 | 7

2. 十字链表示意图

![十字链表表示](./pic/5.5_1.png)
