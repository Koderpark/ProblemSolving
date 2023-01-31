s = input()
st = []

for i in range(len(s)) :
    if s[i] == '(' :
        st.pop()
        st.append(int(s[i-1]))
        st.append(s[i])

    elif s[i] == ')' :
        time = 0
        while True :
            tmp = st.pop()
            if tmp == '(' :
                break
            time += tmp
        st.append(time * int(st.pop()))

    else :
        st.append(1)

ans = 0
for i in st :
    ans += i

print(ans)