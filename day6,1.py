class Complex:
    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary= imaginary

    def __str__(self):
        return f"{self.real}+{self.imaginary}i"

    def add(self,a):
     return complex(self.real+a.real,self.imaginary+a.imaginary)
      
    
    
    
    def sub(self,a):
        return complex(self.real-a.real,self.imaginary-a.imaginary)
    
    
    # def multi(self,a):
    #     return complex()
    
    
    
    # def division(self,a):
    #     return complex()

r1 = int(input("Enter real part of a: "))
i1 = int(input("Enter imaginary part of a: "))
r2 = int(input("Enter real part of b: "))
i2 = int(input("Enter imaginary part of b: "))

a = Complex(r1, i1)
b = Complex(r2, i2)

print("Add:", a.add(b))
print("Sub:", a.sub(b))
# print("Multi:", a.multi(b))
# print("Division:", a.division(b))