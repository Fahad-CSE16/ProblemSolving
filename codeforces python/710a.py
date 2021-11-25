st = input()

l3 = ['a1','h1','a8','h8']

if st in l3:
    print(3)
else:
    li = [x for x in str(st)]

    if li[0] in ['a','h'] and not li[1] in ['1','8']:
        print(5)
    elif not li[0] in ['a','h'] and li[1] in ['1','8']:
        print(5)
    else:
        print(8)