/* 程序格式演示
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int max=0;
    if( a>b )
    {
        if(a>c )
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if( b>c )
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("The max is %d\n",max);
}
*/

/* 简单素数和 无函数
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int is = 1;
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                is = 0;
                break;
            }
        }

        if (is)
        {
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}
*/

/* 入门 大小比较
#include <stdio.h>
int large(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(int arglen, char **args)
{
    int a, b;
    scanf("%d,%d", &a, &b);
    int q;
    q = large(a, b);
    printf("%d和%d两个数字的较大值是%d", a, b, q);
    return 0;
}
*/

/* 函数阶乘
#include <stdio.h>
int factorial(int n);
int main(void)
{
    int n;

    scanf("%d",&n);
    printf("%d\n",factorial(n));

    return 0;
}
    int factorial(int n)
{
    int i,fact=1;

    for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
    return fact;
}
*/

/* 学生成绩管理
#include <stdio.h>
int main()
{
    int n, i;
    double score1, score2, score3;

    // 输入学生人数
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("0.00");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        // 输入3科成绩
        scanf("%lf %lf %lf", &score1, &score2, &score3);

        // 计算并输出平均成绩
        printf("%.2f", (score1 + score2 + score3) / 3);

        // 如果不是最后一个学生，输出空格分隔
        if (i != n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
*/

/* 近似sinx
#include <stdio.h>
#include <math.h>
double fact(int x);
double fact(int x)
{
    int q->= 1;
    for (int i = 1; i <= x; i++)
    {
        q->*= i;
    }
    return q->
}
int main()
{
    double x;
    scanf("%lf", &x);
    int flag = 1;
    int i = 0;
    double a, b, q->= 0;
    while (fabs(x) != 0)
    {
        a = pow(x, 2 * i + 1);
        b = fact(2 * i + 1);
        q->+= flag * a / b;
        flag *= -1;
        i++;
        if (q->< 0.0000001)
        {
            break;
        }
    }
    printf("%.2f", q->;
    return 0;
}
*/

/* 指针与地址
#include <stdio.h>
int main()
{
    int a = 2, b = 3;
    int *p1 = &a, *p2 = &b;
    printf("%d %d\n", a, b);
    printf("%d %d\n", &a, &b);
    printf("%d %d\n", *p1, *p2);
    printf("%d %d\n", p1, p2);
    printf("%d %d\n", &p1, &p2);
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int s,i;
    s=0;
    i=1;
    while(i<=100)
    {
        s=s+i;
        i=i+1;
    }
    printf("%d %d",s,i);
    return 0;
}


#include <stdio.h>
int main()
{
    printf("����");

    return 0;
}




*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[100];
    int k = 0;
    while ((c[k] = getchar()) != '\n')
    {
        k++;
    }
    c[k] = '\0';

    for (int i = k - 1; i >= 0; i--)
    {
        printf("%c", c[i]);
    }

    system("pause");
    system("cls");

    return 0;
}
*/

/* 逆序输出
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char c[1000];
    int k = 0;
    while ((c[k] = getchar()) != '\n')
    {
        k++;
    }
    c[k] = '\0';
    for (int i = 1; i <= n; i++)
    {
        printf("%c", c[i]);
    }
    return 0;
}

*/

/* 进度条
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        system("cls");
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("%d%%", i);
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        printf("/100%%\n");
        usleep(50000);
    }
    system("pause");
    system("cls");
    return 0;
}
*/

/* C语言格式基础
#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a);
    a = 1000;
    printf("%d\n", a);

    int b = 222;
    printf("%d\n", b);

    int c = a + b;
    printf("%d\n", c);

    return 0;
}*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int K;
    if (scanf("%d", &K) != 1 || K <= 0)
    {
        printf("NULL\n");
        return 0;
    }

    // 分配循环数组空间
    int *arr = (int*)malloc(K * sizeof(int));
    if (arr == NULL)
    {
        printf("NULL\n");
        return 0;
    }

    int start = 0;  // 窗口起始位置
    int count = 0;  // 当前有效元素个数
    int num;        // 临时存储读取的数值

    // 读取后续数字直到遇到负数
    while (1)
    {
        if (scanf("%d", &num) != 1) break; // 输入错误处理
        if (num < 0) break;               // 遇到负数结束读取

        if (count < K)
        {
            // 填充阶段：直接存入数组
            arr[count++] = num;
        } else {
            // 滚动阶段：更新窗口起始位置，并覆盖旧元素
            start = (start + 1) % K;
            int pos = (start + K - 1) % K; // 计算新元素位置
            arr[pos] = num;
        }
    }

    // 输出结果判断
    if (count < K)
    {
        printf("NULL\n"); // 元素不足K个
    }
    else
    {
        printf("%d\n", arr[start]); // 输出窗口起始位置的元素
    }

    free(arr); // 释放动态数组
    return 0;
}
*/

