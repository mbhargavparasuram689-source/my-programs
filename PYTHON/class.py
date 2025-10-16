class Student:
    def __init__(self, Name, r_no):  
        self.Name = Name
        self.r_no = r_no
        print("Name is:", self.Name)
        print("R.No is:", self.r_no)

    def marks(self, Marks):
        self.Marks = Marks
        print("Marks are:", self.Marks)
s1 = Student("padma", 545)
s2 = Student("sri", 557)
s2.marks(89)
