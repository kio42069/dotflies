for _ in range(int(input())):
    n,q = map(input().split())
    n = int(n)
    q = int(q)
    num_arr = []
    freq_arr = []
    for i in range(n):
        a = input().split()
        num_arr.append(int(a[0]))
        freq_arr.append(int(a[1]))
    arr = input().split()
    lst = [int(x) for x in arr]
    for i in lst:
        if