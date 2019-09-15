# code
import re


def contains_123():
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        # print(arr)
        res = []
        expression = "[4-9]+"
        expressionzero = "0+"
        for ele in range(len(arr)):
            if not bool(re.search(expression, str(arr[ele]))) and not bool(re.search(expressionzero, str(arr[ele]))):
                res.append(arr[ele])
        if len(res) == 0:
            print("-1")
        else:
            res.sort()
            print(*res, sep=' ')


if __name__ == "__main__":
    contains_123()
