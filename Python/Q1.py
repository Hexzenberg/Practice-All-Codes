import math
import os
import random
import re
import sys
if __name__ == '__main__':
    n = int(input().strip())
check = {True: "Weird", False: "Not Weird"}
print(check[
        n%2!=0 and (
            n not in range(2,6) or 
            n < 20)
    ])