

def flatlandSapaceStations(n: int, c: list):

    distancias = []

    for e in range(0, n):
        dist_temp = []
        for j in c:
            dist = j - e
            dist_temp.append(abs(dist))

        distancias.append(min(dist_temp))

    return max(distancias)


n = 12
c = [3, 8]

print(flatlandSapaceStations(n, c))
