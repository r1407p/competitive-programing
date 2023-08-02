import random
n = 100
m = 500

file = open('test.txt','w');
file.write(str(n)+' '+str(m))
file.write('\n')
for i in range(m):
    
    file.write(str(random.randint(1,n))+' '+str(random.randint(1,n)))
    file.write('\n')