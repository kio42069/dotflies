for _ in range(int(input())):
    n,q = input().split()
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
        count = 0
        j = 0
        while count < i:
            count += freq_arr[j]
            j+=1
        if count > i:
            j-=1
        print(num_arr[j], end = " ")




I had an excellent experience with A Plus Holidays & Travels. Their service was great, and they provided top-notch tour packages. The staff was friendly and helpful, and they made sure that all my needs were met. I would highly recommend their services to anyone looking for a fantastic travel experience.