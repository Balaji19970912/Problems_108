import random

operators = ["+", "-", "*"]
MAX_NUMBER = 12
MIN_NUMBER = 3
TOTAL_PROBLEMS = 10


def generate_problem():
    left = random.randint(MIN_NUMBER, MAX_NUMBER)
    right = random.randint(MIN_NUMBER, MAX_NUMBER)

    operator = random.choice(operators)

    expr = str(left) + operator + str(right)
    # print(expr)
    answer = eval(expr)

    return expr, answer

    # print(left, operator, right)

# print(expr, answe)


wrong = 0

for i in range(TOTAL_PROBLEMS):
    expr, answe = generate_problem()
    while True:
        guess = input("Problem #"+str(i + 1)+" : "+expr+" = ")
        if guess != str(answe):
            wrong += 1
            break
        else:
            break

if wrong == 0:
    print("Congrats you have answered all the questions correctly!")
else:
    print("Total number of wrong answers given are ", wrong)
