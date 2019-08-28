def f(a):
    ans = 0
    a = [0] + a
    
    for i in range(len(a)):
        xor = a[i]
        for j in range(i+1,len(a)):
            xor = xor ^ a[j]
            if xor == 0:
                ans += j-i-1
                # print(i,j)
    return ans

from random import randint
print(20)
for t in range(20):
    n = randint(1,200)
    print(n)
    a = [randint(1,69) for _ in range(n)]
    print(*a)

    