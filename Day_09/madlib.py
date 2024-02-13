import string
with open("story.txt", "r") as f:
    story = f.read()
    # print(story)

# words = [] # lists
words = set()  # set
start_of_word = -1

target_start = "["
target_end = "]"

for i, char in enumerate(story):
    if char == target_start:
        start_of_word = i

    if char == target_end and start_of_word != -1:
        word = story[start_of_word: i+1]
        # words.append(word) # list if we start go with the append
        words.add(word)  # add with the set
        start_of_word = -1
print(words)

answers = {}

for word in words:
    answer = input("Enter the answer for the word : " + word+" : ")
    answers[word] = answer

print(answers)

for word in words:
    story = story.replace(word, answers[word])
print(story)
