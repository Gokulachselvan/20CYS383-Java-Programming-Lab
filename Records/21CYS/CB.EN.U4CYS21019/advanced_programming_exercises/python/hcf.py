x=int(input("Enter any number: "))
y=int(input("Enter any number: "))
if x>y:
    smaller=y
else:
    smaller=x
for i in range(1,smaller+1):
    if((x % i == 0) and (y % i == 0)):
        hcf=i
print("HCF OF",x,"and",y,"is",hcf)
