import os
import re

f=open("augmentor.txt",'rU')
lines=f.readlines()
for line in lines:
	match=re.search(':$',line)
	if match:
		print ';\n'
		print line[:-1],
		a=line[:-1]
		i=1
	else:
		if i==1:
			print line[:-1] + '\n{ printf("' + a + '  =>  ' + line[:-1] + '\\n"); }'
			i=0
		else:
			print '| ' + line[:-1] + '\n{ printf("' + a + '  =>  ' + line[:-1] + '\\n"); }'
