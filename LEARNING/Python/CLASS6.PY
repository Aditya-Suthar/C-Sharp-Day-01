#DICTIONARIES

'''students = {"Hermoine": "Gryffindor",
            "Harry": "Griffindor",
            "Ron": "Gryffindor",
            "Draco": "Slytherin",
           }'''

'''print(students["Hermoine"])
print(students["Harry"])
print(students["Ron"])
print(students["Draco"])'''

'''for i in students: #iterates over all the keys
    print(i, students[i], sep = ", ")'''

students =[
        {"name":"Hermoine","house":"Gryffindor","patronus": "Otter"},
        {"name":"Harry", "house":"Gryffindor","patronus":  "Stag"},
        {"name":"Ron", "house":"Gryffindor", "patronus":"Stag"},
        {"name":"Draco","house":"Slytherin","patronus":None  }
        ]


for i in students:
    print(i["name"],i["house"],i["patronus"],sep=" ,")