t=int(input())
for z in range(t):
    ans=0
    ctr=0
    n=int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ua={}
    ub={}
    uc={}
    va=[]
    #vb=[]
    for item in a:
        if (item in ua): 
            ua[item] += 1
        if (item in uc): 
            uc[item] += 1
        if item not in ua:
            ua[item] = 1
            ub[item] = 0
        if item not in uc:
            uc[item] = 1
        
    for item in b:
        if (item in ub): 
            ub[item] += 1
        if (item in uc): 
            uc[item] += 1
        if item not in ub:
            ub[item] = 1
        if item not in uc:
            uc[item] = 1
        if item not in ua:
            ua[item] = 0
            
        
    for x in uc:
        if uc[x]%2==1:
            ctr=-1
    if ctr==-1:
        ans=-1
    else:
        for x in ua:
            if ua[x]>ub[x]:
                for i in range(0,ua[x]-ub[x]):
                    va.append(x)
        for x in ub:
            if ub[x]>ua[x]:
                for i in range(0,ub[x]-ua[x]):
                    va.append(x)
        
        va.sort()
        for i in range(0,int(len(va)/2)):
            ans=ans+va[i]
    if ans==-1:
       print('-1')
    else:
       print(int(ans/2))










       
            
