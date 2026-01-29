def convert_to_celsius(fahrenheit):
    celsius = (fahrenheit - 32) * 5/9
    return celsius

print(convert_to_celsius(100))

def sum_range(k):
    if k > 0:
        return k + sum_range(k-1)
    else:
        return 0
    
result = sum_range(5)
print(result)

age = int(input("Enter your age: "))
year_to_turn_100 = 2026 + (100 - age)
print("You will turn 100 in the year", year_to_turn_100)