/* 结构体实现1
#include <stdio.h>
struct lv
{
    int lv1;
    double lv2;
    char lv3;
};

int main()
{
    struct lv chao;
    chao.lv1 = 88;
    chao.lv2 = 3.14159;
    chao.lv3 = 'A';

    printf("%d\n", chao.lv1);
    printf("%f\n", chao.lv2);
    printf("%c\n", chao.lv3);

    return 0;
}
*/

/* 结构体实现2
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int lv1;
    double lv2;
    char lv3;
} lv;

int main()
{
    lv *p;
    p = (lv *)malloc(sizeof(lv));

    printf("%zu\n", sizeof(lv));
    p->lv1 = 88;
    p->lv2 = 3.14159;
    p->lv3 = 'A';

    printf("%d\n", p->lv1);
    printf("%f\n", p->lv2);
    printf("%c\n", p->lv3);

    free(p);
    return 0;
}
*/

/* 结构体实现3
#include <stdio.h>
#include <stdlib.h>
typedef struct LLL
{
    int lv1;
    double lv2;
    char lv3;
    struct LLL *next;
} lv;

int main()
{
    lv *p;
    p = (lv *)malloc(sizeof(lv));

    printf("%zu\n", sizeof(lv));
    p->lv1 = 88;
    p->lv2 = 3.14159;
    p->lv3 = 'A';

    printf("%d\n", p->lv1);
    printf("%f\n", p->lv2);
    printf("%c\n", p->lv3);

    free(p);
    return 0;
}
*/

/* 顺序表 固定内存的实现方法
#include <stdio.h>
#define MAXSIZE 100
typedef int ElemType;

typedef struct
{
    ElemType data[MAXSIZE];
    int length;
} SqList;

void initList(SqList *L)
{
    L->length = 0;
}

int appendElem(SqList *L, ElemType e)
{
    if (L->length >= MAXSIZE)
    {
        printf("Full of it.\n");
        return 0;
    }
    L->data[L->length] = e;
    L->length++;
    return 1;
}

int insertelem(SqList *L, int pos, ElemType e)
{
    printf("Insert %d in position %d\n", e, pos);
    if (L->length == MAXSIZE)
    {
        printf("Failure! Full of it!\n");
        return 0;
    }
    if (pos > L->length + 1 || pos < 1 || pos > MAXSIZE)
    {
        printf("Error position!\n");
        return 0;
    }

    for (int i = L->length; i >= pos; i--)
    {
        L->data[i] = L->data[i - 1];
    }

    L->data[pos - 1] = e;
    L->length++;

    printf("Isert successfully!\n");
    return 1;
}

int deleteelem(SqList *L, int pos)
{
    if (pos < 1 || pos > L->length || pos > MAXSIZE)
    {
        printf("Error position!\n");
        return 0;
    }

    printf("Delete the %d from position %d\n", L->data[pos - 1], pos);
    for (int i = pos - 1; i < L->length - 1; i++)
    {
        L->data[i] = L->data[i + 1];
    }
    // L->data[L->length - 1] = 0;
    L->length--;
    printf("Delete successfully!\n");
    return 1;
}

void listElem(SqList *L)
{
    for (int i = 0; i < L->length; i++)
    {
        printf("%d ", L->data[i]);
    }
    printf("\n");
}

int main()
{
    SqList list;
    initList(&list);
    printf("Succeed in initialize,account the length for %d\n", list.length);
    printf("Account the bit for %zu\n\n", sizeof(list.data));
    appendElem(&list, 1);
    appendElem(&list, 2);
    appendElem(&list, 3);
    appendElem(&list, 4);
    listElem(&list);
    printf("Account the length for %d\n", list.length);
    printf("Account the bit for %zu\n\n", sizeof(list.data));

    insertelem(&list, 2, 89898);
    listElem(&list);
    printf("Account the length for %d\n", list.length);
    printf("Account the bit for %zu\n\n", sizeof(list.data));

    insertelem(&list, 6, 898898);
    listElem(&list);
    printf("Account the length for %d\n", list.length);
    printf("Account the bit for %zu\n\n", sizeof(list.data));

    insertelem(&list, 1, 5656565);
    listElem(&list);
    printf("Account the length for %d\n", list.length);
    printf("Account the bit for %zu\n\n", sizeof(list.data));

    deleteelem(&list, 4);
    listElem(&list);
    printf("Account the length for %d\n", list.length);
    printf("Account the bit for %zu\n\n", sizeof(list.data));

    deleteelem(&list, 7);
    listElem(&list);
    printf("Account the length for %d\n", list.length);
    printf("Account the bit for %zu\n\n", sizeof(list.data));

    deleteelem(&list, 6);
    listElem(&list);
    printf("Account the length for %d\n", list.length);
    printf("Account the bit for %zu\n\n", sizeof(list.data));

    return 0;
}
*/

