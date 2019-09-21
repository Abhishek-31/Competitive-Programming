with open("check.text","w+") as f:
    a=1
    p=1
    for i in range(1000000):
        a = (a % 1000000007*(i+1) % 1000000007) % 1000000007
        p = (p % 1000000007*a % 1000000007) % 1000000007
        f.write(str(p))
        if i!=1000000:
            f.write(",")
