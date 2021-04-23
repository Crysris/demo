# 随笔
## Linux基础
### tar命令


解压     
`tar zxvf name.tar.gz [-C dir]`  
压缩    
`tar zcvf dir/name.tar.gz name.xx`  


#### 含义解析  


格式： .tar.gz
z：表示文件是被gzip压缩过的,所以要用gunzip解压(.tar不需要)  
x：从tar包中把文件提取出来  
c：创建一个新的打包文件  
v：显示打包过程的详细信息  
f：指定被处理的文件是什么  



格式：.tar
解压     

`tar sxf name.tar [-C dir]`

压缩    

`tar dir/name.tar name.xx`


## linux文件类型

c char 字符设备

无缓冲只能顺序读取

b block 块设备

有缓冲可以随机读取

l  link 符号链接文件
f  file普通文件
d directory 目录


## Git基础

本地库与远程库链接