/* 顺序表 动态内存的实现方法
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef int ElemType;

typedef struct
{
    ElemType *data;
    int length;
} SqList;

SqList *initList()
{
    SqList *L = (SqList *)malloc(sizeof(SqList));
    L->data = (ElemType *)malloc(sizeof(ElemType) * MAXSIZE);
    L->length = 0;
    return L;
}

int appendElem(SqList *L, ElemType e)
{
    if (L->length >= MAXSIZE)
    {
        printf("Full of it.\n");
        return 0;
    }
    L->data[L->length] = e;
    L->length++;
    return 1;
}

int insertelem(SqList *L, int pos, ElemType e)
{
    printf("Insert %d in position %d\n", e, pos);
    if (L->length == MAXSIZE)
    {
        printf("Failure! Full of it!\n");
        return 0;
    }
    if (pos > L->length + 1 || pos < 1 || pos > MAXSIZE)
    {
        printf("Error position!\n");
        return 0;
    }

    for (int i = L->length; i >= pos; i--)
    {
        L->data[i] = L->data[i - 1];
    }

    L->data[pos - 1] = e;
    L->length++;

    printf("Isert successfully!\n");
    return 1;
}

int deleteelem(SqList *L, int pos)
{
    if (pos < 1 || pos > L->length || pos > MAXSIZE)
    {
        printf("Error position!\n");
        return 0;
    }

    printf("Delete the %d from position %d\n", L->data[pos - 1], pos);
    for (int i = pos - 1; i < L->length - 1; i++)
    {
        L->data[i] = L->data[i + 1];
    }
    // L->data[L->length - 1] = 0;
    L->length--;
    printf("Delete successfully!\n");
    return 1;
}

void listElem(SqList *L)
{
    for (int i = 0; i < L->length; i++)
    {
        printf("%d ", L->data[i]);
    }
    printf("\n");
}

int main()
{
    SqList *list = initList();
    printf("Succeed in initialize, account the length for %d\n\n", list->length);
    // printf("Account the bit for %zu\n\n", MAXSIZE * sizeof(list->data));
    appendElem(list, 1);
    appendElem(list, 2);
    appendElem(list, 3);
    appendElem(list, 4);
    listElem(list);
    printf("Account the length for %d\n\n", list->length);
    // printf("Account the bit for %zu\n\n", MAXSIZE * sizeof(list->data));

    insertelem(list, 2, 89898);
    listElem(list);
    printf("Account the length for %d\n\n", list->length);
    // printf("Account the bit for %zu\n\n", MAXSIZE * sizeof(list->data));

    insertelem(list, 6, 898898);
    listElem(list);
    printf("Account the length for %d\n\n", list->length);
    // printf("Account the bit for %zu\n\n", MAXSIZE * sizeof(list->data));

    insertelem(list, 1, 5656565);
    listElem(list);
    printf("Account the length for %d\n\n", list->length);
    // printf("Account the bit for %zu\n\n", MAXSIZE * sizeof(list->data));

    deleteelem(list, 4);
    listElem(list);
    printf("Account the length for %d\n\n", list->length);
    // printf("Account the bit for %zu\n\n", MAXSIZE * sizeof(list->data));

    deleteelem(list, 7);
    listElem(list);
    printf("Account the length for %d\n\n", list->length);
    // printf("Account the bit for %zu\n\n", MAXSIZE * sizeof(list->data));

    deleteelem(list, 6);
    listElem(list);
    printf("Account the length for %d\n\n", list->length);
    // printf("Account the bit for %zu\n\n", MAXSIZE * sizeof(list->data));

    return 0;
}
*/

/* 单链表 数据数组实现
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef int ElemType;

typedef struct
{
    ElemType *data;
    int length;
} LinkNode, *LNode;

LNode initList()
{
    LNode L = (LNode)malloc(sizeof(LinkNode));
    L->data = (ElemType *)malloc(sizeof(ElemType) * MAXSIZE);
    L->length = 0;
    return L;
}

void create(LNode L)
{
    for (int i = 0; i <= MAXSIZE; i++)
    {
        L->data[L->length++] = i;
    }
}

void display(LNode L)
{
    for (int i = 0; i < L->length; i++)
    {
        printf("%d\n", L->data[i]);
    }
    printf("%d", L->length);
}

int main()
{
    LNode L = initList();
    create(L);
    display(L);
    return 0;
}
*/

