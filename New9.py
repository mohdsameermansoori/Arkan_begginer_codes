Weight = int(input("enter the weight : "))
if(Weight<18):
  print(Weight,"underweight")
elif( Weight <21 & Weight >=18 ):
  print(Weight,"healthy")
elif( Weight <=29 & Weight >=21):
  print(Weight,"overweight")
else:
  print(Weight,"obese")
    