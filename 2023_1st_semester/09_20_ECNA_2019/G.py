from functools import reduce

def chinese_remainder(n, a):
    sum = 0
    prod = reduce(lambda a, b: a*b, n)

    for n_i, a_i in zip(n, a):
        p = prod / n_i
        sum += a_i * mul_inv(p, n_i) * p
    return sum % prod


def mul_inv(a, b):
    b0 = b
    x0, x1 = 0, 1
    if b == 1: return 1
    while a > 1:
        q = a / b
        a, b = b, a%b
        x0, x1 = x1 - q * x0, x0
    if x1 < 0: x1 += b0
    return x1
def compute_lcm(x, y):

   # choose the greater number
    if x > y:
        greater = x
    else:
        greater = y

    while(True):
        if((greater % x == 0) and (greater % y == 0)):
            lcm = greater
            break
        greater += 1

    return lcm
if __name__ == '__main__':
    a,b,c,d,e,f,g = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)
    e = int(e)
    f = int(f)
    g = int(g)
    temp = []
    for i in range(2,a,2):
        temp.append((a-i)*(b-i)*(i//2))
    temp = sorted(temp)
    m= [temp[-1],temp[-2],temp[-3]]
    x = [c,d,e]
    m = [3, 5, 7]
    x = [2, 3, 2]
    print(m,x)
    mn = chinese_remainder(m,x)
    lcm = compute_lcm(compute_lcm(m[0],m[1]),m[2])
    print(mn,lcm)