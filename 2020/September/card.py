p=1000000007
def ncr(n, r, p): 
    # initialize numerator 
    # and denominator 
    num = den = 1 
    for i in range(r): 
        num = (num * (n - i)) % p 
        den = (den * (i + 1)) % p 
    return (num * pow(den,  
            p - 2, p)) % p
t=int(input())
for i in range(t):
    n=int(input())
    maxi=0
    u={}
    l=list(map(int,input().split()))
    for a in l:
      if a>maxi:
        maxi=a
      if a in u: 
        u[a] += 1
      else: 
        u[a] = 1
    ans=1
    for x in u:
       if x==maxi and u[x]%2==0:
          ans=ans * (pow(2,u[x])-ncr(u[x],int(u[x]/2),p))
       else:
          ans=ans*pow(2,u[x],p)
    print(ans)
        
