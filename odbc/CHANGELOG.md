## ReleaseNotes

### 2.00.11

**故障修复**

- 修复多线程使用 ClickHouse ODBC 驱动时插件 crash 的问题。

### 2.00.10

**优化**

- 优化了部分报错信息。
- 增加对接口 odbc::close 输入参数的校验。

**故障修复**

- 修复了多个线程共用一个连接进行并发查询和写入时 server 宕机的问题。
- 修复了读取 Oracle 的中文标点数据时出现乱码的问题。
- 修复了关闭 ODBC 的连接时偶现 server 宕机的问题。