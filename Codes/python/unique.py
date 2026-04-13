def pattern(n:int):
    for i in range(n):
        for j in range(n,i,-1):
            print("*",end='')
        space=" "*2*i
        print(space,end='')
        for k in range(n,i,-1):
            print("*",end='')
        print()
        
    for i in range(1,n+1):   
        for m in range(i):
            print("*",end='')
        space=" "*2*(n-i)
        print(space,end='')
        for l in range(i):
            print("*",end='')
        print()
pattern(5)