## 锁

### 信号量

信号量用于进程间同步，可实现多个进程进入一个临界区。持有信号量的进程可被休眠，互斥锁不可。

### Spin Lock(避免进程线程切换)

不可睡眠，临界区的调用函数也不能睡眠，不可被抢占。

UP实现：（关中断）关闭内核抢占 -> 进入临界区 -> 开启内核抢占（开中断）

注意点：关闭的只是进程抢占CPU，并不能防止中断服务程序抢占，如果中断服务程序需要进入临界区，则会导致错误

SMP： （关中断）关闭抢占 -> (忙等)获取锁 -> 进入临界区 -> 释放锁 -> 开启抢占（开中断）

## 内存管理

内核把物理页page作为内存管理的基本单位。**页的拥有者可能是用户进程、内核数据结构、静态内核代码、页高速缓存等**。

### 区 zone

有些页位于特殊的物理地址上，因此内核不能对所有页一视同仁，所以内核把页划分为不同的区，使用区对具有相似特性的页进行分组。

- ZONE_DMA
- ZONE_DMA32
- ZONE_NORMAL
- ZONE_HIGHMEM

### kmalloc（基于slab）

kmalloc获取以字节为单位的内核内存。该函数分配的物理内存是连续的，

如果要获得页，用页的接口（alloc_page)

### vmalloc

该函数只确保页在虚拟地址连续，物理地址不连续。

### 伙伴系统

2的幂次分配页框

### slab

分配内核重复使用对象，如：task_struct、file_struct

