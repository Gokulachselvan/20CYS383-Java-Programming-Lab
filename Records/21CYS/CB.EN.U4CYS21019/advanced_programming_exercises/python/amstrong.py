num=int(input("Enter any number: "))
sum=0
temp=num
while temp>0:
    digit=temp%10
    sum+=digit*digit*digit
    temp=temp//10
if sum==num:
    print(num,"is amstrong numer")
else:
    print(num,"is not amstrong number")

"""
lower = int(input("Enter lower range: "))  
upper = int(input("Enter upper range: "))  
  
for num in range(lower,upper + 1):  
   sum = 0  
   temp = num  
   while temp > 0:  
       digit = temp % 10  
       sum += digit ** 3  
       temp //= 10  
       if num == sum:  
            print(num)
            """
