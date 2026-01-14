name = input("What's your name?")

match name:
    case "Harry" | "Ron" | "Hermoine":
        print("Gryffindor")
    case "Draco":
        print("Slytherin")
    case _:
        print("Who?")

# match is similar to switch in c language
