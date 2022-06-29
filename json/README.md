#ifndef __cplusplus
#define and    &&
#define and_eq &=
#define bitand &
#define bitor  |
#define compl  ~
#define not    !
#define not_eq !=
#define or     ||
#define or_eq  |=
#define xor    ^
#define xor_eq ^=
#endif


标签	含义
eq或者 equal	等于
neq 或者notequal	不等于
gt	大于
egt	大于等于
lt	小于
elt	小于等于
heq	恒等于
nheq	不恒等于

表达式	含义
EQ、=	等于（=）
NEQ、<>	不等于（<>）
GT、>	大于（>）
EGT、>=	大于等于（>=）
LT、<	小于（<）
ELT、<=	小于等于（<=）
LIKE	模糊查询
[NOT] BETWEEN	（不在）区间查询
[NOT] IN	（不在）IN 查询
[NOT] NULL	查询字段是否（不）是NULL
[NOT] EXISTS	EXISTS查询
EXP	表达式查询，支持SQL语法
> time	时间比较
< time	时间比较
between time	时间比较
notbetween time	时间比较

EQ ：等于（=）
例如：

where('id','eq',100);
where('id','=',100);
和下面的查询等效

where('id',100);
表示的查询条件就是 id = 100

NEQ： 不等于（<>）
例如：

where('id','neq',100);
where('id','<>',100);
表示的查询条件就是 id <> 100

GT：大于（>）
例如：

where('id','gt',100);
where('id','>',100);
表示的查询条件就是 id > 100

EGT：大于等于（>=）
例如：

where('id','egt',100);
where('id','>=',100);
表示的查询条件就是 id >= 100

LT：小于（<）
例如：

where('id','lt',100);
where('id','<',100);
表示的查询条件就是 id < 100

ELT： 小于等于（<=）
例如：

where('id','elt',100);
where('id','<=',100);
表示的查询条件就是 id <= 100

[NOT] LIKE： 同sql的LIKE
例如：

where('name','like','thinkphp%');
查询条件就变成 name like 'thinkphp%'

V5.0.5+版本开始，like查询支持使用数组

where('name','like',['%think','php%'],'OR');
[NOT] BETWEEN ：同sql的[not] between
查询条件支持字符串或者数组，例如：

where('id','between','1,8');
和下面的等效：

where('id','between',[1,8]);
查询条件就变成 id BETWEEN 1 AND 8

[NOT] IN： 同sql的[not] in
查询条件支持字符串或者数组，例如：

where('id','not in','1,5,8');
和下面的等效：

where('id','not in',[1,5,8]);
查询条件就变成 id NOT IN (1,5, 8)

[NOT] IN查询支持使用闭包方式

[NOT] NULL ：
查询字段是否（不）是Null，例如：

where('name', null);
where('title','null');
where('name','not null');
如果你需要查询一个字段的值为字符串null或者not null，应该使用：

where('title','=', 'null');
where('name','=', 'not null');
EXP：表达式
支持更复杂的查询情况 例如：

where('id','in','1,3,8');
可以改成：

where('id','exp',' IN (1,3,8) ');
exp查询的条件不会被当成字符串，所以后面的查询条件可以使用任何SQL支持的语法，包括使用函数和字段名称。