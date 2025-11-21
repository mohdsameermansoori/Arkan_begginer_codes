#Prompt for user input repeatedly until the user enters the string "quit".

while True:

   text = input("enter something (type 'quit' to stop) :")

   if text == "quit":
    break
   
   print("you entered:",text)