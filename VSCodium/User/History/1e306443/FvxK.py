def imageSmoother(img):
    import copy

    imga = copy.deepcopy(img)

    for i in range(len(img)):
        for j in range(len(img[0])):
            val = 0
            count = 0
            try:
                if (i-1 < 0 or j -1 < 0):
                    raise IndexOutOfBoundsError
                val += img[i-1][j-1]
                count += 1
            except:
                pass

            try:
                if (j -1 < 0):
                    raise IndexOutOfBoundsError
                val += img[i][j-1]
                count += 1
            except:
                pass

            try:
                if (j -1 < 0):
                    raise IndexOutOfBoundsError
                val += img[i+1][j-1]
                count += 1
            except:
                pass

            try:
                val += img[i+1][j]
                count += 1
            except:
                pass

            try:
                val += img[i+1][j+1]
                count += 1
            except:
                pass

            try:
                val += img[i][j+1]
                count += 1
            except:
                pass

            try:
                if (i-1 < 0):
                    raise IndexOutOfBoundsError
                val += img[i-1][j+1]
                count += 1
            except:
                pass

            try:
                if(i-1 < 0):
                    raise IndexOutOfBoundsError
                val += img[i-1][j]
                count += 1
            except:
                pass
            val += img[i][j]
            count += 1
            print(val, count)
            val = val//count
            imga[i][j] = val
    for i in imga:
        print(i)


l = [
    [100,200,100],
    [200,50,200],
    [100,200,100]
]
imageSmoother(l)
