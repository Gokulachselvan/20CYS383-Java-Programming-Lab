def fibo(num):
    if num==0:
        return 0
    elif num==1:
        return 1
    else:
        return fibo(num-2)+fibo(num-1)
n=int(input("Enter any num: "))
print(fibo(n))
