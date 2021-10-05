# Problem Link : https://www.codechef.com/JAN20B/problems/DYNAMO

u = int(input())
for _ in range(u):
    n = int(input())
    a = int(input())
    s = a + 2*(10**n)
    print(s)
    b = int(input())
    c = (10**n)-b
    print(c)
    d = int(input())
    e = (10**n)-d
    print(e)
    final = int(input())
    if final == -1:
        exit()
        
  class Node:
   def __init__(self, dataval=None):
      self.dataval = dataval
      self.nextval = None

class SLinkedList:
   def __init__(self):
      self.headval = None

list1 = SLinkedList()
list1.headval = Node("Mon")
e2 = Node("Tue")
e3 = Node("Wed")
# Link first Node to second node
list1.headval.nextval = e2

# Link second Node to third node
e2.nextval = e3