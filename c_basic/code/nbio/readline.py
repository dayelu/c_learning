filename = "test.txt"

with open(filename,"r") as f_obj:
	print(f_obj.readline())

f_obj = open(filename, "r")

for line in f_obj.readlines():
	print(line,end='')

while f_obj:
	line = f_obj.readline()
	print(line,end='')
	if not line:	#判断文件读取到末尾的方式，判断行内容是否为空， not line 等价于 line == ''
		break

f_obj.close()