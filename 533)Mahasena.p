# cook your dish here
n=int(input())
li=list(map(int,input().split()))
count=0
for i in range(len(li)):
    if(li[i]%2==0):
        count+=1
if count > n - count:
    print("READY FOR BATTLE")
else:
    print("NOT READY")
