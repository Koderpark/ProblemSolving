while True :
    s = input()

    if s == "." :
        break

    S = []
    ans = True

    for i in s :
        if i == '(' or i == '[':
            S.append(i)

        if i == ')':
            if len(S) == 0 or S[-1] != '(' :
                ans = False
                break
            else :
                S.pop()

        if i == ']':
            if len(S) == 0 or S[-1] != '[' :
                ans = False
                break
            else :
                S.pop()
    
    if ans and len(S) == 0 :
        print("yes")
    else :
        print("no")