#armstrong program solve
def armstrong(n):
    sum=0
    temp=n
    while temp>0:
        digit=temp%10
        sum+=digit**3
        temp//=10
    if n==sum:
        return True
    else:
        return False
n=int(input("Enter a number:"))
if armstrong(n):
    print(n,"is an Armstrong number")
else:
    print(n,"is not an Armstrong number")