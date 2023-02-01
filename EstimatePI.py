# With a give number of '0' and '1' given randomly for X and Y,
# calculate the value of PI, taking in consideration the pythagorean theorem.

import random
from turtle import distance

def Estimate_PI(n):
    NumPointCircle = 0
    NumPointTotal = 0

    for _ in range(n):
        X = random.uniform(0, 1)
        Y = random.uniform(0, 1)

        distance = X**2 + Y**2

        if distance <= 1:
            NumPointCircle += 1
        
        NumPointTotal += 1

    return 4 * NumPointCircle / NumPointTotal

if __name__ == "__main__":
    print(Estimate_PI(1000))
