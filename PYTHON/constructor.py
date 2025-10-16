class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
    def start(self):
        print(f"The {self.year} {self.make} {self.model} is starting.")
    def stop(self):
        print(f"The {self.year} {self.make} {self.model} is stopping.")
    def display(self):
        print(f"Car Details: {self.year} {self.make} {self.model}")
my_car = Car("Nissan", "GTR", 2022)
my_car.display()
my_car.start()
my_car.stop()
