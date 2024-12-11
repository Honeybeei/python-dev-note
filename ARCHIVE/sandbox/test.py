def print_person_info(**person):
    print(type(person))  # <class 'dict'>
    for key, value in person.items():
        print(f"{key}: {value}")


print_person_info(name="Honeybeei", age=29, city="Hamburg")
# name: Honeybeei
# age: 29
# city: Hamburg
