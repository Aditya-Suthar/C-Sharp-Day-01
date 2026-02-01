courses = ['History','Maths','Physics','CompSci']

courses.append('Art')
courses.insert(0,'Art')

print(len(courses)) 
print (courses[1])
print (courses[-1])
print (courses[0:2])
print (courses[2:])

courses_2 = ['Art','Education']
courses.insert(0,courses_2)

print (courses[0])
print (courses)

courses.extend(courses_2)
print (courses)

courses.remove('Maths')
popped = courses.pop()
print (popped)
print (courses)