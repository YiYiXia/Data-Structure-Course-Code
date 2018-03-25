# ��ҵ���ο���

## 2.3
```c
Status ListInsert(SqList &L, ElemType e)
{
	if (L.Length >= L.ListSize)//˳���ռ䲻�㣬��ӿռ�
	{
		newbase = (ElempType *)malloc(L.elem, (L.ListSize + LISTINCREMENT) * sizeof(ElemType));
	}
	if (!newbase) exit(OVERFLOW);
	L.elem = newbase;
	L.ListSize += LISTINCREMENT;

	for (int j = l.length - 1; e < l.elem[j]; j--)
		l.elem[j + 1] = l.elem[j];
	l.elem[j + 1] = e;


	++L.Length;
	return OK;

}
```

## 2.4.2
```c
Status ListInsert(LinkList &L, ElemType e)//��ΪҪ�޸�ָ��L��ָ������Ҫ�����û���ָ���ָ�롣
{
	p = L;
	if (L == NULL || e<p->data)//���һ������Ϊ��  �������������ͷ����
	{
		s = (LinkList)malloc(sizeof(LNode));
		s->data = e;
		s->next = L;
		L = s;	return OK;
	}
	while (p->next != NULL)//��������ڱ��в���,�ȶ�λ����λ�ã�Ȼ����롣
	{
		if (e < p->next->data)
		{
			break;
		}
		p = p->next;
	}
	s = (LinkList)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}
```

## 2.7.1
```c
Status ListDelete(SqList &L)
{
	if (L.Length <= 1)
		return OK;
	//����ֳ������֣�ǰ���±�Ϊ0��OutLength-1��Ԫ���������ظ���������k������������Ϊ�����Ԫ�أ���j������
	int i = 0, j = 1, OutLength = 1;
	while (j<L.Length)//�����������Ա�
	{
		int k;
		for (k = 0; k < OutLength; k++)//����δ�ظ����Ա�
		{
			if (L.elem[k] == L.elem[j])
			{
				j++;
				break;
			}
		}
		if (k == OutLength)//��ǰԪ��δ��ǰ���Ԫ���ظ�
		{
			L.elem[OutLength] = L.elem[j];
			OutLength++;
		}
	}
	L.Length = OutLength;//�޸ı�

}
```

## 2.7.2
```c
Status ListDelete(SqList &L)
{
	if (L.Length <= 1)
		return OK;
	//����ֳ������֣�ǰ���±�Ϊ0��OutLength-1��Ԫ���������ظ�����������Ϊ�����Ԫ��
	//���ʱ��ֻ�������ظ�Ԫ�ر�����һ��Ԫ�رȽϼ���
	int i = 0, j = 1;
	while (j<L.Length)
	{
		if (L.elem[i] == L.elem[j])	j++;
		else
		{
			i++;
			L.elem[i] = L.elem[j];
			j++;
		}
	}
	L.Length = i + 1;
	return OK;
}
```

## 2.8.1
```c
// 2.8.1
Status DelDup(Linklist L)
{
	// ɾ�������������ظ���Ԫ�أ���ͷ���
	for (p = L->next; p; p = p->next) 
	{
		// ��������
		q = p->next;
		r = p;
		while (q)
		{
			if (p->data == q->data) 
			{
				r->next = q->next;
				free(q);
				q = r;
			}
			r = q;
			q = q->next;
		
		}
	}
	return OK;
}// DelDup
```

##  2.8.2
```c
// 2.8.2
Status DelDup_Order(LinkList L)
// ɾ���ǵݼ�������е��ظ�Ԫ�أ���ͷ���
{
	for (p = L->next; p->next; p = p->next) {
		// ���������Ƚ�����������Ƿ����
		while (p->data == p->next->data) {
			q = p->next; p->next = q->next;
			free(q);
		}
	}
	return OK;
}// DelDup_Order
```

## 2.10
```c
// 2.10
Status DelPrior(LNode *s)
// ɾ��ѭ������s����ǰ��
{
	p = s;
	// �ҵ�s����ǰ����ǰ��p
	while (p->next->next != s) p = p->next;
	free(p->next);
	p->next = s;
	return OK;
}// DelPrior
```

## 2.12
```c
// 2.12
Status PartOddEven(SqList L)
// ��˳����е�����������࣬ż�������Ҳ�
{
	temp = L.elem[0];
	i = 0; j = L.length - 1; dir = 0;
	while (i<j) {
		if (dir == 0) { // �Ӻ���ǰ�ҵ���һ������
			if (L.elem[j] % 2 == 1) { // ����
				L.elem[i] = L.elem[j];
				i++; dir = 1;
			}
			else j--;
		}
		else { // ��ǰ����ҵ�һ��ż��
			if (L.elem[i] % 2 == 0) { // ż��
				L.elem[j] = L.elem[i];
				j--; dir = 0;
			}
			else i++;
		}
	}// while
	L.elem[i] = temp;
}// PartOddEven
```
