import csv

name = input("Name: ")
number = input("Number: ")

# with ths example, the DictWriter method reads the header row of "name" & "number" presumed to be 
# available in the the file and is responsible for putting the file or name provided in 
# the correct column
with open("phonebook3.csv","a") as file:
    
    writer = csv.DictWriter(file, fieldnames=["number","name"])
    writer.writerow({"name":name, "number":number})