import csv

name = input("Name: ")
number = input("Number: ")

with open("phonebook2.csv","a") as file:
    writer = csv.writer(file)
    writer.writerow([name, number])