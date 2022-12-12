def factorial(num):
    if num == 1:
        return num

    return factorial(num - 1) * num

num = int(input("Enter a num: "))
print(factorial(num))