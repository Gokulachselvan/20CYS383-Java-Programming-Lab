"""
values=input("Enter numbers by comma separed values: ")
list=values.split(",")
tupe=tuple(list)
set1=set(list)
print(set1)
print(list)
print(tupe)
"""

x=int(input("Enter the number of key value pair to be inserted: "))
car={}
for i in range (x):
    key=input("Enter the value for KEY: ")
    value=input("Enter the value for VALUE: ")
    car[key]=value
print(car)
