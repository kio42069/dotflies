for _ in range(int(input())):
    num = int(input())
    l = list(map(int, input().split()))
    if(num <= 2):
        print(0);
    if (num == 3):
        l.sort()
        if(l[0] + l[1])