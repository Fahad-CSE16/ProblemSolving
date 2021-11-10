t=int(input())
mylist=[]
context= {}
for i in range(0,t):
    string= str(input())
    if string in context:
        print(string + str(context[string]))
        context[string] +=1
    else:
        context[string] = 1
        print("OK")
    mylist.append(string)
    