/* 单链表 指针节点实现
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} linklist;

linklist *initlist()
{
    linklist *L = (linklist *)malloc(sizeof(linklist));
    if (L == NULL)
    {
        printf("内存分配失败！\n");
        exit(1);
    }
    L->data = 0;
    L->next = NULL;
    return L;
}

// 给出n个节点 逐个分配空间
linklist *create(linklist *L, int n)
{
    linklist *head = (linklist *)malloc(sizeof(linklist));
    linklist *tail = head;
    for (int i = 0; i < n; i++)
    {
        linklist *s = (linklist *)malloc(sizeof(linklist));
    }
    tail->next = NULL;
    return head;
}

// 头插法建立链表
void headinsert(linklist *L, ElemType e)
{
    linklist *p = (linklist *)malloc(sizeof(linklist));
    p->data = e;
    p->next = L->next; // 新节点的 next 指向原链表的第一个节点
    L->next = p;       // 头节点的 next 指向新节点
}

int main()
{
    linklist *L = initlist();

    headinsert(L, 1);
    headinsert(L, 2);
    headinsert(L, 3);
    headinsert(L, 4);

    linklist *current = L->next; // 跳过头节点
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    return 0;
}
*/

/* 单链表 复刻1
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LinkNode;

LinkNode *initlist()
{
    LinkNode *L = (LinkNode *)malloc(sizeof(LinkNode));
    L->data = 0;
    L->next = NULL;
    return L;
}

void headinsert(LinkNode *L, ElemType e)
{
    LinkNode *temp = (LinkNode *)malloc(sizeof(LinkNode));
    temp->data = e;
    temp->next = L->next;
    L->next = temp;
}

void tailinsert(LinkNode *L, ElemType e)
{
    LinkNode *temp = (LinkNode *)malloc(sizeof(LinkNode));
    temp->data = e;
    temp->next = NULL;

    LinkNode *t = L;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = temp;
}

int main()
{
    LinkNode *L = initlist();

    // headinsert(L, 88);
    // headinsert(L, 90);
    // headinsert(L, 48);
    // headinsert(L, 46);
    // headinsert(L, 86);
    // headinsert(L, 5);

    // tailinsert(L, 59);
    // tailinsert(L, 58);
    // tailinsert(L, 89);
    // tailinsert(L, 5589);

    LinkNode *p = L;
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }

    return 0;
}
*/

/* 单链表 复刻2
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
typedef struct point
{
    ElemType data;
    struct point *next;
} LinkNode, *Link;

// 创建链表
Link initlist(Link L)
{
    L = (Link)malloc(sizeof(LinkNode));
    L->data = 0;
    L->next = NULL;
    return L;
}

void insert(Link L, ElemType e)
{
    Link t = (Link)malloc(sizeof(LinkNode));
    t->data = e;
    t->next = L->next;
    L->next = t;
}

void display(Link L)
{
    Link p = L->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next; // 添加这行来移动指针
    }
    printf("\n");
}

int main()
{
    Link L = initlist(L);
    insert(L, 88);
    insert(L, 99);

    display(L);

    insert(L, 77);
    display(L);
    return 0;
}
*/

