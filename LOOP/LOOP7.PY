#Calculate the factorial of a given number using a while loop.

num = int(input("enter the non-negative number :" )) # taking number from the user 
factorial = 1 # starting factorial 1 
i = 1    # i start from 1
if num < 0 :
    print("factorial not defined for negative numbere ")
elif num == 0 :
    print("the factorial of 0 is 1 ") 
else :
    while i <= num :   # if number is greater than i or equall 
        factorial *=i    # then multiple factorial by i 
        i+=1
    print(f"the factorial of {num} is {factorial}")        