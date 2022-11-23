# ✨基础数学

本文档是面向程序员秋招的数学基础知识，主要包括简单的数学基础知识以及一些常用的数学公式，并不涉及深入的数学公式推导和证明。内容包括但不限于：[概率论与数理统计](#probability)、线性代数、微积分、离散数学等。如果你想更深入学习数学，可参考更专业的教材

## <span id="probability">🚀概率论与数理统计</span>

### 贝叶斯公式

> 理解贝叶斯公式，首先得了解全概率公式： P(A)=P(A|B1)P(B1) + P(A|B2)P(B2) + ... + P(A|Bi)P(Bi)。 

 ![贝叶斯公式](http://c.biancheng.net/uploads/allimg/210902/1GUU234-0.gif) 

### 分布律、分布函数

分布律是取某个值的概率，分布函数是积分

### 一维随机变量及其分布

- 0-1分布：X ~ B（1， P）
- 二项分布：X ~ B（n, P)
- 几何分布：X ~ G（p)  P = (1-p)^k-1 * p 
- 泊松分布：描述稀有事件的概率

### 二项分布

 ![img](https://pic1.zhimg.com/80/v2-af3769a3e1f16ee820cdb5227553d895_720w.jpg?source=1940ef5c) 

### 正态分布

 ![正态分布](https://bkimg.cdn.bcebos.com/formula/d8fc1a3696534a47f23d6bcb60c1212c.svg) 

### 期望、方差

![](D:\CampusRecruit\assert\概率论.jpg)

### 分布

![分布](https://img-blog.csdnimg.cn/20190305135146219.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3UwMTMwNDM3NjI=,size_16,color_FFFFFF,t_70)



## <span id="AOL">✨线性代数</span>

### 行列式

矩阵的行列式，determinate（简称det），是基于矩阵所包含的行列数据计算得到的一个标量。是为求解线性方程组而引入的。

### 二阶行列式

对角线相乘减去对角线相乘

![二阶行列式计算](https://img-blog.csdn.net/20161127170020443)

### 行列式的性质

性质1  行列式与它的转置行列式相等
注：行列式中行与列具有同等的地位,行列式的性质凡是对行成立的对列也同样成立.

性质2  互换行列式的两行（列）,行列式变号
推论  如果行列式有两行（列）完全相同，则此行列式为零

性质3  行列式的某一行（列）中所有的元素都乘以同一个倍数k，等于用数k乘以此行列式.
推论    行列式的某一行（列）中所有元素的公因子可以提到行列式符号的外面．

性质4  行列式中如果有两行（列）元素成比例，则此行列式为零．

性质5  若行列式的某一列（行）的元素都是两数之和,则等于对应的两个行列式之和.


### 矩阵

![矩阵](https://img-blog.csdn.net/20161127223102512)