/* 双链表学习
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;

typedef struct DNode
{
    ElemType data;
    struct DNode *prev; // 前驱指针
    struct DNode *next; // 后继指针
} DNode, *DLinkList;

DLinkList initList()
{
    DNode *head = (DNode *)malloc(sizeof(DNode));
    if (head == NULL)
        exit(1);
    head->prev = NULL;
    head->next = NULL;
    return head;
}

// 2. 头插法插入
void headInsert(DLinkList L, ElemType e)
{
    DNode *newNode = (DNode *)malloc(sizeof(DNode));
    if (newNode == NULL)
        exit(1);
    newNode->data = e;

    newNode->next = L->next;
    if (L->next != NULL)
    {
        L->next->prev = newNode; // 原首节点的prev指向新节点
    }
    newNode->prev = L;
    L->next = newNode;
}

// 3. 尾插法插入
void tailInsert(DLinkList L, ElemType e)
{
    DNode *newNode = (DNode *)malloc(sizeof(DNode));
    if (newNode == NULL)
        exit(1);
    newNode->data = e;
    newNode->next = NULL;

    DNode *p = L;
    while (p->next != NULL)
    {
        p = p->next; // 找到尾节点
    }
    p->next = newNode;
    newNode->prev = p;
}

// 4. 在指定位置插入（位置从1开始）
void insertAt(DLinkList L, int pos, ElemType e)
{
    if (pos < 1)
        return;

    DNode *p = L;
    for (int i = 0; i < pos - 1 && p != NULL; i++)
    {
        p = p->next; // 找到pos的前驱节点
    }
    if (p == NULL)
        return; // 位置无效

    DNode *newNode = (DNode *)malloc(sizeof(DNode));
    if (newNode == NULL)
        exit(1);
    newNode->data = e;

    newNode->next = p->next;
    if (p->next != NULL)
    {
        p->next->prev = newNode;
    }
    newNode->prev = p;
    p->next = newNode;
}

// 5. 删除指定位置的节点
void deleteAt(DLinkList L, int pos)
{
    if (pos < 1)
        return;

    DNode *p = L->next;
    for (int i = 1; i < pos && p != NULL; i++)
    {
        p = p->next; // 找到待删除节点
    }
    if (p == NULL)
        return; // 位置无效

    p->prev->next = p->next;
    if (p->next != NULL)
    {
        p->next->prev = p->prev;
    }
    free(p);
}

// 6. 查找元素位置（返回第一个匹配的位置，从1开始）
int locateElem(DLinkList L, ElemType e)
{
    DNode *p = L->next;
    int pos = 1;
    while (p != NULL)
    {
        if (p->data == e)
            return pos;
        p = p->next;
        pos++;
    }
    return -1; // 未找到
}

// 7. 遍历打印链表（双向验证）
void printList(DLinkList L)
{
    printf("正向遍历: ");
    DNode *p = L->next;
    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");

    printf("反向遍历: ");
    p = L;
    while (p->next != NULL)
        p = p->next; // 先走到尾节点
    while (p != L)
    {
        printf("%d -> ", p->data);
        p = p->prev;
    }
    printf("HEAD\n");
}

// 8. 释放链表内存
void freeList(DLinkList L)
{
    DNode *p = L->next;
    while (p != NULL)
    {
        DNode *temp = p;
        p = p->next;
        free(temp);
    }
    free(L); // 释放头节点
}

int main()
{
    DLinkList L = initList();

    headInsert(L, 10);
    headInsert(L, 20);
    tailInsert(L, 30);
    insertAt(L, 2, 50);

    printList(L);
    // 输出：
    // 正向遍历: 20 -> 50 -> 10 -> 30 -> NULL
    // 反向遍历: 30 -> 10 -> 50 -> 20 -> HEAD

    deleteAt(L, 3);
    printf("删除后: ");
    printList(L);

    int pos = locateElem(L, 50);
    printf("元素50的位置: %d\n", pos);

    freeList(L);
    return 0;
}
*/

/* 双链表复刻
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct DNode
{
    ElemType data;
    struct DNode *prior;
    struct DNode *next;
} DNode, *DoubleLink;

DoubleLink initList()
{
    DoubleLink head = (DoubleLink)malloc(sizeof(DNode));
    head->prior = NULL;
    head->next = NULL;
    return head;
}

void headinsert(DoubleLink head, ElemType e)
{
    DoubleLink temp = (DoubleLink)malloc(sizeof(DNode));
    temp->data = e;

    temp->next = head->next;
    temp->prior = head;
    if (head->next != NULL)
    {
        head->next->prior = temp;
    }
    head->next = temp;
}

void tailinsert(DoubleLink head, ElemType e)
{
    DoubleLink temp = (DoubleLink)malloc(sizeof(DNode));
    temp->data = e;
    temp->next = NULL;

    DoubleLink p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    temp->prior = p;
    p->next = temp;
}

// 正向遍历
void headdisplay(DoubleLink head)
{
    DoubleLink p = head->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 反向遍历
void taildisplay(DoubleLink head)
{
    // 先找到最后一个节点
    DoubleLink p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    // 从后向前遍历
    while (p != head)
    {
        printf("%d ", p->data);
        p = p->prior;
    }
    printf("\n");
}

void singledelete(DoubleLink head, ElemType e)
{
    DoubleLink p = head->next;
    while (p != NULL)
    {
        if (p->data == e)
        {
            p->prior->next = p->next;
            p->next->prior = p->prior;
            free(p);
            return;
        }
        p = p->next;
    }
}

int main()
{
    DoubleLink head = initList();
    headinsert(head, 10);
    headinsert(head, 20);
    headinsert(head, 30);
    tailinsert(head, 40);
    tailinsert(head, 50);

    headdisplay(head);
    taildisplay(head);

    singledelete(head, 20);
    headdisplay(head);
    taildisplay(head);

    return 0;
}
*/

