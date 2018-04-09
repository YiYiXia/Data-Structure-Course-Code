// 3.8
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


//3.10 
typedef struct QNode{  // 队列结点
    QElemType data;
    struct QNode *next;
}QNode, *QueuePtr;

typedef struct{  // 队列
    QueuePtr rear;  // 队尾指针
}LinkQueue;

//初始化
/* 初始化带头结点的单循环链表队列 */
Status InitQueue(LinkQueue &Q)
{
    Q.rear = MakeNode(sizeof(QNode));
    Q.rear->next = Q.rear;
    return OK;
}

//入队
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

//出队
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


//3.11
//数据结构定义
#define MAXQSIZE 100  //最大队列长度
typedef struct{
    QElemType *base;       //初始化的动态分配存储空间
    unsigned int rear;     //尾指针，指向队尾元素
    unsigned int length;   //队列当前长度 
}SqQueue;

//入队
/* 将元素e加入队列Q */
Status EnQueue(SqQueue &Q, QElemType e)
{
    if(Q.length==MAXQSIZE) return ERROR;  //队满
    Q.rear = (rear+1)%MAXQSIZE;
    Q.base[Q.rear] = e;
    Q.length++;
    return OK;
}

//出队
/* 队列Q出队，用e返回队头 */
Status DeQueue(SqQueue &Q, QElemType &e)
{
    if(Q.length==0) return ERROR; //队列为空
    front = (Q.rear-Q.length+1+MAXQSIZE) % MAXQSIZE;
    e = Q.base[front];
    Q.lenth--;
    return OK;
}
