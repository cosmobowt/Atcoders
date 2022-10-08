from bisect import bisect_left

n,k=map(int,input().split())
p=list(map(int,input().split()))
yama=[0]
yama2=[[]]
ans=[-1]*n
q=[0]
for index in range(n):
    # print("index",index)
    # print(yama)
    # print(yama2)
    # print(q)
    i=p[index]
    if q[-1]<i:
        if k==1:
            ans[i-1]=index+1
            continue
        q.append(i)
        yama.append(1)
        yama2.append([i])
        continue
    j = bisect_left(q,i)
    yama2[j].append(i)
    q[j]=i
    yama[j]+=1
    if yama[j]==k:
        yama.pop(j)
        q.pop(j)
        for i in yama2[j]:
            ans[i-1]=index+1
        yama2.pop(j)
print(*ans)