/* 栈 数组实现
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100
typedef struct
{
    int data[MAX_SIZE];
    int top;  // 栈顶指针
} ArrayStack;

// 初始化栈
void initStack(ArrayStack *stack)
{
    stack->top = -1;  // 空栈
}

// 判断栈空
bool isEmpty(ArrayStack *stack)
{
    return stack->top == -1;
}

// 判断栈满
bool isFull(ArrayStack *stack)
{
    return stack->top == MAX_SIZE - 1;
}

// 入栈
void push(ArrayStack *stack, int value)
{
    if (isFull(stack))
    {
        printf("Stack Overflow!\n");
        return;
    }
    stack->data[++stack->top] = value;
}

// 出栈
int pop(ArrayStack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow!\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

// 获取栈顶元素（不弹出）
int peek(ArrayStack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty!\n");
        exit(1);
    }
    return stack->data[stack->top];
}

// 打印栈
void printStack(ArrayStack *stack)
{
    printf("Stack: ");
    for (int i = 0; i <= stack->top; i++)
    {
        printf("%d ", stack->data[i]);
    }
    printf("\n");
}

// 示例用法
int main()
{
    ArrayStack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printStack(&stack);  // 输出: Stack: 10 20 30

    printf("Popped: %d\n", pop(&stack));  // 输出: Popped: 30
    printf("Top element: %d\n", peek(&stack));  // 输出: Top element: 20

    return 0;
}
*/

/* 数组栈复刻2
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef int ElemType;

typedef struct
{
    ElemType data[MAXSIZE];
    int top;
} ArrayStack;

void initstack(ArrayStack *stack)
{
    stack->top = -1;
}

void push(ArrayStack *stack, ElemType e)
{
    if (stack->top == MAXSIZE - 1)
    {
        printf("Full stack\n");
        return;
    }
    stack->data[++stack->top] = e;
}

void pop(ArrayStack *stack)
{
    if (stack->top == -1)
    {
        printf("Empty stack!\n");
        return;
    }
    stack->top--;
}

void display(ArrayStack *stack)
{
    if (stack->top == -1)
    {
        printf("NULL\n");
        return;
    }
    printf("stack: ");
    for (int i = stack->top; i >= 0; i--)
    {
        printf("%d", stack->data[i]);
        if (i > 0)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int main()
{
    ArrayStack stack;
    initstack(&stack);

    push(&stack, 789);
    push(&stack, 56);
    push(&stack, 56);
    push(&stack, 57);
    push(&stack, 55);
    push(&stack, 363);

    display(&stack);
    pop(&stack);
    pop(&stack);
    display(&stack);

    return 0;
}
*/

/* 栈 数组复刻1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXSIZE 25
typedef int ElemType;
typedef struct
{
    ElemType *data;
    int top;
} Stack;

void initStack(Stack *s)
{
    s->top = -1;
}

bool EmptyStack(Stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    return false;
}

bool FullStack(Stack *s)
{
    if (s->top == MAXSIZE-1)
    {
        return true;
    }
    return false;
}

bool PushStack(Stack *s, ElemType e)
{
    if (FullStack(s))
    {
        printf("Full of it!");
        return false;
    }
    s->top++;
    s->data[s->top] = e;
    return true;
}

ElemType PopStack(Stack *s)
{
    if (EmptyStack(s))
    {
        return false;
    }
    return s->data[s->top--];
}

void ListStack(Stack *s)
{
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d\n", s->data[i]);
    }
}

int main()
{
    Stack s;
    EmptyStack(&s);
    initStack(&s);
    EmptyStack(&s);
    PushStack(&s, 7);

    ListStack(&s);
    return 0;
}
*/

/* 栈 动态实现
#include <stdio.h>
#include <stdlib.h>

// 定义链栈的节点结构
typedef struct StackNode
{
    int data;               // 数据域
    struct StackNode* next; // 指针域，指向下一个节点
} StackNode;

// 定义链栈结构
typedef struct
{
    StackNode* top; // 栈顶指针
} LinkStack;

// 初始化链栈
void InitStack(LinkStack* S)
{
    S->top = NULL; // 栈顶指针初始化为NULL
}

int push(linkstack* s, int x)
{
    stacknode* newnode = (stacknode*)malloc(sizeof(stacknode)); \\ 创建新节点
    if (newNode == NULL)
    {
        return 0; \\ 内存分配失败
    }
    newNode->data = x;       \\ 设置新节点的数据
    newNode->next = S->top;  \\ 新节点指向当前栈顶
    S->top = newNode;        \\ 更新栈顶指针
    return 1; \\ 入栈成功
}

// 出栈操作
int Pop(LinkStack* S, int* x)
{
    if (S->top == NULL)
    {
        return 0; // 栈为空，无法出栈
    }

    StackNode* temp = S->top; // 保存当前栈顶节点
    *x = temp->data;          // 将栈顶元素的值赋给x
    S->top = temp->next;      // 更新栈顶指针
    free(temp);               // 释放原栈顶节点
    return 1; // 出栈成功
}

// 查看栈顶元素
int GetTop(LinkStack* S, int* x)
{
    if (S->top == NULL)
    {
        return 0; // 栈为空，无法获取栈顶元素
    }
    *x = S->top->data; // 获取栈顶元素的值
    return 1; // 获取成功
}

// 判断栈是否为空
int IsEmpty(LinkStack* S)
{
    return S->top == NULL; // 如果栈顶指针为NULL，栈为空
}

int main() {
    LinkStack S;
    InitStack(&S); // 初始化链栈

    // 入栈操作
    Push(&S, 10);
    Push(&S, 20);
    Push(&S, 30);

    // 查看栈顶元素
    int top;
    if (GetTop(&S, &top))
    {
        printf("栈顶元素是：%d\n", top); // 输出：栈顶元素是：30
    }
    else
    {
        printf("栈为空\n");
    }

    // 出栈操作
    int popped;
    if (Pop(&S, &popped))
    {
        printf("出栈元素：%d\n", popped); // 输出：出栈元素：30
    }
    else
    {
        printf("栈为空，无法出栈\n");
    }

    // 再次查看栈顶元素
    if (GetTop(&S, &top))
    {
        printf("栈顶元素是：%d\n", top); // 输出：栈顶元素是：20
    }
    else
    {
        printf("栈为空\n");
    }

    return 0;
}
*/

