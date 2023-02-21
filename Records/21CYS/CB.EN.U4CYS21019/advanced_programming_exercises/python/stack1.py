def create_stack():
    stack = list()  
    return stack

def Isempty(stack):
    return len(stack) == 0

def push(stack, value):
    stack.append(value)
    print("pushed value", value)

def pop(stack):
    if (Isempty(stack)):
        return "stack is empty"
    else:
        return stack.pop()

def show(stack):
    print("The elements of stack are:")
    for i in stack:
        print(i)
        
stack = create_stack()
push(stack, 10)
push(stack, 20)
print("popped item: " ,pop(stack))
show(stack)
