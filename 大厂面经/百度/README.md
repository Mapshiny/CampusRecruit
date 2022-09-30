## ✨百度面经

> 本文档主要记录百度面试的一些常见问题以及一些面试经验，按[通用](#common)、[Java](#java)、[C++](#cpp)、[前端](#frontend)、[Linux](#linux)进行内容整理，希望能帮助到大家。

## <span id="common">通用面经</span>

- 项目中遇到了什么困难? 如何解决的?
- 最近遇到过的困难？**注意：**不要小瞧这些生活问题，非常容易尬住回答不出！
- 快速排序算法的原理是什么?
- Git
- 介绍研究生期间的课题和项目
- 实习内容



## <span id="java">Java</span>

- DAO层怎么开发的 
- 数据库表怎么设计的，表之间的关联怎么实现的 
- 项目里面用到了什么设计模式 
- Kafka在项目里怎么用的 
- Redis在项目里怎么用的，为什么用redis ？
- redis为什么这么快（从线程模型6.0之前和之后，多路复用select，poll和epoll，数据结构展开） 



## <span id="cpp">C/C++</span>

- 内存泄露，你是怎么定位的? gdb 调试定位到具体的模块，然后分析代码实现部分。
- malloc 和 new 区别？虚拟内存和物理内存
- 左值右值
- 内存对齐


## <span id="linux">Linux</span>

-  Linux 下可以查看系统启动时间的命令 ？ 可以的命令：w，uptime，top；不可以的命令：ps。 
-  select, poll, epoll 的区别? 
-  查看进程的所有命令，根据文件名查找其所在目录，修改文件的权限  
-  线程和进程的区别
-  线程之间如何通信的 


## <span id="net">计算机网络</span>

-  粘包？Tcp是面向字节流的无边界协议
-  http和https的区别？https是http的安全版，https需要证书，http不需要...TLS握手等
-  拥塞控制和流量控制
-  http状态码，知道的都说出来 
-  HTTP缓存了解吗？ 强缓存协商缓存区别？ last-midified有什么缺点？etag有什么缺点？
-  HTTP2.0是如何解决“队头阻塞”的问题？ 




## <span id="frontend">前端</span>

 
-  Webpack的loader和plugin的区别？
-  前端监控了解吗？我以为是性能监控，面试官提醒是错误监控，然后我说了Vue中的三种方案
-  webpack的source-map了解吗？ 
-  HTTP长连接的缺点?为什么会有队头阻塞？ 
-  说一下回流和重绘？ 
-  CSS transform是如何减少回流和重绘的？ 回答了CSS3硬件加速 
-  那浏览器是如何开启硬件加速的呢？ 回答了浏览器多进程模型，GPU进程负责调度资源 
-  plugin在webpack中的内部运行机制了解吗？ 答了compiler事件钩子相关，但没说清楚，没达到面试官要求 