/* 栈 链表复刻
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct StackNode
{
    ElemType data;
    struct StackNode *next;
} SNode, *Stack;

typedef struct
{
    Stack top;
} LinkedStack;

void initstack(LinkedStack *S)
{
    S->top = NULL;
}

void push(LinkedStack *S, ElemType e)
{
    Stack newnode = (Stack)malloc(sizeof(SNode));
    newnode->data = e;
    newnode->next = S->top;
    S->top = newnode;
}

void pop(LinkedStack *S)
{
    if (S->top == NULL)
    {
        printf("Empty Stack!\n");
        return;
    }
    Stack temp = S->top;
    S->top = temp->next;
    free(temp);
}

void display(LinkedStack *S)
{
    Stack current = S->top;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    LinkedStack *S = (LinkedStack *)malloc(sizeof(LinkedStack));
    initstack(S);
    push(S, 45);
    push(S, 22);
    push(S, 56);
    display(S);
    return 0;
}
*/

/* 队列 数组实现
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
typedef struct
{
    ElemType data[MAXSIZE];
    int front;
    int rear;
} Queue;

void initQueue(Queue *Q)
{
    Q->front = Q->rear = 0;
}

int isempty(Queue *Q)
{
    if (Q->front == Q->rear)
    {
        printf("Empty\n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int enqueue(Queue *Q, ElemType e)
{
    if (Q->rear >= MAXSIZE)
    {
        if ()
        {
            return 0;
        }
    }

    Q->data[Q->rear] = e;
    Q->rear++;
    return 1;
}

ElemType dequeue(Queue *Q)
{
    if (isempty(Q))
    {
        return 0;
    }

    ElemType e = Q->data[Q->front];
    Q->front++;
    return e;
}
*/

/* 循环队列 数组
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 5
typedef int ElemType;
typedef struct
{
    ElemType data[MAX_SIZE];
    int front;
    int rear;
} CircularQueue;

void initQueue(CircularQueue *queue)
{
    queue->front = queue->rear = 0;
}

bool isEmpty(CircularQueue *queue)
{
    return queue->front == queue->rear;
}

bool isFull(CircularQueue *queue)
{
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void enqueue(CircularQueue *queue, int value)
{
    if (isFull(queue))
    {
        printf("Queue Overflow!\n");
        return;
    }
    queue->data[queue->rear] = value;
    queue->rear = (queue->rear + 1) % MAX_SIZE;
}

int dequeue(CircularQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue Underflow!\n");
        exit(1);
    }
    int value = queue->data[queue->front];
    queue->front = (queue->front + 1) % MAX_SIZE;
    return value;
}
*/

/* 队列 链式结构
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct QueueNode
{
    int data;
    struct QueueNode *next;
} QueueNode;

typedef struct
{
    QueueNode *front;
    QueueNode *rear;
} LinkedQueue;

void initQueue(LinkedQueue *queue)
{
    queue->front = queue->rear = NULL;
}

bool isEmpty(LinkedQueue *queue)
{
    return queue->front == NULL;
}

void enqueue(LinkedQueue *queue, int value)
{
    QueueNode *newNode = (QueueNode*)malloc(sizeof(QueueNode));
    if (!newNode)
    {
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(queue))
    {
        queue->front = queue->rear = newNode;
    }
    else
    {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

int dequeue(LinkedQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue Underflow!\n");
        exit(1);
    }
    QueueNode *temp = queue->front;
    int value = temp->data;
    queue->front = temp->next;
    free(temp);
    return value;
}
*/

