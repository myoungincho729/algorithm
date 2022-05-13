from typing import Any, Sequence

class FixedStack:
    class Empty(Exception):
        pass
    
    class Full(Exception):
        pass
    
    def __init__(self, capacity:int = 256)->None:
        self.stk = [None]*capacity
        self.capacity = capacity
        self.ptr = 0
        
    def __len__(self)->int:
        return self.ptr
    
    def is_Empty(self)->bool:
        return self.ptr <= 0
    
    def is_full(self)->bool:
        return self.ptr >= self.capacity
    
    def push(self, value:Any)->None:
        if self.is_full():
            raise FixedStack.Full
        self.stk[self.ptr] = value
        self.ptr += 1
        
    def pop(self)->Any:
        if self.is_Empty():
            raise FixedStack.Empty
        self.ptr -= 1
        return self.stk[self.ptr]
    
    def top(self)->int:
        return self.stk[self.ptr-1]
    
    def lenn(self)->int:
        return self.ptr
        
#과제 : 맨 위에 있는 것은? 길이는? 구성원소는??

stackk = FixedStack(5)
stackk.push(1)
stackk.push(2)
stackk.push(3)
stackk.push(4)
stackk.push(5)
print(stackk.stk)
print(stackk.pop())
stackk.pop()
print(stackk.lenn())