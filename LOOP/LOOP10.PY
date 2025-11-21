#Use a while loop to find the first number greater than 100 that is divisible by 17.
num = 101

while True :
    if num%17==0:
        print("first numbner graeter than 100 divisible by 17 is :",num)
        break
    num += 1