/* 队列 链式结构复刻
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100;
typedef int ElemType;
typedef struct QNode
{
    ElemType data;
    struct QNode *next;
} QNode;

typedef struct
{
    QNode *front;
    QNode *rear;
} Queue;

Queue *initqueue()
{
}

int main()
{
    int n;

    return 0;
}*/

/* git管理
#include <stdio.h>
int main()
{
    printf("Studying git!");
    return 0;
}
*/

/* 二叉树实现示例
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 定义二叉树节点结构
typedef struct TreeNode
{
    int data;                    // 节点数据
    struct TreeNode *left;       // 左子树指针
    struct TreeNode *right;      // 右子树指针
} TreeNode, *Tree;

// 创建新节点
Tree createNode(int value)
{
    Tree newNode = (Tree)malloc(sizeof(TreeNode));
    if (newNode == NULL)
    {
        printf("内存分配失败！\n");
        exit(1);
    }
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// 创建示例二叉树
Tree createSampleTree()
 {
    // 创建如下结构的二叉树：
    //       1
    //      / \
    //     2   3
    //    / \   \
    //   4   5   6
    //  /
    // 7

    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);
    root->left->left->left = createNode(7);
    return root;
}

// 前序遍历（根-左-右）
void preorderTraversal(Tree root)
 {
    if (root != NULL)
    {
        printf("%d ", root->data);    // 先访问根节点
        preorderTraversal(root->left); // 再遍历左子树
        preorderTraversal(root->right);// 最后遍历右子树
    }
}

// 中序遍历（左-根-右）
void inorderTraversal(Tree root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);  // 先遍历左子树
        printf("%d ", root->data);     // 再访问根节点
        inorderTraversal(root->right); // 最后遍历右子树
    }
}

// 后序遍历（左-右-根）
void postorderTraversal(Tree root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);  // 先遍历左子树
        postorderTraversal(root->right); // 再遍历右子树
        printf("%d ", root->data);       // 最后访问根节点
    }
}

// 层序遍历（使用队列实现）
#define MAX_QUEUE_SIZE 100
typedef struct
{
    TreeNode* data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queue;

void initQueue(Queue* q)
{
    q->front = q->rear = 0;
}

bool isQueueEmpty(Queue* q)
{
    return q->front == q->rear;
}

bool isQueueFull(Queue* q)
{
    return (q->rear + 1) % MAX_QUEUE_SIZE == q->front;
}

void enqueue(Queue* q, TreeNode* node)
{
    if (!isQueueFull(q))
    {
        q->data[q->rear] = node;
        q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    }
}

TreeNode* dequeue(Queue* q)
{
    if (!isQueueEmpty(q))
    {
        TreeNode* node = q->data[q->front];
        q->front = (q->front + 1) % MAX_QUEUE_SIZE;
        return node;
    }
    return NULL;
}

void levelOrderTraversal(Tree root)
{
    if (root == NULL) return;

    Queue q;
    initQueue(&q);
    enqueue(&q, root);

    while (!isQueueEmpty(&q))
    {
        TreeNode* current = dequeue(&q);
        printf("%d ", current->data);

        if (current->left != NULL)
            enqueue(&q, current->left);
        if (current->right != NULL)
            enqueue(&q, current->right);
    }
}

// 计算树的高度
int getHeight(Tree root)
{
    if (root == NULL) return 0;

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// 查找节点
TreeNode* findNode(Tree root, int value)
{
    if (root == NULL || root->data == value)
        return root;

    TreeNode* left = findNode(root->left, value);
    if (left != NULL) return left;

    return findNode(root->right, value);
}

// 释放树的内存
void freeTree(Tree root)
{
    if (root != NULL)
    {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main()
{
    // 创建示例树
    Tree root = createSampleTree();

    printf("二叉树遍历演示：\n");

    printf("前序遍历（根-左-右）：");
    preorderTraversal(root);
    printf("\n");

    printf("中序遍历（左-根-右）：");
    inorderTraversal(root);
    printf("\n");

    printf("后序遍历（左-右-根）：");
    postorderTraversal(root);
    printf("\n");

    printf("层序遍历：");
    levelOrderTraversal(root);
    printf("\n");

    printf("树的高度：%d\n", getHeight(root));

    // 查找节点示例
    int searchValue = 5;
    TreeNode* found = findNode(root, searchValue);
    if (found != NULL)
        printf("找到节点 %d\n", searchValue);
    else
        printf("未找到节点 %d\n", searchValue);

    // 释放树的内存
    freeTree(root);

    return 0;
}
*/
