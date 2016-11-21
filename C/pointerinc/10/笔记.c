struct 
{
	int 	a;
	char 	b;
	float 	c;
} x;

struct 
{
	int 	a;
	char 	b;
	float 	c;
}y[20],*z;

struct SIMPLE
{
	int 	a;
	char 	b;
	float 	c;
};
struct SIMPLE x;
struct SIMPLE y[20],*z;

typedef struct 
{
	int 	a;
	char 	b;
	float 	c;
} Simple;
Simple 	x;
simple	y[20],*z;
struct COMPLEX
{
	float 	f;
	int 	a[20];
	long	*lp;
	struct SIMPLE 	s;
	struct SIMPLE 	sa[10];
	struct SIMPLE	*sp;
};

void func(struct COMPLEX *cp)
{
	(*cp).f;
	cp->f 
	箭头操作符接受两个操作数，但做操作数必须是一个指向结构的指针
	间接访问操作符内建于箭头操作符中，所以我们不需要显示的执行间
	接访问或使用括号
} 

struct SELF_REF2
{
	int 	a;
	struct SELFREF2 	*b;
	int 	c ;
};

typedef struct
{
	int 	a;
	SELF_REF3	*b;
	int 	c;
}SELF_REF3;

typedef struct SELF_REF3_TAG
{
	int 	a;
	struct SELF_REF3_TAG 	*b;
	int 	c;
}SELF_REF3;

struct B;
struct A
{
	struct B *pre;
	/*ohter*/
};
struct B
{
	struct A *pre;
	/*other*/
};








































































































































































































































































































































































































































































































































































































































