
print("Welcome to Python Basics!")

'''
# Different Types:

# Variables
# Strings
this_is_a_string = "1738"
print(type(this_is_a_string)) # Prints variable type
print(this_is_a_string)
# Can change type of variable using casting keywords
this_is_an_int = int(this_is_a_string)
print(type(this_is_an_int))
print(this_is_an_int)

# Array/List -> Are Mutable and can store mixing attributes
# Don't have to predetermine size of array
arr = []
arr = ['a', 'b', 'c']
arr = ['this', 'is', 'an', 'array']

# Tuple -> Aren't Mutable
# Act same as an array but cannot change, add, or remove elements once declared
tup = ('a', 'b', 'c')
tup2 = ('Hello', 1, False)


# Loops
arr = [1, 2, 3, 4, 5]

# Loops [start, end) or [start, end-1]
# Default starting index is 0
print("First loop")
for i in range(0, len(arr)): # Same as -> for i in range(len(arr)): 
    print(arr[i])

print("Second loop: ")
# Starts from index-1 or second element
for i in range(1, 5):
    print(arr[i])

print("Third loop:")
# Starts from beginning element, but jumps by 2 elements each iteration
for i in range(0, len(arr), 2): # same as for(int i = 0; i < len(arr); i+=2)
    print(arr[i])

print("Fourth loop")
# Reverse for loop starting from beginning to end
for i in range(len(arr)-1, -1, -1): # same as for(int i = len(arr)-1; i >=0; i--)
    print(arr[i])

print("Fifth loop")
# Another way to print out all elements without range function
for num in arr:
    print(num)


# Sets -> All elements in a set are unique
# Have a defined order, meaning user cannot put elements in specific order
# Have same methods of a regular math set
set1 = {}
set1 = set(['a', 'b', 'c'])
print("Set1: ", set1)

set2 = set(['b', 'c', 'd'])
print("Set2: ", set2)
print("Set1 & 2 Union: ", set1.union(set2))
print("Set1 & 2 Intersection", set1.intersection(set2))
# [a, b, a, b] -> [a, b]

# Question 1
# Using a set,
# Convert the array [A, B, B, A, B] -> [A, B] -> No duplicates

# One Possible solution (Thanks Quinn Kanner <3)
arr = ['a','b','b','a','b']
print("Our array: ", arr)
newset = set(arr)
print("Our set: ", newset)

# Maps/Dictionaries Similar to Hashmaps -> doesn't have to be declared
# Stored in a key, value pair
# All keys must be of same type(i.e, int, string, but cannot be a list), and unique,
# Values can be of different type, value or same values
# Explicit definition of a dictionary
mp = dict()

# Another way to declare dictionary
# Keys -> Type String, Values -> Type Int
mp = {
    "Alex": 23,
    "Jeff": 45
}
# Keys -> Type Int, Values -> Type Int
mp = {
    1: 20,
    2: 30,
    3: 30
}
# Way to print out dictionary
for key in mp:
    print("Key: {} Value: {}".format(key, mp[key]))

# Question 2
# Using a map find if these are anagrams
# "below" "elbow" -> True
# "ankle" "handle" -> False
# Hint: May have to use a sort function

# One possible solution using a map to solve anagrams
def anagram(anagram1, anagram2):
    mp = {}
    anagram1 = anagram1.sort() # below -> below
    anagram2 = anagram2.sort() # elbow -> below
    mp[anagram1] = True # anagram 1 is stored
    if anagram2 in mp:
        return True
    else:
        return False

# Definition of Person Class
class Person:

    # Constructor defines attributes for Person class
    def __init__(self, name, age, cool):
        self.name = name
        self.age = age
        self.cool = cool
        # Default value, cannot be inputted by user
        self.real = True

    # Constructor method that the Person class can call
    def printatr(self):
        print("Name: ", self.name)
        print("Age: ", self.age)
        if self.cool:
            print("Am I cool? Yup!")
        else:
            print("Am I cool? Nope!")
        if self.real:
            print("Am I real? Yeah!")
        else:
            print("Am I real? Absolutely Not")

Wesley = Person("Wesley", 20, False)
Wesley.printatr()

# Question 3
# Create your own class using the methods above

# Question 4
# Check if these are palindromes
# 'aabaa'
# 'abac'

'''