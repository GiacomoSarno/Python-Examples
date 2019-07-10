class Friends:
    def __init__(self, name, age, haircolour ):
        self.name = name
        self.age = age
        self.haircolour = haircolour

    def myfunc(self):
        print ("Hello my name is ")
        print (self.name)
        print ("and I'm")
        print (self.age)
        print ("years old")

p1 = Friends("John",22, "red")
p2 = Friends("Laura", 19, "green")
p1.myfunc()