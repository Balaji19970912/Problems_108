import random

top_of_range = input('Type a number: ')

if top_of_range.isdigit():
    top_of_range = int(top_of_range)

    if top_of_range < 0:
        print('Enter more than zero!')
        quit()
else:
    print('Invalid number!')
    quit()

random_number = random.randint(0, top_of_range)
print(random_number)
guess = 0

while True:
    guess += 1
    user_guess = input('Enter your guess: ')
    if user_guess.isdigit():
        user_guess = int(user_guess)
    else:
        print('Kindly enter number!')
    if user_guess == random_number:
        print('Macthed!')
        break
    else:
        print('Didn\'t match!')

print('Ishtu guess madiya ', guess)
