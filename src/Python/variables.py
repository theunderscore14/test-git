import random

favFruit = "Apple"
like = "I Like "
print(like + favFruit)
a = 2
b = 3
sum = a / b
print("Sum:", sum) 
temperature = 25
print("Temperature: " + str(temperature) + "°C")

if temperature > 20:
    print("It's warm")
else:
    print("It's cold")

dice = random.randint(1, 6)
print('You rolled a ' + str(dice))
if dice == 6:
    print("You got 6!")
else:
    print("Try again!")

age = 18
print("Age: " + str(age))

if age >= 18:
    print("You are an adult.")
else:
    print('You are not an adult yet.')

if age < 13:
    print("You are a child.")
elif age < 20:
    print("You are a teenager.")

mySquad = ['Calafiori', 'Martinelli', 'Nwaneri', 'Havertz', 'Madueke', 'Kepa']
print(mySquad[2])
mySquad[0] = 'Saka'
print(mySquad)
mySquad.append('Kepa')
print(mySquad)
mySquad.insert(1, 'Zubimendi')
print(mySquad)
mySquad.pop(6)
print(mySquad)
print(len(mySquad))
for player in mySquad:
    print(player)